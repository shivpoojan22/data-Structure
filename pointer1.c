// #include<stdio.h>

// int main()
// {
//     int x=10,*p;
//     p=&x;
//     printf("value of x= %d \n",x);
//     printf("value of x= %d \n",*p);
//     printf("address of x= %d \n",&x);
//     printf("address of p= %d \n",&p);
// }

#include<stdio.h>
 int main()
 {
    int x=10,*p;
    p=&x;
    int **q;
    q=&p;
    int ***s;
    s=&q;

    printf("value of x=%d \n",***s);
    printf("address of x=%d \n",*p);
 }