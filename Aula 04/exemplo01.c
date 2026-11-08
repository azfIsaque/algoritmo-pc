#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE,"");
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
            printf("O numero %d é par\n",num);
    }else{

        printf("O numero %d é impar\n",num);
    };

    return 0;
}
