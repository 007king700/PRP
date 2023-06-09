#include <stdio.h>
#include <stdbool.h>

#define INTEREST_RATE 0.0561
#define TAX_RATE 0.15
#define MIN_DEPOSIT 1000
#define MAX_DEPOSIT 1000000
#define YEAR 2023
#define OUTPUT_FILE "vypisUctu.txt"

double get_value_in_range(double min, double max) {
    double value;
    int valid_input;

    do {
        printf("Zadejte hodnotu v rozmezi %.2lf a %.2lf: ", min, max);
        valid_input = scanf("%lf", &value);

        if (!valid_input) {
            printf("Neplatny vstup, zadejte prosim cislo.\n");
            while (getchar() != '\n');
            continue;
        }

        if (value < min || value > max) {
            printf("Hodnota je mimo povoleny rozsah.\n");
        }
    } while (value < min || value > max);

    return value;
}

bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int days_in_month(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (is_leap_year(year) && month == 2) {
        return 29;
    }
    return days[month - 1];
}

int main() {
    double initial_balance = 0, monthly_deposit = 0;

    initial_balance = get_value_in_range(MIN_DEPOSIT, MAX_DEPOSIT);
    monthly_deposit = get_value_in_range(MIN_DEPOSIT, MAX_DEPOSIT);

    FILE *file = fopen(OUTPUT_FILE, "w");
    if (!file) {
        printf("Nelze otevrit soubor %s.\n", OUTPUT_FILE);
        return 1;
    }

    double balance = initial_balance;
    double interest, tax;
    fprintf(file, "Sporici ucet, rocni urokova mira %.2lf %%\n", INTEREST_RATE * 100);
    fprintf(file, "Stav uctu na pocatku roku %d je %.2lf Kc.\n", YEAR, balance - interest + tax);
    fprintf(file, "------------------------------------------------------------------------------------------\n");
    fprintf(file, "datum       na pocatku mesice          vklad       urok  dan z uroku(%.0lf%%)  na konci mesice\n",TAX_RATE*100);

    for (int month = 1; month <= 12; ++month) {
        int last_day = days_in_month(month, YEAR);
        balance += monthly_deposit;
        interest = balance * (INTEREST_RATE / 12);
        tax = interest * TAX_RATE;
        balance += interest - tax;

        fprintf(file, "%02d.%02d.%4d  %14.2lf Kc    %8.2lf Kc  %6.2lf Kc  %9.2lf Kc %17.2lf Kc\n",
                last_day, month, YEAR, balance - monthly_deposit - interest + tax, monthly_deposit, interest, tax, balance);
    }

    double difference = balance - initial_balance;
    fprintf(file, "------------------------------------------------------------------------------------------\n");
    fprintf(file, "Stav na konci roku %d je %.2lf Kc. Usetril jsi %.2lf Kc.\n", YEAR, balance, difference);
    fprintf(file, "------------------------------------------------------------------------------------------\n");

    fclose(file);
    printf("Vypis uctu byl ulozen do souboru %s.\n", OUTPUT_FILE);
    return 0;
}
