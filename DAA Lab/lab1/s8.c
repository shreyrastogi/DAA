//maximum-difference-between-two-elements
#include<stdio.h>
//#include<string.h>
//#include<limits.h>
int main()
{
    int n,i,min_element,max_diff;//i,j are loop variable
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
         /* brute force method using O(n^2) time complexity
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[j]-a[i])>max_diff)
                max_diff=a[j]-a[i];
        }
    }
    */
    // Maximum difference found so far
     max_diff = a[1] - a[0];
     // Minimum number visited so far
     min_element = a[0];
     for(int i = 1; i < n; i++)//efficient methd with O(n) time complexity
     {
         if (a[i] - min_element > max_diff)
            max_diff = a[i] - min_element;
        if (a[i] < min_element)
            min_element = a[i];
     }
     printf("%d",max_diff);
}
/*
I took help from https://www.geeksforgeeks.org/maximum-difference-between-two-elements/ for O(n) mehod
*/
