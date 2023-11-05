#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    printf("numeros impares de 0 a 20: ");
    for(a=0;a<=20;a++)
    {
        b = a%2;
        if(b!=0)
        {
            printf("%i ",a);
        }
    }
}
