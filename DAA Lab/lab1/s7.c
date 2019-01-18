#include<stdio.h>
//#include<string.h>
//#include<limits.h>
int main()
{
    int n1,n2,missing_no,i,j;//i,j are loop variable
    scanf("%d",&n1);
    int a1[n1];
    for(i=0;i<n1;i++)
        scanf("%d",&a1[i]);
    scanf("%d",&n2);
    int a2[n2];
    for(i=0;i<n2;i++)
        scanf("%d",&a2[i]);
    if(n1>n2)
    {
        int fe_a[n1];//this array contains 1 if the element is found else 0
        for(i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {
                if(a1[i]==a2[j])
                    fe_a[i]=1;
            }
        }
        for(i=0;i<n1;i++)
        {
            if(fe_a[i]!=1)
                break;
        }
        printf("%d",a1[i]);
    }
    else
    {
        int fe_a[n2];//this array contains 1 if the element is found else 0
        for(i=0;i<n2;i++)
        {
            for(j=0;j<n1;j++)
            {
                if(a1[i]==a2[j])
                    fe_a[i]=1;
            }
        }
        for(i=0;i<n2;i++)
        {
            if(fe_a[i]!=1)
                break;
        }
        printf("%d",a2[i]);
    }
}
