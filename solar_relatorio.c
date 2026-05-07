// CODIGO FEITO POR: GUILHERME MAINARDI BESSA, IGOR FERNANDO SILVA LEMES

#include <stdio.h>

int main() {
    int opc;
    float dias[7], tarifa = 0.0, total = 0.0, media = 0.0, maior = 0.0, economia = 0.0;
    char nome[50];

    printf("Nome tecnico \n");
    scanf("%s", nome);

    printf("\nSelecione 1 - Resid | 2 - Comer | 3 - Indus \n");
    scanf("%d", &opc);

    switch(opc) {
        case 1:
            tarifa = 0.85;
            break;

        case 2:
            tarifa = 0.65;
            break;

        case 3:
            tarifa = 0.55;
            break;

        default:
            printf("Invalido");
    }

    for(int i = 0; i < 7; i++) {
        printf("Geracao do dia %d: ", i + 1);
        scanf("%f", &dias[i]);

        if(dias[i] < 0) {
            printf("Erro, sem negativo \n");
            return 1;
        }
    }

    maior = dias[0];

    int diaP = 1;

    for(int i = 0; i < 7; i++) {

        total += dias[i];

        if(dias[i] > maior) {
            maior = dias[i];
            diaP = i + 1;
        }
    }

    media = total / 7.0;
    economia = total * tarifa;

    printf("RELATORIO:\n");
    printf("TEC.: %s\n", nome);
    printf("Opcao: %d\n", opc);
    printf("Total gerado: %.2f KWH\n", total);
    printf("Media diaria: %.2f KWH/dia\n", media);
    printf("Maior geracao: Dia pico = %d (Geracao = %.2f KWH)\n", diaP, maior);
    printf("Economia estimada: R$ %.2f\n", economia);

    return 0;
}
