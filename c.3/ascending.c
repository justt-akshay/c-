#include<stdio.h>
#include<stdlib.h>
//void display(*A[],int n);
void swap(int *A, int *B)
{
    int temp;
    temp=*A;
    *A=*B;
    *B=temp;
}
int display(int *A,int *B,int n)
{   
    printf("\nfirst sorted array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nsecond sorted array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",B[i]);
    }
    return 0;
}
int ascend( int *A,int *B,int size)  
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(A[j]>A[i])
            {
                swap(&A[j],&A[i]);
            }
        }
    }
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(B[j]>B[i])
            {
                swap(&B[j],&B[i]);
            }
        }
    }
    return display(A,B,size);

}
int descend(int *A,int *B,int size)  //instead A[100]
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(A[j]<A[i])
            {
                swap(&A[j],&A[i]);
            }
        }
    }
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(B[j]<B[i])
            {
                swap(&B[j],&B[i]);
            }
        }
    }
    return display(A,B,size);
}
int main()
{
    int A[100];
    int B[100];
    int n,choice;
    printf("***WAP TO SORT ARRAY EITHER IN ASCENDING OR DESCENDING ORDER***");

    printf("\nenter the size of an array:");
    scanf("%d",&n);

    printf("\nenter the elements of array A:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("\nenter the elements of array B:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&B[i]);
    }

    printf("press 1 for ascending or 2 for descending.\n");

    printf("enter choice for Array A:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        ascend(A,B,n);

        break;

        case 2:
        descend(A,B,n);
        break;   

        default:
        printf("\ninvalid input"); 
    }

}