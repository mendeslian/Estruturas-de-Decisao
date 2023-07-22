#include <stdio.h>

int main(){
    char poligono[10];
    int base, altura, lado, raio;
    float perimetro, area;
    float pi = 3.14;

    printf("******************\n");
    printf("Escolha o polígono");
    printf("******************\n");
    printf("Q - quadrado\n");
    printf("R - retangulo\n");
    printf("C - circunferencia\n");
    scanf("%s", &poligono);

    switch (poligono[0]){
        case 'Q':
            printf("Informe o lado do quadrado: ");
            scanf("%d", &lado);
            perimetro = (lado + lado + lado + lado);
            area = (lado*lado);
            printf("O perimetro do quadrado e %f\nA area do quadrado e %f", perimetro, area);
            break;

        case 'R':
            printf("Informe a altura do retangulo: ");
            scanf("%d", &altura);
            printf("Informe a base do retangulo: ");
            scanf("%d", &base);
            perimetro = (altura + altura + base + base);
            area = (base*altura);
            printf("O perimetro do retangulo e %f\nA area do retangulo e %f", perimetro, area);
            break;

        case 'C':
            printf("Informe o raio da circunferencia: ");
            scanf("%d", &raio);
            perimetro = (2*pi*raio);
            area = (pi*(raio*raio));
            printf("O comprimento da circunferencia e %f\nA area da circunferencia e %f", perimetro, area);
            break;

    }

}