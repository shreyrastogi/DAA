/*

HE1.3 Write a program to find out the largest difference between two elements A[i] and A[j] (A[j]-
A[i]) of the array of integers A in O(n) time such that j > i. For example: Let A is an array of
integers:
int[] a = { 10, 3, 6, 8, 9, 4, 3 };
if i=1, j=3, then diff = a[j] – a[i] = 8 – 3 = 5
if i=4, j=6, then diff = a[j] – a[i] = 3 – 9 = -6
……….
……….
if i=1, j=4, then diff = a[j] – a[i] = 9 – 3 = 6
………..
………..
6 is the largest number between all the differences, that is the answer.

*/

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
I took help from https://www.geeksforgeeks.org/maximum-difference-between-two-elements/ for O(n) method
*/
