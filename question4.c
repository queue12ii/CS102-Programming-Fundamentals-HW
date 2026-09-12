#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int start;
    int end;
    int i;

    printf("Please enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= num2)
    {
        start = num1;
        end = num2;
    }
    else
    {
        start = num2;
        end = num1;
    }

    printf("All the numbers that can be divided by 13 are:\n");

    for (i = start; i <= end; i++)
    {
        if (i % 13 == 0)
        {
            printf("%d\n", i);
        }
    }

    printf("Bye!!\n");

    return 0;
}
