#include<stdio.h>
#include<math.h>
int main()
{
    float V, R;
    printf("escreva o raio:");
    scanf("%f", &R);
    V = (1.33) * 3.14 * pow(R,3);
    printf("volume aproximado do volume: %.2f ", V);
}