#include <stdio.h>
#include <stdlib.h>
int count;
void bubble_sort(int A[10],int n)
{
    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {
         for(j=0;j<n-1-i;j++)
         {
             count=count+1;
             if(A[j]>A[j+1])
             {
                 temp=A[j];
                 A[j]=A[j+1];
                 A[j+1]=temp;
             }
         }
    }
}
int main()
{
    int i,n,A[10];
    printf("\nRead Array size: ");
    scanf("%d",&n);
    printf("\nRead array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    bubble_sort(A,n);
    printf("\nSorted elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\nTotal number of comparisons= %d",count);
    return 0;
}
