#include <stdio.h>

int main() {
    float valor, valorfinal;
    int codigo;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite a forma de pagamento: ");
    scanf("%d", &codigo);

    if(codigo == 1) {
        valorfinal = (valor*0.92);
        printf("O valor a pagar sera %f", valorfinal);
    } else if(codigo == 2) {
        valorfinal = (valor*0.96);
        printf("O valor a pagar sera %f", valorfinal);
    } else if(codigo == 3) {
        valorfinal = (valor/2);
        printf("O valor a pagar sera de duas parcelas de %f", valorfinal);
    } else if(codigo == 4) {
        valorfinal = (valor*1.08)/4;
        printf("O valor a pagar sera de quatro parcelas de %f", valorfinal);
    } else {
        printf("Opcao invalida");
    }
}