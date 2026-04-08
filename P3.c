#include<stdio.h>
#include<stdlib.h>
int count;
int partition(int A[10], int l, int r)
{
    int pivot,i,j,temp;
    pivot=A[l];
    i=l+1;
    j=r;
    while(1)
    {
        while(pivot>=A[i] && i<=r)
        {
            count++;
            i++;
        }
        while(pivot<A[j])
        {
            count++;
            j--;
        }
        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        else
        {
            temp=A[l];
            A[l]=A[j];
            A[j]=temp;
            return j;
        }
    }
}

void quicksort(int A[10],int l,int r)
{
    int s;
    if(l<r)
    {
        s=partition(A,l,r);
        quicksort(A,l,s-1);
        quicksort(A,s+l,r);
    }
}
int main()
{
    int i,n,A[10];
    printf("\nRead array size:");
    scanf("%d",&n);
    printf("\nRead array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    quicksort(A,0,n-1);
    printf("\nSorted elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\nTotal no. of comparison=%d\n",count);
    return 0;
}
