#define LIN 3
#define COL 4

int main() {

    int produtos[LIN][COL];

    int i=0, j=0, total_geral = 0, soma;

    for (i = 0 ; i < LIN ; i++) {
        for (j = 0 ; j < COL ; j++) {
            printf("Qual a qte do %dº produto no %dº dia: ", (i+1), (j+1));
            scanf("%d", &produtos[i][j]);
            total_geral += produtos[i][j];
        }
        printf("\n");
    }

    for (i = 0 ; i < LIN ; i++) {
        soma = 0;
        for (j = 0 ; j < COL ; j++) {
            soma += produtos[i][j];
        }
        printf("\nProduto %d: %d unidades", (i+1), soma);
    }

    printf("\nTotal geral: %d\n", total_geral);
}