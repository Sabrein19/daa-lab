#include <stdio.h>
#include <stdlib.h>
void heapify(int H[10],int n)
{
    int i,j,k,v,heap;
    for(i=n/2;i>=1;i--)
    {
        k=i;
        v=H[k];
        heap=0;
        while(!heap&&2*k<=n)
        {
            j=2*k;
            if(j<n)
                if(H[j]<H[j+1])
                    j=j+1;
            if(v>=H[j])
                heap=1;
            else
               {
                H[k]=H[j];
                k=j;
                }
        }
        H[k]=v;
}
}
int main()
{
    int i,n,H[10];
    printf("\n Read array size:");
    scanf("%d",&n);
    printf("\n ready array elements:\n");
    for(i=1;i<=n;i++)
        scanf("%d",&H[i]);
heapify(H,n);
printf("\n array elements:\n");
for(i=1;i<=n;i++)
    printf("%d\t",H[i]);
return 0;
}
