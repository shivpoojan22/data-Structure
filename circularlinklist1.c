#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *start, *temp, *r;
    start = NULL;
    int x, value;
    printf("insertion in the circular ll\n");
    x = 1;
    while (x == 1)
    {
        printf("enter the value to be inserted in the cll\n");
        scanf("%d", &value);
        if (start == NULL)
        {
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data = value;
            temp->link = NULL;
            start = temp;
        }
        else
        {
            if (start->link == NULL)
            {
                temp = (struct node *)malloc(sizeof(struct node));
                temp->data = value;
                start->link = temp;
                temp->link = start;
            }
            else
            {
                temp = start;
                while (temp->link != start)
                {
                    temp = temp->link;
                }
                r = (struct node *)malloc(sizeof(struct node));
                r->data = value;
                temp->link = r;
                r->link = start;
            }
        }
        printf("want more to be inserted in the cll? enter 1\n");
        scanf("%d", &x);
    }

    temp = start;
    struct node *p;
    p = NULL;
    while (temp != p)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
        p = start;
    }

    printf("\n");
    return 0;
}