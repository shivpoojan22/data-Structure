#include <stdio.h>
int main()
{
    int a[50], size, i, num, index, c;

    printf("enter the size of array:\n");
    scanf("%d", &size);
    // for checking upper bound condition
    if (size > 50)
    {
        printf("overflow conditon");
    }
    else
    {
        printf("enter the element of array:\n");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("do u want insert any other element at specific index::if yes then press 1 otherwise press any key\n");
        scanf("%d", &c);
        if (c == 1)
        {
            printf("enter the element u want insert:\n");
            scanf("%d", &num);
            printf("insert the element at index:\n");
            scanf("%d", &index);
            if (index < 0 || index > size)
            {
                printf("invalid");
            }
            else
            {
                for (i = size - 1; i >= index; i--)
                {
                    a[i + 1] = a[i];
                }
                a[index] = num;
                printf("element in array are:\n");
                for (i = 0; i < size; i++)
                {
                    printf("%d\n", a[i]);
                }
            }
        }
        else
        {
            printf("element in array are:\n");
            for (i = 0; i < size; i++)
            {
                printf("%d\n", a[i]);
            }
        }
    }
}