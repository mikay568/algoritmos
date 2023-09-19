#include<stdio.h>

void main()
{
  float A,B,X;
  printf("escreva dois numeros para se subtrairem\n");
  scanf("%f %f",&A ,&B);
  X=A-B;
  printf("%.3f\n", X);
  if(X>=0)
    printf("diferenca positiva");
  if(X<0)
  printf("diferenca negativa");
}
