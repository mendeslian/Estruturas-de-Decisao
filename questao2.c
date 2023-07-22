#include <stdio.h>

int main() {
    char nome[10];
    int idade;

    printf("nome: ");
    scanf("%s", nome);

    printf("idade: ");
    scanf("%d", &idade);
    
    if(idade <= 13 ) {
        printf("crianca");
    } else if (idade > 13 && idade <= 20) {
        printf("adolescente");
    } else {
        printf("adulto");
    }

    return 0;
}
