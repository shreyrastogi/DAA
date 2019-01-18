#include<stdio.h>
//#include<string.h>
//#include<limits.h>
int main()
{
    int n,key,i,product_a=1,j,f=0;//i,j are loop variable
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        product_a*=a[i];
    for(int i=0;i<n;i++)
        a[i]=product_a/a[i];//here the array is updating by storing the product of all elements in the array except the element at ith index
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
}
