/*

LE1.4 Suppose an array A has n distinct integers. Increasing sequence is given as A[1].........A[k]
and decreasing sequence is given as A[k+1]........A[n]. Write a program for finding k.

*/

#include<stdio.h>
//#include<string.h>
//#include<limits.h>
int main()
{
    int n,key,i,j,f=0;//i,j are loop variable and f is flag to found if satisfies the given condition in the program
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i+1]<a[i])
        {
            f=1;
            printf("%d",a[i]);
            break;
        }
    }
     if(f==0)
        printf("Not found");
}
