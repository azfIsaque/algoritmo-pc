#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    int i,user,pass,tentativas=3,conta=12345, senha=123;

    while(1){
        printf("Digite a Conta: ");
        scanf("%d",&user);
        printf("Digite a senha: ");
        scanf("%d",&pass);
        if (user == conta && pass == senha){
            printf("Acesso autorizado!");
            break;
        }else if(tentativas >1){
            tentativas--;
            printf("\nDados incorretos");
            printf("\nVocê ainda tem %d tentativas\n", tentativas);
        }else{
            printf("\nUsuário bloqueado");
            break;
        }
   }

    return 0;
}
