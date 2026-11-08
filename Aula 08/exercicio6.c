

int main() {

    int i, contador = 0;
    float temperaturas[7], soma = 0, media, maior = 0, menor = 100;

    for ( i = 0 ; i < 7 ; i++) {
        printf("Temperatura do %dº dia: ", (i+1));
        scanf("%f", &temperaturas[i]);
    }
    for (i = 0 ; i < 7 ; i++) {
        soma += temperaturas[i];

        if (maior < temperaturas[i]) {
            maior = temperaturas[i];
        }
        if (menor > temperaturas[i]) {
            menor = temperaturas[i];
        }
    }
    media = soma/7;
    for ( i = 0 ; i < 7 ; i++) {
        if (media < temperaturas[i]) {
            contador++;
        }
    }
    printf("\nMédia: %.1fºC", media);
    printf("\nMaior temperatura: %.1fºC", maior);
    printf("\nMenor temperatura: %.1fºC", menor);
    printf("\nDias acima da média: %d\n", contador);
}