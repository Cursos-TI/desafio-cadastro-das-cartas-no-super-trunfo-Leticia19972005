
   #include <stdio.h>
// Desafio Super_Trunfo
int main() {
    char E1, E2;
    char CO1 [6], CO2 [10];
    char C1 [60], C2 [60];
    int P1, P2, T1, T2;
    float A1, A2, PIB1, PIB2;

    printf("Cadastramento de cartas!\n");

    printf("\nInsira os dados das carta 1(C1) e 2(C2):\n");
    printf("\nEstado ('A' a 'H'):\n");
    printf("Carta 1:");
    scanf(" %c", &E1);
    printf("Carta 2:");
    scanf(" %c", &E2);

    printf("Código (Estado + 01 a 04.Ex:B03):\n");
    printf("Carta 1:");
    scanf(" %s", CO1);
    printf("Carta 2:");
    scanf(" %s", CO2);

    printf("Nome da cidade(Sigla. Ex:RJ):\n");
    printf("Carta 1:");
    scanf("%s", C1);
    printf("Carta 2:");
    scanf("%s", C2);

    printf("Número de habitantes da cidade:\n");
    printf("Carta 1:");
    scanf("%d", &P1);
    printf("Carta 2:");
    scanf("%d", &P2);

    printf("Área(Km²) da cidade:\n");
    printf("Carta 1:");
    scanf("%f", &A1);
    printf("Carta 2:");
    scanf("%f", &A2);

    printf("PIB da cidade:\n");
    printf("Carta 1:");
    scanf("%f", &PIB1);
    printf("Carta 2:");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turísticos na cidade:\n");
    printf("Carta 1:");
    scanf("%d", &T1);
    printf("Carta 2:");
    scanf("%d", &T2);

    printf("\nCarta 1:\n");
    printf("Estado:%c\n", E1);
    printf("Código:%s\n", CO1);
    printf("Cidade:%s\n", C1);
    printf("População:%d\n", P1);
    printf("Área(Km²):%.2f\n", A1);
    printf("PIB:%.2f\n", PIB1);
    printf("Número de pontos turísticos:%d\n", T1);

    printf("\nCarta 2:\n");
    printf("Estado:%c\n", E2);
    printf("Código:%s\n", CO2);
    printf("Cidade:%s\n", C2);
    printf("População:%d\n", P2);
    printf("Área(Km²):%.2f\n", A2);
    printf("PIB:%.2f\n", PIB2);
    printf("Número de pontos turísticos:%d\n", T2);

    printf("\nCartas catalogadas com sucesso! ;)");
    return 0;
}

