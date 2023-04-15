#include<stdio.h>
#include<stdlib.h>
#define n 10
int main()
{
    int a[n],i,j,t;
    for(i=0;i<n;i++)
    a[i]=rand()%50+1;

    printf("Unsorted array is: \n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

//bubble sort
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[j]>a[j+1])
           {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
           }
        }
    }
           printf("\n Sorted array is: \n");
           for(i=0;i<n;i++)
           printf("%d ",a[i]);
    }