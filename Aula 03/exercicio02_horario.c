#include<stdio.h>
#include<locale.h>


int main(){

    setlocale(LC_CTYPE,"");
    int hora, minutos, min_total;

    printf("Hora? ");
    scanf("%d",& hora);
    printf("Minutos? ");
    scanf("%d",& minutos);

    min_total = hora*60 + minutos;

    printf("Já se passaram %d minutos desde o início do dia", min_total);

    return 0;
}
