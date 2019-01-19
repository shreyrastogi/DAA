//To calculate the time complexity of linear search
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#include<string.h>
//#include<limits.h>
int main()
{
int n,i,key;
double cpu_time;
clock_t start,end;
scanf("%d",&n);
int a[n];
start=clock();
for(i=0;i<n;i++)
a[i]=rand()/1000;
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
{
printf("found\n");
break;
}
}
if(i==n)
printf("not found\n");
end=clock();
cpu_time=((double)(end-start))/CLOCKS_PER_SEC;
printf("%f\n",cpu_time);
}
