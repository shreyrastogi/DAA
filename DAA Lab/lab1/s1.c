/*

LE1.1 Given an array. Let us assume that there can be duplicates in the list. Write a program to
search for an element in the list in such a way that we get the highest index if there are
duplicates.

*/

#include<stdio.h>
//#include<string.h>
#include<limits.h>
int main()
{
    int n,m=INT_MIN;//m has has the least value an integer can have i.e -2147483648
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(m<=a[i])
            m=a[i];
    }
    printf("%d",m);
}
