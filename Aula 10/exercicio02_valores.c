#include<stdio.h>
#include<locale.h>

void trocar(int *a, int *b){
    int auxiliar;
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;

}

int main(){

    setlocale(LC_CTYPE, "");

    int a,b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);


    printf("\nAntes: a=%d b=%d",a,b);
    trocar(&a,&b); //se usar o pronteiro "*" na função tem q chamar com o endereço com "&"
    printf("\nDepois: a=%d b=%d",a,b);

    return 0;
}
