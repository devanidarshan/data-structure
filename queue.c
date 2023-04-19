#include<stdio.h>
#define n 5
int a[n];
int f=-1,r=-1,i;

int display()
{
    if(f<0)
    printf("Queue is empty...... ");
    else
    {
        for(i=f;i<=r;i++)
        printf("%d ",a[i]);
    }
    printf("\n");
}

int insertend(int val)
{
    if(r>=n-1)
    printf("Queue is full......\n");
    else if(r<0)
    {
        f=r=0;
        a[r]=val;
    }
    else
    {
        a[++r]=val;
    }
}

int deleteend()
{
    if(f<0)
    printf("Queue is already empty.....\n");
    else if(f==r)
    {
        f=r=-1;
    }
    else
    {
        ++f;
    }
}

int main()
{
    int x,ch;
    printf("1. insert element at last position: ");
    printf("\n2.delete at last position: ");
    printf("\n9.display array: ");
    printf("\n0.exit\n");
    while(ch!=0)
    {
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter element: ");
            scanf("%d",&x);
            insertend(x);
            break;
            
            case 2:
            deleteend();
            break;

            case 9:
            display();
            break;

            case 0:
            break;

            defualt :
            printf("Wrong choice");

            
            
            
            
            
            
            
            

        }
    }
}
   
