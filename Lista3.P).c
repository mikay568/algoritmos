#include <stdio.h>

int main()
{
    float s, t , u;
    t=0;
    for (u = 50; u <= 70; u++)
    {
        t = t+ u;
    }

    printf("soma: %.2f\n", t);
    printf("media: %.2f\n", t / 20);

}
