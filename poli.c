#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,p[20],q[20],r;

    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter n+1 co_efficents\n");
    for(i=0;i<=n;i++)
    {
        printf("\nEnter Coefficient of [ X^%d ] :: ",n-i);

        scanf("%d",&p[i]);
    }
    printf("Enter the value of constant(x-r) \n");
    scanf("%d",&r);
    q[0]=p[0];
    for(i=1;i<=n;i++)
    {
        q[i]=(q[i-1]*r)+p[i];
    }
    printf("\n Coefficients of quotient are: \n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",q[i]);

    }
    return 0;
}

