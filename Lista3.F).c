#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    printf("valores divisiveis por 4:\n");
    for(a=0;a<=200;a++)
    {
        b = a%4;
        if(b==0)
        {
            printf("%i\n",a);
        }
    }
}
