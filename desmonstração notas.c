#include<stdio.h>
float main()
{
    float Md1, Md2, N1, N2, N3, N4, N5;
    printf("escreva as 4 primeiras notas da media1:");
    scanf("%f %f %f %f", &N1,&N2,&N3,&N4);
    Md1 = (N1+N2+N3+N4)/4;
    printf("media:%.2f\n",Md1);
    if (Md1 >= 7)
    {
        printf("aprovado");
    }
    if(Md1<7)
    {   printf("escreva a nota do exame:");
        scanf("%f",&N5);
        Md2= (Md1+N5)/2;
        if(Md2 >= 5)
        {
            printf("aprovado por exame:%.2f\n mencao:",Md2);
        }
       if(Md2<5)
        {
            printf("reprovado:%.2f\n mencao:",Md2);
        }
         if((Md2>=1)&&(Md2<=4))
        {
         printf("I");
        }
        if((Md2>4)&&(Md2<=6))
        {
         printf("R");
        }
      if((Md2>6)&&(Md2<=8))
      {
          printf("B");
          }
       if((Md2>8)&&(Md2<=10))
       {
           printf("MB");
           }
     }
}
