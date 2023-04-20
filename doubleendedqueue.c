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
int insertend(int val)
{
  if (r>=n-1)
  printf("queue is full....\n");
  else if(r<0)
  {
    f=r=0;
    a[r]=val;                                                                                                                           
    //printf("\ninserted element is: %d",val);
  }
  else 
  {
    a[++r]=val;
    //printf("\ninserted element is: %d",val);

  }
}  
 int deletefirst()
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
         ++f;
    }
}

int insertfirst(int val)
{
  if (f==0)
  printf("no insert this time: ");
  else if(f<0)
  {
    f=r=0;
    a[r]=val;
    //printf("\ninserted element is: %d",val);
  }
  else 
  {
    a[--f]=val;
    //printf("\ninserted element is: %d",val);

  }
}  
int deleteend()
{
    if(r<0)
    printf("queue is already empty...");
    else if(r==f)
    {
        //printf("\ndeleted element is: %d",a[f]);
        f=-1,r=-1;
    }
    else
    {
         //printf("\ndeleted element is: %d",a[f]);
         r--;
    }
}
int main()
{
   int x,ch;
   printf("1. insert element at last position : ");
   printf("\n2. delete element at first position: ");
   printf("\n3.insert element at first position: ");
   printf("\n4.delete element at last position: ");
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
         deletefirst();
         break;

         case 3:
         printf("Enter element: ");
         scanf("%d",&x);
         insertfirst(x);
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
        printf("wrong choice ...");
        break;
       
       }
    }
}    
