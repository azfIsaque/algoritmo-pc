#include<stdio.h>
#include<locale.h>

int main(){

    FILE *arquivo;
    setlocale(LC_CTYPE, "");

    char rgm[10];
    int i,num;
    float nota;

    arquivo = fopen("notas.txt", "a");

    if (arquivo == NULL){
        printf("ERRO AO CRIAR ARQUIVO!\n");
        return 1;
    }

    printf("Digite a quantidade de registros: ");
    scanf("%d", &num);

    for (i=0; i<num; i++){
        printf("Digite o rgm: ");
        scanf("%s", rgm);
        printf("Qual a nota de %s: ", rgm);
        scanf("%f", &nota);

        fprintf(arquivo, "%s %.1f\n", rgm, nota);
    }

    printf("\n Arquivo criado com sucesso");
    fclose(arquivo);

    return 0;
}
