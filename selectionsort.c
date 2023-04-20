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

//selection sort
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i]>a[j])
           {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
           }
        }
    }
           printf("\n Sorted array is: \n");
           for(i=0;i<n;i++)
           printf("%d ",a[i]);
    }