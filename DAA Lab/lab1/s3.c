/*

LE1.3 Given key in a sorted array A with distinct values. Write a program to find i, j, k such that
A[i] + A[j] + A[k] == key.

*/

#include<stdio.h>
//#include<string.h>
//#include<limits.h>
int main()
{
    int n,key,i,j,k,f=0;//i,j are loop variable and f is flag to found if satisfies the given condition in the program
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if((a[i]+a[j]+a[k])==key)
                {
                f=1;
                printf("%d\t%d\t%d\t%d\t%d\t%d",a[i],a[j],a[k],i,j,k);// is working (printing the value of found element and its array index)
                break;
                }
            }
        }
    }
    if(f==0)
        printf("Not found");
    //else
    //    printf("%d\t%d\t%d\t%d",a[i-1],a[j-1],i-1,j-1); is not working ?
}
