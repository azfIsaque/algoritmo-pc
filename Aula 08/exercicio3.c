#define TAM 6

int main () {

    float salarios[TAM];
    float total, media, maior=0;
    int i, contador;

    for (i = 0 ; i < TAM ; i++) {
        printf("Digite o salário do %dº funcionário: ", (i+1));
        scanf("%f", &salarios[i]);
        total += salarios[i];
    }
    media = total/TAM;
    for (i = 0 ; i < TAM ; i++) {
        if (maior < salarios[i]) {
            maior = salarios[i];
        }
        if (salarios[i] < media) {
            contador++;
        }
    }
    printf("\nMédia salarial: R$ %.2f", media);
    printf("\nMaior salário: R$ %.2f", maior);
    printf("\nSalários abaixo da média: %d\n\n", contador);
}