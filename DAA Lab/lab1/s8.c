#include<stdio.h>
//#include<string.h>
//#include<limits.h>
int main()
{
    int n,i,j,f=0;//i,j are loop variable
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[j]-a[i])>max_diff)
                max_diff=a[j]-a[i];
        }
    }
    printf("%d",max_diff);
}
