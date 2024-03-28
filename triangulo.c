#include <stdio.h>
#include <math.h>

struct triangulo
{
    float lado1;
    float lado2;
    float lado3;
};

float perimetro_triangulo(float lado1, float lado2, float lado3)
{
    return lado1 + lado2 + lado3;
}

float area_triangulo(float lado1, float lado2, float lado3)
{
    // Usando a fórmula de Heron para calcular a área
    float s = perimetro_triangulo(lado1, lado2, lado3) / 2;
    return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
}

int main()
{
    struct triangulo triangulo;
    float lado1, lado2, lado3, perimetro, area;

    printf("Insira o comprimento do lado 1 do triângulo: ");
    scanf("%f", &lado1);
    printf("Insira o comprimento do lado 2 do triângulo: ");
    scanf("%f", &lado2);
    printf("Insira o comprimento do lado 3 do triângulo: ");
    scanf("%f", &lado3);

    // Armazenando os lados do triângulo na estrutura
    triangulo.lado1 = lado1;
    triangulo.lado2 = lado2;
    triangulo.lado3 = lado3;

    // Calculando o perímetro e a área
    perimetro = perimetro_triangulo(triangulo.lado1, triangulo.lado2, triangulo.lado3);
    area = area_triangulo(triangulo.lado1, triangulo.lado2, triangulo.lado3);

    // Exibindo os resultados
    printf("Perímetro do triângulo: %.2f\n", perimetro);
    printf("Área do triângulo: %.2f\n", area);

    return 0;
}
