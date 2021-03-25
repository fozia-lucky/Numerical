#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    float p[20],q[20],r;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter n+1 co_efficents\n");
    for(i=n;i>=0;i--)
    {
        printf("\nEnter Coefficient of [ X^%d ] :: ",n-i);

        scanf("%f",&p[i]);
    }
    printf("Enter the value of r\n");
    scanf("%f",&r);

    q[0]=p[0];
    for(i=n;i<=1;i--)
    {
       q[i] = (q[i-1]*r)+p[i];
    }
    printf("\n Coefficients of quotient are: \n");
    for(i=n;i>0;i--)
    {
    printf("\t%d",q[i-1]);
    }
    return 0;
}

