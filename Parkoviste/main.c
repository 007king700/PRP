#include <stdio.h>

#define SAZBA 20
#define HOD_ZDARMA 2
#define VSTUP "casy.txt"
#define VYSTUP "platby.txt"

int sekundy(int cash, int casm, int cass) {
    int cas = cash * 60 * 60 + casm * 60 + cass;
    return cas;
}

int main() {
    unsigned int vjezdh, vjezdm, vjezds, odjezdh, odjezdm, odjezds, cash, casm, cass, povjezdh, povjezdm, z = 0, x = 0;
    FILE *vstup = fopen(VSTUP, "r");
    FILE *vystup = fopen(VYSTUP, "w");
    if (vstup == NULL) {
        printf("Soubor %s se nepodarilo otevrit, program bude ukoncen.\n", VSTUP);
    } else if (vystup == NULL) {
        printf("Soubor %s se nepodarilo otevrit, program bude ukoncen.\n", VSTUP);
    } else {
        printf("P A R K O V I S T E\n");
        printf("----------------------------------------\n");
        printf("poradi   cas     cas      doba parkovani\n");
        printf("         vjezdu  vyjezdu  sekundy    cas\n");
        printf("----------------------------------------\n");
        fprintf(vystup, "Parkoviste - P L A T B Y\n");
        fprintf(vystup, "------------------------\n");
        fprintf(vystup, "pocet hodin parkovani zdarma       : %d\n", HOD_ZDARMA);
        fprintf(vystup, "hodinova sazba po prekroceni limitu: %d Kc\n", SAZBA);
        fprintf(vystup, "------------------------------------------------------------------\n");
        fprintf(vystup, "poradi  cas vjezdu  cas vyjezdu  doba parkovani  nad limit  platba\n");
        fprintf(vystup, "------------------------------------------------------------------\n");
        while (fscanf(vstup, "%d%d%d%d%d%d", &vjezdh, &vjezdm, &vjezds, &odjezdh, &odjezdm, &odjezds) == 6) {
            povjezdh = vjezdh, povjezdm = vjezdm;
            if (vjezds < odjezds) {
                cass = odjezds - vjezds;
            } else {
                cass = 60 + odjezds - vjezds;
                povjezdm++;
                if (povjezdm == 60) {
                    povjezdm = 0;
                    povjezdh++;
                }
            }
            if (povjezdm < odjezdm) {
                casm = odjezdm - povjezdm;
            } else {
                if (odjezdm == povjezdm) {
                    casm = 0;
                } else {
                    casm = 60 + odjezdm - povjezdm;
                    povjezdh++;
                }
            }
            cash = odjezdh - povjezdh;
            z++;
            int zbytek = cash - HOD_ZDARMA;
            printf("%5d. %02d:%02d:%02d %02d:%02d:%02d  %5d %02d:%02d:%02d\n", z, vjezdh, vjezdm, vjezds, odjezdh,
                   odjezdm, odjezds, sekundy(cash, casm, cass), cash, casm, cass);
            if (sekundy(cash, casm, cass) > HOD_ZDARMA * 3600) {
                x++;
                fprintf(vystup, "%5d.    %02d:%02d:%02d     %02d:%02d:%02d        %02d:%02d:%02d   %02d:%02d:%02d  %3d Kc\n", x, vjezdh,
                        vjezdm, vjezds, odjezdh, odjezdm, odjezds, cash, casm, cass, zbytek, casm, cass, (zbytek * SAZBA) + SAZBA);
            }
        }
        if (fclose(vstup) == EOF) {
            printf("Soubor %s se nepodarilo zavrit.\n", VSTUP);
        } else if (fclose(vystup) == EOF) {
            printf("Soubor %s se nepodarilo zavrit.\n", VSTUP);
        } else{
            printf("----------------------------------------\n");
            printf("Byl vytvoren soubor %s\n", VYSTUP);
        }
    }
    return 0;
}