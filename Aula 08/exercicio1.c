
int main () {
   
    float salarios[4];
    int i=0;

    for (i = 0 ; i < 4 ; i++) {
        printf("Digite o salário do %dº funcionário: ", (i+1));
        scanf("%f", &salarios[i]);
    }

    for ( i = 0 ; i < 4 ; i++) {
        printf("\nFuncionário %dº: R$ %.2f ", (i+1), salarios[i]);
    }

}