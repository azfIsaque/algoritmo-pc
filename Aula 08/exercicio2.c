#define TAM 8

int main () {
    
    int valores[TAM];
    int i=0, total, media, contador;

    for (i = 0 ; i < TAM ; i++) {
        printf("Digite o %dº valor: ", (i+1));
        scanf("%d", &valores[i]);
        total += valores[i];
    }
    media = total/TAM;
    for (i = 0 ; i < TAM ; i++) {
        if (valores[i] > media) {
            contador++;
        }
    }
    printf("\nMédia: %d", media);
    printf("\nValores acima da média: %d\n", contador);
}