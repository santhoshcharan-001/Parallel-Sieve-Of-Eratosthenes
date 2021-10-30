// C program to print all primes
// smaller than or equal to
// n using Sieve of Eratosthenes
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int x=n+1;
    // Create a boolean primeay
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    int prime[x];
    for(int p=0;p<=n;p++)
    {
        prime[p]=1;
    }
    // We are marking 0 and 1 as
    //false as they are composite
    prime[0]=0;
    prime[1]=0;
    for(int p=2;p*p<=n;p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if(prime[p]==1)
        {
            int j=2;
            while(p*j<=n)
            {
                // Update all multiples
                // of p greater than or
                // equal to the square of it
                // numbers which are multiple
                // of p and are less than p^2
                // are already been marked.
                prime[p*j]=0;
                j+=1;
            }
        }
    }
    // Print all prime numbers
    for(int p=2;p<=n;p++)
    {
        //Print the number if it is a prime
        if(prime[p])
        {
            printf("%d is prime\n",p);
        }
    }
    return 0;
}