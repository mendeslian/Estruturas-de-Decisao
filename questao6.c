#include <stdio.h>

int main() {
    char operacao[10];
    float num1, num2, resultado;

    printf("+ - Adicao\n");
    printf("- - Subtracao\n");
    printf("* - Multiplicacao\n");
    printf("/ - Divisao\n");
    printf("Escolha a operacao aritimetica: ");
    scanf("%s", &operacao);
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operacao[0]) {
    
    case '+':
        resultado = num1 + num2;
        printf("A adicao dos numeros e %f", resultado);
        break;

    case '-':
        resultado = num1 - num2;
        printf("A subtracao dos numeros e %f", resultado);
        break;

    case '*':
        resultado = num1 * num2;
        printf("O produto dos numeros e %f", resultado);
        break;

    case '/':
        resultado = num1 / num2;
        printf("A divisao dos numeros e %f", resultado);
        break;
    
    default:
        printf("Operacao Invalida");
        break;
    }
}