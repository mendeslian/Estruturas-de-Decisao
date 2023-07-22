#include <stdio.h>

int main() {
    int poligono, lado, base, altura, base_menor, base_maior, raio;
    float Aq, Ar, At, Ac, Cc;
    float pi = 3.14;

    printf("1-Quadrado\n");
    printf("2-Retangulo\n");
    printf("3-Trapezio\n");
    printf("4-Circulo\n");
    printf("5-Circunferencia de um circulo\n");
    printf("******************************\n");
    printf("Informe o poligono: ");
    scanf("%d", &poligono);

    switch (poligono) {
        case 1:
            printf("Informe o valor do lado: ");
            scanf("%d", &lado);
            Aq = (lado*lado);
            printf("A area do quadrado e %f", Aq);
            break;

        case 2:
            printf("Informe o valor da base: ");
            scanf("%d", &base);
            printf("Informe o valor da altura: ");
            scanf("%d", &altura);
            Ar = (base*altura);
            printf("A area do retangulo  e %f", Ar);
            break;

        case 3:
            printf("Informe o valor da base menor: ");
            scanf("%d", &base_menor);
            printf("Informe o valor da base maior: ");
            scanf("%d", &base_maior);
            printf("Informe o valor da altura: ");
            scanf("%d", &altura);
            At = ((base_maior + base_menor) * altura) / 2;
            printf("A area do trapezio e %f", At);
            break;

        case 4:
            printf("Informe o valor do raio: ");
            scanf("%d", &raio);
            Ac = (pi*(raio*raio));
            printf("A area da circunferencia e %f", Ac);
            break;

        case 5:
            printf("Informe o valor do raio: ");
            scanf("%d", &raio);
            Cc = (2*pi*raio);
            printf("O valor da circunferencia e %f", Cc);
            break;

        default:
            printf("Opção inválida!");
            break;
    }

}