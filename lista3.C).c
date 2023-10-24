#include<stdio.h>
int main()
{
    int N,C;
    C=1;
    N=0;
    while(C<=100){
        N=N+C;
        C=C+1;
    }
    printf("%i",N);
}
