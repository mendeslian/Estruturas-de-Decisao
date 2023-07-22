#include <stdio.h>

int main() {
    int peso;
    float altura, imc;

    printf("***********\n");
    printf("Calcula IMC\n");
    printf("***********\n");

    printf("Digite o peso: ");
    scanf("%d", &peso);
    
    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    if(imc <= 18.5) {
        printf("Abaixo do peso normal\n");
        printf("Seu indice de massa corporal e %f", imc);
    } else if(imc > 18.5 && imc <= 25) {
        printf("Peso normal\n");
        printf("Seu indice de massa corporal e %f", imc);
    } else if(imc > 25 && imc <= 30) {
        printf("Peso acima do normal\n");
        printf("Seu indice de massa corporal e %f", imc);
    } else if (imc > 30) {
        printf("Peso excessivo\n");
        printf("Seu indice de massa corporal e %f", imc);
    }
}