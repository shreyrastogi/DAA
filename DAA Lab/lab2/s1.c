#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
//#include<limits.h>
int main()
{
int n,i,key1,key2,key3,t,r,index;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
a[i]=rand();
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
scanf("%d",&key1);
t=a[0];
while(t>0)//for 1st element
{
r=t%10;
if(r==key1)
{
printf("found\n");
break;
}
t/=10;
}
if(t==0)
printf("not found\n");
scanf("%d",&key2);
scanf("%d",&index);
t=a[index];
while(t>0)//for nth element
{
r=t%10;
if(r==key2)
{
printf("found\n");
break;
}
}
if(t==0)
printf("not found\n");
scanf("%d",&key3);
t=a[n-1];
while(t>0)//for nth element
{
r=t%10;
if(r==key3)
{
printf("found\n");
break;
}
t/=10;
}
if(t==0)
printf("not found\n");
}
