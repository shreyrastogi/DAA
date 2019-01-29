/*

s1.c : Wap to implement recursive binary search to search  a key in n random numbers and find out the execution time for different values of n and key.

*/

#include<stdio.h>
#include<stdlib.h>
//#include<limits.h>
//#include<string.h>
#include<time.h>

void merge(int *arr, int start, int mid, int end) {
	// create a temp array
	int temp[end - start + 1];

	// crawlers for both intervals and for temp
	int i = start, j = mid+1, k = 0;

	// traverse both arrays and in each iteration add smaller of both elements in temp
	while(i <= mid && j <= end) {
		if(arr[i] <= arr[j]) {
			temp[k] = arr[i];
			k += 1; i += 1;
		}
		else {
			temp[k] = arr[j];
			k += 1; j += 1;
		}
	}

	// add elements left in the first interval
	while(i <= mid) {
		temp[k] = arr[i];
		k += 1; i += 1;
	}

	// add elements left in the second interval
	while(j <= end) {
		temp[k] = arr[j];
		k += 1; j += 1;
	}

	// copy temp to original interval
	for(i = start; i <= end; i += 1) {
		arr[i] = temp[i - start];
	}
}

// arr is an array of integer type
// start and end are the starting and ending index of current interval of arr

void mergeSort(int *arr, int start, int end)
{
	if(start < end)
    {
		int mid = (start + end) / 2;
		mergeSort(arr, start, mid);
		mergeSort(arr, mid+1, end);
		merge(arr, start, mid, end);
	}
}

int binarySearch(int a[], int item, int low, int high)
{
    if (high >= low)
    {
        int mid = (low + high)/2;
        if(item == a[mid])
            return mid;
        if(item > a[mid])
            return binarySearch(a, item, mid+1, high);
        return binarySearch(a, item, low, mid-1);

    }
    return -1;
}

int main()
{
    double cpu_time;
    clock_t start,end;
    int size,key;
    //printf("\nEnter size of the array\n");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++)
        array[i]=rand()/1000;
    //printf("\nOriginal Array:\n");
    for(int i=0;i<size;i++)
        printf("%d\t",array[i]);
    printf("\n");
    mergeSort(array,0,size-1);
    for(int i=0;i<size;i++)
        printf("%d\t",array[i]);
    prinf("\n");
    scanf("%d",&key);
    start=clock();
    int c=binarySearch(array,key,0,size-1);
    end=clock();
    if(c==-1)
        printf("Not Found\n");
    else
        printf("Found\n");
    cpu_time=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\n%f\n",cpu_time);
}
