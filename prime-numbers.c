#include <stdio.h>
int main()
{
    int n,isprime = 1;
    printf("Enter any number:");
    scanf("%d",&n);
    for(int j = 2; j< n; j++)
    {
        if(n % j == 0)
        {
            isprime = 0;
            break;
        }
    }
    if(isprime == 1)
    {
        printf("is prime");
    }
    else
    {
        printf("is not prime");
    }
    return 0;
}
