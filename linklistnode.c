#include<stdio.h>
struct self
{
    int n;
    char c;
    struct self *ptr;
};

int main()
{
    struct self a,b;
     a.n = 65;
     a.c = 'A';
     a.ptr = NULL;

     b.n = 66;
     b.c = 'B';
     b.ptr = NULL;

     printf("A -> Value of n: %d\t ch: %c",a.n,a.c);
     printf("\nB -> Value of n: %d\t ch: %c",b.n,b.c);

     b.ptr = &a;
     a.ptr = &b;
     //printf("A -> Value of n: %d\t ch : %c",b.ptr -> n,b.ptr -> c);
}  