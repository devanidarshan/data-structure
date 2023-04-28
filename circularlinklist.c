#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
};
struct node *head = NULL;

int display()
{
    struct node *ptr = head;
    if(ptr == NULL)
        printf("List is empty....");
   
    else
    {
        while(ptr->next != head)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
        printf("%d ",ptr->data);
    }
    printf("\n");

}

void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;

    if(head == NULL)
    {
        head  = temp;
        temp->next = head;
        return;
    }

    while(ptr->next != head)
        ptr = ptr->next;
    ptr->next = temp;
    temp->next = head;
    return;
}


void deleteend()
{
    struct node *ptr = head;
    struct node *prev;

    if (head == NULL)
        printf("\nList is Already Empty....");
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != head)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = head;
        free(ptr);
    }
    return;
}



void insertmid(int val,int pos)
{
    struct node * ptr=head;
    struct node * prev;
    struct node * temp=(struct node*)malloc(sizeof (struct node));
    temp -> data = val;

    while(ptr -> data != pos)
    {
        prev = ptr;
        ptr = ptr -> next;
    }
        prev -> next= temp;
        temp -> next = ptr;
        return ;
}

void deletemid(int pos)
{
    struct node *ptr=head;
    struct node *prev;

    while(ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr -> next; 

    }
     prev -> next = ptr ->next;
     free(ptr);
     return;
}

void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;

    if(head == NULL)
    {
        head  = temp;
        temp->next = head;
        return;
    }

    while(ptr->next != head)
        ptr = ptr->next;
    ptr->next = temp;
    temp->next = head;
    head = temp;
    return;
}
void deletefirst()
{
    struct node *ptr = head;
    struct node *temp = head;

    if(head == NULL)
        printf("List is already empty....\n");

    while(ptr->next != head)
        ptr = ptr->next;
    ptr->next = temp->next;
    head = temp->next;
    free(temp);
    return;
}

int main()
{
   int x,y,ch;
   printf("1. insert element at last position : ");
   printf("\n2. delete element at last position: ");
   printf("\n3 insert element at midpoint: ");
   printf("\n4 delete element at midpoint: ");
   printf("\n5 insert element at first position: ");
   printf("\n6 delete element at first position: ");
   printf("\n9. display array: ");
   printf("\n0. exit\n");
   do
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
         deleteend();
         break;

         case 3:
          printf("Enter element: ");
         scanf("%d",&x);
          printf("Enter position: ");
         scanf("%d",&y);
         insertmid(x,y);
         break;

         case 4:
          printf("Enter position: ");
         scanf("%d",&x);
         deletemid(x);
         break;

         case 5:
          printf("Enter element: ");
         scanf("%d",&x);
         insertfirst(x);
         break;

         case 6:
          deletefirst();
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
    }while(ch!=0);
}