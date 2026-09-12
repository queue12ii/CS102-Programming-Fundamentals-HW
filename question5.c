#include <stdio.h>

int main(void)
{
    int n;
    int isPrime;
    int i;

    do
    {
        printf("Please enter an integer <between 2 to 9999999>: ");
        scanf("%d", &n);

        if (n < 2 || n > 9999999)
        {
            printf("%d is not between 2 to 9999999, please re-enter.\n", n);
        }
    }
    while (n < 2 || n > 9999999);

    isPrime = 1;

    if (n == 2)
    {
        isPrime = 1;
    }
    else if (n % 2 == 0)
    {
        isPrime = 0;
    }
    else
    {
        i = 3;

        while (i * i <= n && isPrime == 1)
        {
            if (n % i == 0)
            {
                isPrime = 0;
            }

            i = i + 2;
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
