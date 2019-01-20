/*

LE2.1 Write a program to implement GCD (greatest common divisor) using the following three
algorithms.
a) Euclid’s algorithm
b) Consecutive integer checking algorithm.
c) Middle school procedure which makes use of common prime factors. For finding list of
primes implement sieve of Eratosthenes.
Find gcd(31415, 14142) by applying each of the above algorithms.

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
//#include<time.h>
#include<string.h>
//#include<limits.h>
int gcd_euclid_algo(int a,int b)//euclid's algo for gcd
{
if(a==0)
return b;
else
return gcd_euclid_algo(b%a,a);
}

void SieveOfEratosthenes(int a,int b)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime1[a+1];
    memset(prime1, true, sizeof(prime1));
    bool prime2[b+1];
    memset(prime2, true, sizeof(prime2));
    for (int p=2; p*p<=a; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime1[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i=p*p; i<=a; i += p)
                prime1[i] = false;
        }
    }
    for (int p=2; p*p<=b; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime2[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i=p*p; i<=b; i += p)
                prime2[i] = false;
        }
    }
    //To print all the prime in a
    for (int i=2; i<=a; i++)
    {
        if (prime1[i])
            printf("%d\t",i);
    }
    printf("\n");
    //To print all the prime in b
    for(int j=2;j<=b;j++)
    {
        if (prime2[j])
            printf("%d\t",j);
    }
}
// A function to print all prime factors of a and b
void primeFactors(int a,int b)
{
    int a_pf[5000],as=0,b_pf[5000],bs=0;
    // Print the number of 2s that divide n
    while (a%2 == 0)
    {
        a_pf[as]=2;
        as++;
        a = a/2;
    }
     while (b%2 == 0)
    {
        b_pf[bs]=2;
        bs++;
        b = b/2;
    }
    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(a); i = i+2)
    {
        // While i divides a, store i and divide a
        while (a%i == 0)
        {
            a_pf[as]=i;
            as++;
            a = a/i;
        }
    }
     for (int i = 3; i <= sqrt(b); i = i+2)
    {
        // While i divides b, store i and divide b
        while (b%i == 0)
        {
            b_pf[bs]=i;
            bs++;
            b = b/i;
        }
    }
    // This condition is to handle the case when a and b
    // are prime numbers greater than 2
    if (a > 2)
    {
        a_pf[as]=a;
        as++;
    }
    if (b > 2)
    {
        b_pf[bs]=b;
        bs++;
    }
    int g=(as>bs)?as:bs;
    int arr_frq[5000];
/*
    for(int i=0;i<as;i++)
    printf("%d\t",a_pf[i]);
    printf("\n");
    for(int i=0;i<bs;i++)
    printf("%d\t",b_pf[i]);
    printf("\n");
*/
    for(int i=0;i<g;i++)
    arr_frq[i]=0;
    int p=1;
    for(int i=0;i<as;i++)
    {
        for(int j=0;j<bs;j++)
        {
            if(a_pf[i]==b_pf[j])
               {
                   int m=a_pf[i];
                   arr_frq[m]+=1;
                   if(arr_frq[a_pf[i]]==1)
                   p*=a_pf[i];
                   //printf("%d\n",p);
                   break;
               }
        }
    }
    //for(int i=0;i<g;i++)
    //printf("%d\t",arr_frq[i]);
    printf("%d",p);
}
int main()
{
int a,b;
scanf("%d%d",&a,&b);
int o=gcd_euclid_algo(a,b);
printf("%d\n",o);
SieveOfEratosthenes(a,b);
printf("\n");
primeFactors(a,b);
return 0;
}
// I have taken help from https://www.geeksforgeeks.org/sieve-of-eratosthenes/ and https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/
