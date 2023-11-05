#include <stdio.h>

int main()
{
    float a, b , c;
    b=0;
    printf("escreva 10 valores.\n");
    for (c = 1; c <= 10; c++)
    {
        printf("valor %.0f: ",c);
        scanf("%f", &a);
        b = b+ a;
    }

    printf("soma : %.2f\n", b);
    printf("media: %.2f\n", b / 10);

}
