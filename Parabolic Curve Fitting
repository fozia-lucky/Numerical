#include<stdio.h>

#include<math.h>

int main()
{
    int i, j, k, n;
    float x[20],y[20],sumx=0,sumy=0,sumx2=0,sumx3 = 0, sumx4 = 0, sumxy = 0, sumx2y = 0;
    float a,b,matrix[3][4], ratio,temp=0,temp1=0;
    printf("\n   C program for non-Linear/parabolic Curve Fitting \n ");
    printf("\n Enter the value of number of terms n:\n");
    scanf("%d",&n);
    printf("Enter the value of x:\n");
    for(i=0; i<n; i++)
    {
        scanf("%f",&x[i]);
        temp=temp+x[i];
    }
    printf("Enter the value of y:\n");

    for(i=0; i<n; i++)
    {
        scanf("%f",&y[i]);
        temp1=temp1+y[i];
    }
    sumx=temp;
    sumy=temp1;

    for(i=0; i<n; i++)
    {
        sumx2 += x[i]*x[i];

        sumx3 += x[i]*x[i]*x[i];

        sumx4 += x[i]*x[i]*x[i]*x[i];

        sumxy += x[i]*y[i];

        sumx2y += x[i]*x[i]*y[i];


    }

    matrix[0][0] = n;

    matrix[0][1] = sumx;

    matrix[0][2] = sumx2;

    matrix[0][3] = sumy;

    matrix[1][0] = sumx;

    matrix[1][1] = sumx2;

    matrix[1][2] = sumx3;

    matrix[1][3] = sumxy;

    matrix[2][0] = sumx2;

    matrix[2][1] = sumx3;

    matrix[2][2] = sumx4;

    matrix[2][3] = sumx2y;


    printf("\n\n");
    printf("Substituing the values we get:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%.0f ",matrix[i][j]);
        }
        printf("\n");
    }


    printf("\n\n");

    for(i = 0; i < 3; i++)
    {

        for(j = 0; j < 3; j++)
        {

            if(i!=j)
            {

                ratio = matrix[j][i]/matrix[i][i];

                for(k = 0; k < 4; k++)
                {

                    matrix[j][k] -= ratio * matrix[i][k];

                }

            }

        }

    }

    printf("In Matrix form : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("\t %.0f",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSolution is:\n");
    for(i=0; i<3; i++)
    {
        printf("a%d = %.0f\n ",i,matrix[i][3]/matrix[i][i]);
    }

    return 0;

}
