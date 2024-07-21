#include <stdio.h>
int main()
{
    int n,i,j,x,arr[100];
    printf("\nenter the length of the array:");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
    if(arr[j]>arr[j+1]){
        x=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=x;
    }
    printf("\nThe Sorted Records are:");
    for (i=0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}