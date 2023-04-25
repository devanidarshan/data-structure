#include<stdio.h>
struct self
{
    int n;
    char c;
    struct self *ptr;
};

int main()
{
    struct self a,b,d;
     a.n = 65;
     a.c = 'A';
     a.ptr = NULL;

     b.n = 66;
     b.c = 'B';
     b.ptr = NULL;



     printf("A -> Value of n: %d\t ch: %c",a.n,a.c);
     printf("\nB -> Value of n: %d\t ch: %c",b.n,b.c);
     

     a.ptr = &b;
     b.ptr = &a;
     d.ptr = &b;

     //printf("\nA -> Value of n: %d\t ch : %c",b.ptr -> n,b.ptr -> c);
     printf("\nB -> Value of n: %d\t ch : %c",a.ptr -> n,a.ptr -> c);
     printf("\nD -> Value of n: %d\t ch : %c",b.ptr -> n,b.ptr -> c);
}  