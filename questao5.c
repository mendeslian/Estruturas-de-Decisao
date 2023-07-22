#include <stdio.h>

int main() {
    int produto;

    printf("Informe o codigo do produto ");
    scanf("%d", &produto);

    if (produto == 1) {
        printf("Alimento nao perecivel");
    } else if (produto > 1 && produto <= 4) {
        printf("Alimento perecivel");
    } else if (produto >= 5 && produto <= 6) {
        printf("Vestuario");
    } else if (produto >= 7 && produto <= 12) {
        printf("Limpeza");
    } else {
        printf("Opcao invalida");
    }
}