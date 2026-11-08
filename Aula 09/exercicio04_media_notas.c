#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");


    int contador=0;
    char rgm[10];
    float nota, media,soma=0, maior_nota=0;
    FILE *arquivo = fopen("notas.txt", "r");

    if(arquivo == NULL){
        printf("ERRO AO ABRIR O ARQUIVO\n");
        return 1;
    }

    while(fscanf(arquivo,"%9s %f",rgm, &nota) != EOF){
        soma += nota;
        contador++;
        if (nota> maior_nota){
            maior_nota = nota;
        }

    }
    media = soma/contador;

    printf("Estudantes:%d\n", contador);
    printf("média: %.1f\n",media);
    printf("Maior nota: %.1f\n",maior_nota);


    fclose(arquivo);
    return 0;
}
