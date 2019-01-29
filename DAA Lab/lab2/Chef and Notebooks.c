#include<stdio.h>
#include<stdlib.h>
//#include<limits.h>
//#include<string.h>
//#include<time.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int X,Y,K,N,i=0,j=1;
        scanf("%d%d%d%d",&X,&Y,&K,&N);
        while(j<=N)
        {
            int P,C;
            scanf("%d%d",&P,&C);
            if(C<=K&&(X-Y)<=P)
            {
                i=1;
                break;
            }
            j++;
        }
        if(i==1)
            printf("LuckyChef\n");
        else
            printf("UnluckyChef\n");
    }
}
