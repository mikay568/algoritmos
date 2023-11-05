#include <stdio.h>
int main()
{
    float c, f;
    c = 10;
    while (c <= 100)
    {
        f = (c * 9/5) + 32; 
        printf("%.1f Celsius = %.1f Fahrenheit\n", c, f);
        c = c + 10;
    }
}