/*

s1.c : Wap to implement insertion sort of n random numbers to find out the execution time for best,worst and average.

*/

#include<stdio.h>
#include<stdlib.h>
//#include<limits.h>
//#include<string.h>
#include<time.h>

void inserion_sort(int* a,int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int t=a[i];
        while(j>=0&&a[j]>t)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
}

/*void reverse_array(int *a,int n)
{
    int j=n-1;
    for(int i=0;i<n,j>=0;i++,j--)
    {
        int t=*(a+j);
        *(a+j)=*(a+i);
        *(a+i)=t;
    }
}
*/

void reverseArray(int *arr, int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    double cpu_time;
    clock_t start1,end1,start2,end2,start3,end3;
    int size;
    //printf("\nEnter size of the array\n");
    scanf("%d",&size);
    int array[size],j=size;
    for(int i=0;i<size;i++)
        array[i]=rand()/1000;
    //printf("\nOriginal Array:\n");
    for(int i=0;i<size;i++)
        printf("%d\t",array[i]);

//for average case time complexity-------------------------------------------------
    start1=clock();
    inserion_sort(array,size);
    end1=clock();

    cpu_time=((double)(end1-start1))/CLOCKS_PER_SEC;

    /*for(int i=0;i<size;i++)
        printf("%d\t",array[i]);*/
    printf("\n");
    printf("%f\n",cpu_time);
//----------------------------------------------------------------------------------

//for best case time complexity-----------------------------------------------------
    start2=clock();
    inserion_sort(array,size);
    end2=clock();

    cpu_time=((double)(end2-start2))/CLOCKS_PER_SEC;

    /*for(int i=0;i<size;i++)
        printf("%d\t",array[i]);*/
    printf("\n");
    printf("%f\n",cpu_time);
//----------------------------------------------------------------------------------

//for worst case time complexity-----------------------------------------------------
    reverseArray(array,size,size-1);
    start3=clock();
    inserion_sort(array,size);
    end3=clock();

    cpu_time=((double)(end3-start3))/CLOCKS_PER_SEC;

    /*for(int i=0;i<size;i++)
        printf("%d\t",array[i]);*/
    printf("\n");
    printf("%f\n",cpu_time);
//----------------------------------------------------------------------------------
}
