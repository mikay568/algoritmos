#include<stdio.h>
#include<math.h>
float main()
{
    int Radi;
    float Raiz;
    printf("escreva o radicando:");
    scanf("%i", &Radi);
    Raiz = sqrt(Radi);
    printf("raiz: %.5f", Raiz);
}