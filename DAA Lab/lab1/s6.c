/*

HE1.1 Write an algorithm for finding counting inversions in an array. Inversion is a pair such that
for an array A = {a1, a2, a3,...., an}, and ai > aj and i < j.

*/

#include<stdio.h>
//#include<string.h>
//#include<limits.h>
int main()
{

    int n,count_inv=0,i,j;//i,j are loop variable
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])//here i is always less than j so it is not required to check
                count_inv++;
        }
    }
    if(count_inv==0)
        printf("Not found");
    else
        printf("%d",count_inv);
}
