#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{
    int x = 1, y, value;
    struct node *front, *rear, *temp, *r;

    front = rear = NULL;

    printf("enque opn inn dequeue\n");
    while (x == 1)
    {
        printf("want to enque at rear end?press 2\n");
        printf("wnat to enqueu at front end? press 3\n");
        scanf("%d", &y);

        while (y == 2)
        {
            printf("enque at rear end\n");
            printf("enter the value to be enqueued\n");
            if (front == NULL)
            {
                r = (struct node *)malloc(sizeof(struct node));
                r->data = value;
                r->prev = NULL;
                r->next = NULL;
                front = rear = r;
            }
            else
            {
                if (rear->next == NULL)
                {
                    r = (struct node *)malloc(sizeof(struct node));
                    r->data = value;
                    r->prev = rear;
                    rear->next = r;
                    front->prev = r;
                    r->next = front;
                    rear = r;
                    front->prev = rear;
                }
            }
            printf("want more value to enqueued at rear end? press2\n");
            scanf("%d", &y);
        }
        while (y == 3)
        {
            printf("enque at front end \n");
            printf("enter  the value to be enqueued\n");
            scanf("%d", &value);

            if (front == NULL)
            {
                r = (struct node *)malloc(sizeof(struct node));
                r->data = value;
                r->prev = NULL;
                r->next = NULL;
                front = rear = r;
            }
            else
            {
                if (front->next == NULL)
                {
                    r = (struct node *)malloc(sizeof(struct node));
                    r->data = value;
                    r->next = front;
                    front->prev = r;
                    front = r;
                    front->prev = rear;
                    rear->next = front;
                }
                else
                {
                    r = (struct node *)malloc(sizeof(struct node));
                    r->data = value;
                    r->next = front;
                    front->prev = r;
                    front = r;
                    front->prev = rear;
                    rear->next = front;
                }
            }
            printf("want more value to enqueued at front end? press 3\n");
            scanf("&d", &y);
        }
        printf("want more value to enqueued ? press 1\n");
        scanf("d", &x);
    }

    int count = 0;
    struct node *p = NULL;
    temp = front;

    while (temp != p)
    {
        count++;
        printf("%d <-->", temp->data);
        temp = temp->next;
        p = front;
    }
    printf("\n number of nodes in Dequeue via DLL is");
    printf(" %d\n", count);
    printf("Dequeue opn in dequeue \n");
    x = 1;
    while (x == 1)
    {
        printf("wnat to deque at rear end? press 2\n");
        printf("wnant to dequeue at front end ? press 2\n");
        scanf("%d", &y);
        while (y == 2)
        {
            printf("dequeue at rear end\n");
            if (front == NULL)
            {
                printf("dequeue is empty\n");
                break;
            }
            else
            {
                if(rear == front)
                {
                    temp = front;
                    front = rear = NULL;
                    free(temp);
                }
                else
                {
                    temp = rear;
                    rear = rear->prev;
                    front->prev = rear;
                    rear->next = front;
                    free(temp);
                }
            }
            printf("wnat more values to dequeue at rear end? press 2\n");
            scanf("%d", &y);
        }
        while(y == 3)
        {
            printf("dequeue at front end \n");
            if(front == NULL)
            {
                printf("dequeue is empty\n");
                break;
            }
            else
            {
                if(front == rear)
                {
                    temp = front;
                    front = rear = NULL;
                    free(temp);
                }
                else
                {
                    temp = front;
                    front = front->next;
                    front->prev = rear;
                    rear->next = front;
                    free(temp);
                }
            }
            printf("want more values to dequeue at front end? press 3\n");
            scanf("%d", &y);
        }
        printf("want more values to dequeue ? press 1\n");
        scanf("%d", &x);
    }
    count = 0;
    p = NULL;
temp= front;
while(temp!=p){
    count++;
    printf(" %d <--> ",temp->data);
    temp=temp->next;
    p=front;
}

printf("\n number of nodes in Dequeue via DLL is");
printf(" %d\n",count);

return 0;
}
