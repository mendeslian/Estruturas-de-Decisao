#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);
    if(numero == 0) {
        printf("O numero digitado e igual a 0");
    } else if(numero > 0) {
            printf("O numero digitado e maior que 0");
        } else {
            printf("O numero digitado e menor que 0");
        }
}