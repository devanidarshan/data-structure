#include<stdio.h>
#define n 5
int a[n];
int f=-1,r=-1;
void display()
{
    printf("\n");
    int i=f;
    if(f<0)
    {
        printf("queue is empty....");
    }
    else
    {
        do
        {
            printf("%d ",a[i]);
            i=(i+1)%n;
        } while (i!=(r+1)%n);
    
    }
}
void insertend(int val)
{
  if ((r+1)%n==f)
  printf("queue is full....");
  else if(r<0)
  {
    f=r=0;
    a[r]=val;
    //printf("\ninserted element is: %d",val);
  }
  else 
  {
    r=(r+1)%n;
    a[r]=val;
    //printf("\ninserted element is: %d",val);

  }
}  
void delete()
{
    if(f<0)
    printf("queue is already empty...");
    else if(f==r)
    {
        //printf("\ndeleted element is: %d",a[f]);
        f=-1,r=-1;
    }
    else
    {
         //printf("\ndeleted element is: %d",a[f]);
         f=(f+1)%n;
    }
}
int main()
{
   int x,ch;
   printf("1. insert element at last position : ");
   printf("\n2. delete at last position: ");
   printf("\n9. display array: ");
   printf("\n0. exit\n");
   while(ch!=0)
   {
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
       {
         case 1:
         printf("Enter element: ");
         scanf("%d",&x);
         insertend(x);
         break;

         case 2:
         delete();
         break;

         case 9:
         display();
         break;

         case 0:
         break;

        default:
        printf("wrong choice ...");
        break;
       
       }
    }
}    
