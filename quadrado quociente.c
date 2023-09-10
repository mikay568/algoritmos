#include<stdio.h>
#include<math.h>
int main()
{
    float DIVISOR, DIVIDENDO;
    float QUOCIENTE, POTENCIA;
    printf("escreva um valor para o Dividendo:");
    scanf("%f", &DIVIDENDO);
    printf("escreva um valor para o divisor:");
    scanf("%f",&DIVISOR);
    QUOCIENTE = DIVIDENDO / DIVISOR;
    printf("Quociente: %.2f\n", QUOCIENTE);
    POTENCIA = pow(QUOCIENTE,2);
    printf("Potencia: %.2f", POTENCIA);
}