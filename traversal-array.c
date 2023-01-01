#include<stdio.h>
int main()
{
    int a[50],size,i;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    printf("enter the element of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("element in array are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}