#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.0001  //stop criterion fixed kore dewa
#define f(x) x*x*x +x*x -1
#define g(x) 1 /sqrt(x+1)  //which equation root korbo
int main()
{
    float x0,x1;
    float f0,f1,n;
    int i=0;
    printf("Enter the value of x0 :\n");
    scanf("%f",&x0);
        do{

        x1=g(x0);
        i++;
        x0=x1;
        printf("Root\tX%d=%.4f\n",i,x0);
        } while(fabs(f(x1))>e);//fabs for absolute value

return 0;
}
