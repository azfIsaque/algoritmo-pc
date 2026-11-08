#include<stdio.h>
#include<locale.h>


    float calcula_area(float base, float altura){

        return base*altura/2;


    }

int main(){

    setlocale(LC_CTYPE, "");

    float base,altura,area;

    base = 5;
    altura = 6;

    printf("área do retângulo = %.1f cm²",calcula_area(base, altura));


    return 0;
}
