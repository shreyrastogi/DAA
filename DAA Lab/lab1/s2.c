/*

LE1.2 Write a program for finding i and j in an array A for any key such that A[j]2 + A[i]2 == key

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
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]*a[i]+a[j]*a[j])==key)
            {
                f=1;
                printf("%d\t%d\t%d\t%d",a[i],a[j],i,j);// is working (printing the value of found element and its array index)
                break;
            }
        }
    }
    if(f==0)
        printf("Not found");
    //else
    //    printf("%d\t%d\t%d\t%d",a[i-1],a[j-1],i-1,j-1); is not working ?
}
