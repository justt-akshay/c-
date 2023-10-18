include<stdio.h>
void display(int C[][100],int rows,int cols);

void add(int A[][100],int B[][100],int rows,int cols)
{   int C[100][100];
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }printf("\n");
    printf("addition of 2D matrix is:\n");
  display(C,rows,cols);
}

void sub(int A[][100],int B[][100],int rows,int cols)
{   int C[100][100];
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            C[i][j]=A[i][j]-B[i][j];
        }
    }printf("\n");
    printf("substraction of 2D matrix is:\n");
  display(C,rows,cols);
}
void display(int C[][100],int rows,int cols)
{   int i,j;
        for( i=0;i<rows;i++)
        {
            for( j=0;j<cols;j++)
            {
                printf("%d ",C[i][j]);
            }printf("\n");
        }
}

int main()
{
    printf("WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array.\n");
    //printf ("enter the size of arrays in rows and columns:");

   // int rows,cols;
   // scanf("%d %d",&rows,&cols);

    int A[100][100];
    int B[100][100];
    printf ("enter the element of array A:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }  
         printf("\n");

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",A[i][j]);
        }printf("\n");
    }printf("\n");

    printf ("enter the element of array B:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }  
         printf("\n");

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",B[i][j]);
        }printf("\n");
    }printf("\n"); 

    add(A,B,2,2);
    sub(A,B,2,2);


}