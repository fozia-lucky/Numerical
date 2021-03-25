#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    float a[20],x,p=0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter n+1 co_efficents\n");
    for(i=n;i>=0;i--)
    {
        printf("\nEnter Coefficient of [ X^%d ] :: ",i);

        scanf("%f",&a[i]);
    }
    printf("Enter the value of x\n");
    scanf("%f",&x);
    for(i=n;i>0;i--)
    {
        p=(p+a[i])*x;
    }
    p=p+a[0];
    printf("Sum of polynomials=%f\n",p);
    return 0;
}
