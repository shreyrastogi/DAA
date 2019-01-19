#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//#include<string.h>
#include<limits.h>
int gcd_euclid_algo(int a,int b)//euclid's algo for gcd
{
if(a==0)
return b;
else
return gcd(b%a,a);
}
int* prime_factors(int n)
{
int k=0;
int a[MAX_INT];
while(n%2==0)
{
a[k++]=2;
n=n/2;
}
for(int i=3;i<=sqrt(n);i+=2)
{
while(n%i==0)
a[k++]=n
n=n/i;
}
return &a
}
int main()
{
int a,b;
scanf("%d%d",&a,&b);
int o=gcd_euclid_algo(a,b);
printf("%d",o);
int *a=
}
