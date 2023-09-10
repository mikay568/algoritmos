#include<stdio.h>
void main()
{
    float A, B, T, R, P, Q, R2, Q2;
    printf("escreva o valor de A:");
    scanf("%f", &A);
    printf("escreva o valor de B:");
    scanf("%f",&B);
    T = A + B;
    printf("Total : %.2f\n", T);
    P = A * B;
    printf("Produto AB: %.2f\n", P);
    R = A - B;
    printf("Resto AB: %.2f\n", R);
    R2 = B - A;
    printf("Resto BA: %.2f\n", R2);
    Q = A / B;
    printf("Quociente AB: %.2f\n", Q);
    Q2 = B / A;
    printf("Quociente BA: %.2f\n", Q2);
}