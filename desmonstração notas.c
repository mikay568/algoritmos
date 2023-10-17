#include<stdio.h>
float main()
{
    float Md1, Md2, N1, N2, N3, N4, N5;
    printf("-------------------------------------\n");
    printf("escreva as 4 primeiras notas da media:");
    scanf("%f %f %f %f", &N1,&N2,&N3,&N4);
    printf("--------------------------------------\n");
    Md1 = (N1+N2+N3+N4)/4;
    printf("media:%.2f\n",Md1);
    if (Md1>= 5){
    printf("+======================+\n");
        printf("aprovado\nmencao:");
      if((Md1>4)&&(Md1<=6))
        {
          printf("R");}
         if((Md1>6)&&(Md1<=8))
      {
          printf("B");
          }
         if((Md1>8)&&(Md1<=10))
       {
           printf("MB");
           }
        }
     printf("\n+=====================+\n");
    if(Md1<5)
    { printf("-------------------------------------\n");
          printf("escreva a nota da recuperacao:");
        scanf("%f",&N5);
      printf("--------------------------------------\n");
        Md2= (Md1+N5)/2;
        if(Md2 >= 5)
       {
        printf("+======================+\n");
          printf("aprovado por recuperacao:%.2f\nmencao:",Md2);
        }
        if(Md2<5)
        {printf("+======================+\n");
          printf("reprovado:%.2f\nmencao:",Md2);
        }
        if((Md2>=0)&&(Md2<=4))
        {
          printf("I");
        printf("\n+======================+");}
        if((Md2>4)&&(Md2<=6))
        {
          printf("R");
        printf("\n+======================+");}
        if((Md2>6)&&(Md2<=8))
      {
          printf("B");
        printf("\n+======================+");}
        if((Md2>8)&&(Md2<=10))
       {
          printf("MB");
        printf("\n+======================+");}
     }
}
