#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.0001 //epsilon value fixed kore dewa
#define f(x) x*x -3*x +2//which equation root korbo
#define g(x) 2*x -3  //diff of the equation
int main()
{
    float x0,x1;
    float f0,f1,g0;
    int i=0;
    printf("Enter the value of x0:\n");
    scanf("%f",&x0);

       do
	 {
		  f0 = f(x0);
          g0 = g(x0);
          x1=x0-(f0/g0);
          f1=f(x1);
		  x0=x1;
          i++;
          printf("No of iterations=%d\t",i);
          printf("root=%.4f\n",x1);
          printf("Value of function=%.4f\n",f1);

	}while(fabs(f1)>e);

   return 0;
}
