#include <stdio.h>
#include <stdlib.h>
int main()
{
    double y,x1,x2,delta;
    short work_option;
    int N;
      printf("\n");
    puts("Hello! Please, select a work option (1 or 2):");
    scanf("%d",&work_option);

      while(work_option != 1  &&  work_option != 2)
        {
        puts("You have entered an incorrect work option of the program! Please, enter work option ( 1 or 2 ) again:");
        scanf("%d",&work_option);
    }
      if(work_option == 1)
        {
      printf("\nFirst X: ");
    scanf("%lf",&x1);
     printf("\nSecond X: ");
    scanf("%lf",&x2);
    printf("\nSelect N: ");
    scanf("%lu",&N);

    printf("\n************************************************");
     printf("\n*  N  *         X         *        F(X)        *");
    printf("\n************************************************");

    int i=1;
    delta=(x2-x1)/(N-1);
    for(i;i<=N;i++)
    {
        y=x1-x2-22*x1;
     printf("\n|%5.0d|%19.2f|%20.2f|\n",i,x1,y);
     if(i%10==0)
    {
        printf("\nPress any key to continue...");
        getch();
    }
    x1=x1+delta;
    }
    }

if(work_option == 2){

    printf("\nFirst X:");
      scanf("%lf",&x1);
    printf("\nSecond X:");
     scanf("%lf",&x2);
     printf("\nChoose delta:");
    scanf("%lf",&delta);
    int i=1;

    printf("\n************************************************");
    printf("\n*  N  *         X         *        F(X)        *");
      printf("\n************************************************");
    while(x1<=x2)
    {
          y=x1-x2-22*x1;
    printf("\n|%5.0d|%19.2f|%20.2f|\n",i,x1,y);
    if(i%10==0)
    {
        printf("\nPress any key to continue...");
        getch();
    }
    x1=x1+delta;
    i++;
    }
 }
     return 0;
}
