#include<stdio.h>

//exemplo de FOR (usado quando vc sabe exatemente quantas vezes precisa repetir)
int main(){

    int i, num;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    printf("\nTabuada do %d\n", num);

    for (i=0; i <=10; i++){
        printf("\n%d * %d = %d",num, i, (num*i));
    }



    return 0;
}
