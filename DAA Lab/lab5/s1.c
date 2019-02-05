/*

Implement Quick sort for n random numbers and find its time complexity

*/
#include<stdio.h>
#include<stdlib.h>
//#include<limits.h>
//#include<string.h>
#include<time.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition_index(int arr[],int start,int end)
{
    int pivot=arr[end];
    int pi=start;
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(&arr[i],&arr[pi]);
            ++pi;
        }
    }
    swap(&arr[pi],&arr[end]);
    return pi;
}

void quick_sort(int arr[],int start,int end)
{
    if(start<end)
    {
        int pi=partition_index(arr,start,end);
        quick_sort(arr,start,pi-1);
        quick_sort(arr,pi+1,end);
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    double cpu_time;
    clock_t start,end;
    while(T--)
    {
        int n;
        scanf("%d",&n);
        int array[n];
        for(int i=0;i<n;i++)
            array[i]=rand()/1000;
        for(int i=0;i<n;i++)
            printf("%d\t",array[i]);
        printf("\n");
        start=clock();
        quick_sort(array,0,n);
        end=clock();
        for(int i=0;i<n;i++)
            printf("%d\t",array[i]);
        printf("\n");
        cpu_time=((double)(end-start))/CLOCKS_PER_SEC;
        printf("\n%f\n",cpu_time);
    }
}
