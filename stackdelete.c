#include<stdio.h>
#define n 5
int a[n],i;
int top=-1;
void display()
{
    for(i=0;i<=top;i++)
    printf("%d ",a[i]);
    printf("\n");
}
int insertend(int val)
{
    if(top>=n-1)
    printf("Array is empty: \n ");
    else  
    {
       top++;
       a[top]=val;
    }
}
int deleteend()
{
    if(top==-1)
    printf("Array is empty: \n ");
    else  
    {
       top--;
      
    }
}
int main()
{
     insertend(10);
     insertend(20);
     insertend(30);
     insertend(40);
     display();
     deleteend();
     deleteend();
     deleteend();
     deleteend();
     
     display();
}