#include <stdio.h>
#include <stdlib.h>
int main()
{
    double y,x1,x2,delta;
    unsigned int N,scenariy;
   printf("\n");
   printf("There are two scenaries");
    printf("Please, select your scenariy:");
    scanf("%u",&scenariy);

    while(scenariy != 1  &&  scenariy != 2)
        {
        printf("You have entered an incorrect scenariy of the program! Please, enter work option ( 1 or 2 ) again:");
        scanf("%u",&scenariy);
    }
      if(scenariy == 1)
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
        y=x1+10/x2;
    printf("\n|%5.0d|%19.2f|%20.2f|\n",i,x1,y);
    if(i%10==0)
    {
        printf("\nPress any key to continue...");
        getch();
    }
    x1=x1+delta;
    }
    }

if(scenariy == 2){

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
           y=x1+10/x2;
    printf("\n|%5.0u|%19.2f|%20.2f|\n",i,x1,y);
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
