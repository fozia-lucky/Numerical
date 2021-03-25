
#include<stdio.h>

int main()
{
    int mat[10][10],tran[10][10],y[10][10],i, j,row,col;
    double adj[10][10],inv[10][10];
    int a,b,c,d,e,f,g,h,l;
    float determinant = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of matrix row wise:\n");
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)

            scanf("%d", &mat[i][j]);

    printf("\nGiven matrix is:");
    for(i = 0; i < row; i++)
    {
        printf("\n");

        for(j = 0; j < col; j++)
            printf("%d\t", mat[i][j]);
    }

    //finding determinant

    a = mat[0][0];
    b = mat[0][1];
    c = mat[0][2];
    d = mat[1][0];
    e = mat[1][1];
    f = mat[1][2];
    g = mat[2][0];
    h = mat[2][1];
    l = mat[2][2];
    determinant = (a*(e*l - f*h)) - (b*(d*l - f*g)) + (c*(d*h - e*g));


    printf("\n\ndeterminant: %f\n", determinant);

    // Finding the transpose of matrix a
    for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j)
        {
            tran[j][i] = mat[i][j];
        }
    // Displaying the transpose of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < col; ++i)
        for (j = 0; j < row; ++j)
        {
            printf("%d  ", tran[i][j]);
            if (j == row - 1)
                printf("\n");
        }


    y[0][0]=mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1];
    y[0][1]=-1*(mat[1][0]*mat[2][2]-mat[1][2]*mat[2][0]);
    y[0][2]=mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0];
    y[1][0]=-1*(mat[0][1]*mat[2][2]-mat[2][1]*mat[0][2]);
    y[1][1]=mat[0][0]*mat[2][2]-mat[0][2]*mat[2][0];
    y[1][2]=-1*(mat[0][0]*mat[2][1]-mat[0][1]*mat[2][0]);
    y[2][0]=mat[0][1]*mat[1][2]-mat[0][2]*mat[1][1];
    y[2][1]=-1*(mat[0][0]*mat[1][2]-mat[0][2]*mat[1][0]);
    y[2][2]=mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];


    for(i=0; i<row; i++) //For storing adjoint in another 2-D Array
    {
        for(j=0; j<col; j++)
            adj[i][j]=y[j][i];

    }
    printf("\nAdjoint of the matrix:\n");
    for (i = 0; i < col; ++i)
        for (j = 0; j < row; ++j)
        {
            printf(" %lf ", adj[i][j]);
            if (j == row - 1)
                printf("\n");
        }


    for(i=0; i<row; i++) //For calculating inverse of matrix (2-D Array)
    {
        for(j=0; j<col; j++)
            adj[i][j]=adj[i][j]/determinant;
    }
    if(determinant!=0)
    {
        printf("\nInverse is :");
        for(i=0; i<row; i++)
        {
            printf("\n \n \n");
            for(j=0; j<col; j++)
                printf(" %lf",adj[i][j]);

        }
    }
    else
        printf("\nINVERSE NOT POSSIBLE AS DETERMINANT( |A| ) IS EQUAL TO ZERO");

    return 0;

}
