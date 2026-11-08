#include<stdio.h>
#include<locale.h>


float calcula_area(float largura, float comprimento){

    return largura*comprimento;

}

void exibe_area(float largura, float comprimento){

    float area = calcula_area(largura,comprimento);
    printf("Área: %.2f m²", area);
}

int main(){

    setlocale(LC_CTYPE, "");

    float largura,comprimento,area;
    char resp;
    while (1){
        printf("Digite a largura (m): ");
        scanf("%f", &largura);
        printf("Digite a comprimento (m): ");
        scanf("%f", &comprimento);

        exibe_area(largura, comprimento);

        printf("\nDeseja continuar (s/n)?: ");
        scanf(" %c", &resp);
        if (resp == 'n' || resp == 'N'){
            printf("\nCódigo encerrado");
            break;
        }
    }
    return 0;
}
