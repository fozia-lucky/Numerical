#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001 //epsilon value fixed kore dewa
#define f(x) x*x*x -x -1  //which equation root korbo

void main()
{
    float x0,x1,x2;
    float f0,f1,f2;
    int i=0;
    up:
    printf("Enter the value of x1 and x2:\n");
    scanf("%f %f",&x1,&x2);

        f1=f(x1);
        f2=f(x2);

        if( f1 * f2 > 0.0)
	     {
		  printf("Incorrect Initial Guesses.\n");
		  goto up;
	    }

        do{
        x0=(x1+x2)/2;
        f0 = f(x0);
        if(f1*f0<0)
        {
            x2 = x0;
            f2 = f0;
        }
        else
            {
                x1=x0;
                f1=f0;
            }
        i++;
        printf("no of iteration=%d\n",i);
        printf("root=%.4f\n",x0);

        printf("Value of function=%.4f\n\n",f0);
    }
    while(fabs(f0)>e);//fabs for absolute value

   getch();
}
