#include<stdio.h>

int main(){

    int idade = 18;
    int *p; // *ponteiro

    p = &idade;

    printf("%d\n", idade);
    printf("%p\n", &idade);

    printf("%p\n", p);
    printf("%d\n", *p);


    return 0;
}
