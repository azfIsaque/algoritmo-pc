#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    int i,cpf;
    float preco, total_compra;

    //printf("Digite seu CPF: ");
    //scanf("%d",&cpf);

    for (i=1; i<=5 ; i++){

        printf("Digite o preço do %d° produto: ",i);
        scanf("%f",&preco);
        total_compra += preco;

    }

   //printf("\nCPF: %d",cpf);
    printf("\nO total da compra é: R$%.2f",total_compra);

    return 0;
}


/* COM WHILE

int main(){
    int cpf;
    float preco = 1, total_compra=0;

    printf("Digite seu CPF: ");
    scanf("%d",&cpf);

    while(preco>0){
        printf("Digite o preço do %d° produto: ",i);
        scanf("%f",&preco);
        total_compra += preco;
    }

    printf("\nCPF: %d",cpf);
    printf("\nO total da compra é: R$%.2f",total_compra);

    return 0;
}
*/
