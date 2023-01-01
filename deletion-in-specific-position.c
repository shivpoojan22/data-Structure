
// DELETED FROM ANY POSITION

// #include <stdio.h>
// int main()
// {
//     int a[50], size, i, pos, key, item;
//     printf("enter the size of array:\n");
//     scanf("%d", &size);
//     printf("enter the element of array:\n");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("do you want to delete item:if yes than press 1 otherwise press any key\n");
//     scanf("%d", &key);
//     if (key == 1)
//     {
//         printf("at which position:\n");
//         scanf("%d",&pos);

//         if (pos <= 0 || pos > size)
//         {
//             printf("invalid");
//         }
//         else
//         {
//             item = a[pos - 1];
//             for (i = pos - 1; i < size-1; i++)
//             {
//                 a[i] = a[i + 1];
//             }
//             size--;
//         }

//         printf("element in array are:\n");
//         for (i = 0; i < size; i++)
//         {
//             printf("%d\n", a[i]);
//         }
//         printf("The deleted item is = %d",item);
//     }
//     else
//     {
//          printf("element in array are:\n");
//         for (i = 0; i < size; i++)
//         {
//             printf("%d\n", a[i]);
//         }
//     }
// }




// DELETED FROM AT ONE POSITION IN CONSTANT TIME

#include <stdio.h>
int main()
{
    int a[50], size, i, pos, key, item;
    printf("enter the size of array:\n");
    scanf("%d", &size);
    printf("enter the element of array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("do you want to delete item:if yes than press 1 otherwise press any key\n");
    scanf("%d", &key);
    if (key == 1)
    {
        printf("at which position:\n");
        scanf("%d", &pos);

        if (pos <= 0 || pos > size)
        {
            printf("invalid");
        }
        else
        {
            item = a[pos - 1];

            a[pos - 1] = a[size - 1];

            size--;
        }

        printf("element in array are:\n");
        for (i = 0; i < size; i++)
        {
            printf("%d\n", a[i]);
        }

        printf("The deleted item is = %d", item);
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