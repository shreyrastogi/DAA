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
