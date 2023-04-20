#include <stdio.h>

float vstup(){ //vytvorim si funkci na vstup a kontrolu vstupu
    int countOfChar; //vytvorim si int na kontrolu, jestli neni v bafru (nevim jak se pise) nepovoleny znak
    float vstup; //do teto funkce bude ukladan vstup
    do { //vytvorim si loop, aby pri spatnem zadani mohl uzivatel zadat cislo znovu
        countOfChar = 0; //vynuluji
        scanf("%f", &vstup); //uzivatel zada cislo, ktere je pak ulozeno do floatu vstup
        while (getchar() != '\n') { //jestli byl zadan nejaky nepovoleny znak tak se do intu countOfChar pricte 1
            countOfChar++;
        }
        if (countOfChar != 0) { //pokud se int countOfChar nerovna nule, tak uzivatel zadal neco co nemel
            printf("Zadejte cislo:\n"); //pozada uzivatele o napsani cisla znovu
        } else if (vstup < 0) { //cislo zadane uzivatelem nemuze byt mensi nez nula
            printf("Zadejte kladne cislo:\n"); //rekne uzivateli aby zadal cislo kladne
        } else if (vstup == 0){ //zkontroluje zda uzivatel zadal 0
            return 0; //pokud ano, ukonci funkci a navrati cislo 0
        }
    } while (countOfChar != 0 || vstup < 0); //za jakych okolnosti se bude loop opakovat
    return vstup; //navrati float vstup
}

int main() {
    int ucet = 0; //vytvori int ucet
    float zustatek, urok, celkem, novy_zustatek; //vytvori floaty
    do { //vytvorim loop pro opakovani programu
        ucet++; //pricte 1 k intu ucet
        printf("Zustatek na %d. uctu:\n", ucet); //pozada uzivatele o zadani zustatku na uctu
        zustatek = vstup(); //vyvola funkci vstup a navratovou hodnotu ulozi do floatu zustatek
        printf("Urokova sazba na %d. uctu:\n", ucet); //pozada uzivatele o zadani urokove sazby
        urok = vstup(); //vyvola funkci vstup a navratovou hodnotu ulozi do floatu urok
        novy_zustatek = zustatek * urok / 100 + zustatek; //vypocte zustatek na uctu po pricteni uroku
        if (zustatek == 0 && urok == 0) { //zkontroluje zda byli zadany dve nuly
            break; //ukonci loop
        } else { //spusti se pokud neni pravda predchozi if
            printf("Novy zustatek na %d. uctu je: %f Kc.\n", ucet, novy_zustatek); //rekne uzivateli novy zustatek na uctu
        }
        celkem = celkem + novy_zustatek; //pricte float novy_zustatek do float celkem pro nasledne vypocteni prumeru
    }while (1); //porad se opakujici loop
    ucet--; //odebere 1 od intu ucet pro spravne vypsani v naslednem printf
    printf("Celkem je na %d uctech %f Kc a prumerny zustatek na jednom uctu je %f Kc.\n", ucet, celkem, celkem / ucet); //vypise celkovy zustatek na uctech a prumerny zustatek na jednom uctu
    return 0; //ukonci program
}
