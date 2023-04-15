#include<stdio.h>
#define n 5
int a[n],i;
int top=-1;
void display()
{
    if(top==-1)
    printf("Array is empty..");
    else
    {
        for(i=0;i<=top;i++)
        printf("%d ",a[i]);
    }
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
       printf("Insert element is: %d\n",a[top]);
    }
}
int deleteend()
{
    if(top==-1)
    printf("Array is already empty: \n ");
    else  
    {
       printf("Delete element is: %d\n",a[top]);
       top--;
      
    }
}
int insertfirst(int val)
{
    if(top>=n-1)
    printf("Array is empty: \n ");
    else  
    {
        for(i=n-1;i>=0;i--)
        a[i]=a[i-1];
        a[0]=val;
       top++;
       
       printf(" front Insert element is: %d\n",val);
    }
}
int deletefirst()
{
    if(top==-1)
    printf("Array is already empty: \n ");
    else  
    {
       printf("front Delete element is: %d\n",a[0]);
        for(i=0;i<=n-1;i++)
        a[i]=a[i+1];
       top--;
      
    }
}
int main()
{
int x, ch;
 printf("1.insert element at first position: ");
 printf("\n2delete element at first position:  ");
 printf("\n3.insert element at last position: ");
 printf("\n4delete element at last position: ");
 printf("\n9.display array: ");
 printf("\n0.exit\n");
while(ch!=0)
   {
    
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    { 
    case 1:
    printf("Enter element at first position: ");
    scanf("%d",&x);                 
    insertfirst(x);
    break;

    case 2:
         deletefirst();
         break;

    case 3:
         printf("Enter element at last position: ");
         scanf("%d",&x);
         insertend(x);  
         break;  

    case 4:
         deleteend(); 
         break;  

    case 9:
         display();
         break;

    case 0:
        break;

    default:
        printf("Wrong choice: ");
        break;
    }
   }
}


