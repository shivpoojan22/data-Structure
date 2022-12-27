#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

int main()
{
    // struct Node* top = malloc(sizeof(struct Node));

    struct Node *top, *r, *temp;
    top = NULL;
    int x = 1, value;

    while (x == 1)
    {
        printf("Enter the value to be pushed:");
        scanf("%d", &value);

        if (top == NULL)
        {
            r = (struct Node *)malloc(sizeof(struct Node));
            r->data = value;
            r->link = NULL;
            top = r;
        }
        else
        {
            r = (struct Node *)malloc(sizeof(struct Node));
            r->data = value;
            r->link = top;
            top = r;
        }

        printf("Do you want to push :\n");
        scanf("%d", &x);
    }

    x = 1;
    while (x == 1)
    {

        if (top == NULL)
        {
            printf("Stack is under flow\n");
            break;
        }
        else
        {
            temp = top;
            top = top->link;
            free(temp);
        }

        printf("Enter the value of x:\n");
        scanf("%d", &x);
    }
    r = top;
    while (r != NULL)
    {
        printf("%d ", r->data);
        r = r->link;
    }

    return 0;
}