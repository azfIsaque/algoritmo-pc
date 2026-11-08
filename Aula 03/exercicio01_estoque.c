#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE,"");
    int qt_manha, qt_tarde, qt_total;

    printf("Digite a quantidade de produtos recebidos pela manhã: ");
    scanf("%d",& qt_manha);
    printf("Digite a quantidade de produtos recebidos pela tarde: ");
    scanf("%d",& qt_tarde);
    qt_total = qt_manha + qt_tarde;

    printf("A quantidade total de produtos recebidos é: %d", qt_total);
    return 0;

}
