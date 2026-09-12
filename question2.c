#include <stdio.h>

int main(void)
{
    int side1;
    int side2;
    int side3;
    int triangleType;

    printf("Please enter length of each side of your triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
    {
        triangleType = 0;
    }
    else if (side1 == side2 && side2 == side3)
    {
        triangleType = 1;
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        triangleType = 2;
    }
    else
    {
        triangleType = 3;
    }

    switch (triangleType)
    {
        case 0:
            printf("This is NOT a possible triangle.\n");
            break;

        case 1:
            printf("This is an equilateral triangle.\n");
            break;

        case 2:
            printf("This is an isosceles triangle.\n");
            break;

        case 3:
            printf("This is a scalene triangle.\n");
            break;
    }

    return 0;
}
