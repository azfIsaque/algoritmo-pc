#define LIN 3
#define COL 4

int main () {

    int i, j, estudante;
    float notas[LIN][COL], soma, media, maior=0;

    for( i = 0 ; i < LIN ; i++) {
        for (j = 0; j < COL; j++) {
            printf("Defina a %dº nota do %dº estudante: ", (j+1), (i+1));
            scanf("%f", &notas[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < LIN ; i++) {
        soma = 0;
        for ( j = 0 ; j < COL; j++) {
            soma += notas[i][j];
        }
        media = soma/COL;
        printf("A média do %dº estudante é: %.2f\n", (i+1), media);
        if (maior < media) {
            maior = media;
            estudante = (i+1);
        
        }
    }
    printf("Quem teve a maior média foi o estudante %d\n", estudante);
}