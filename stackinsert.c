#include<stdio.h>
#define n 5
int a[n],i;
int top=-1;
void display()
{
    for(i=0;i<=top;i++)
    printf("%d ",a[i]);
}
int insertend(int val)
{
    if(top>=n-1)
    printf("Array is full: \n ");
    else  
    {
       top++;
       a[top]=val;
    }
}
int main()
{
     insertend(10);
     insertend(20);
     insertend(30);
     insertend(40);
     display();
}