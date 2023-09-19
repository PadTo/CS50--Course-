#include <stdio.h>

int valid_triangle(float x, float y, float z)
{
    if (x >= 0 && y >= 0 && z >= 0)
    {
        if ((x + y > z) || (x + z > y) || (y + z > x))
        {
            return 1;
        }
    }

    return 0;
}

int main(void)
{
    float side1 = 5;
    float side2 = 9;
    float side3 = 3;

    if (valid_triangle(side1, side2, side3))
    {
        printf("It's a valid triangle.\n");
    }
    else
    {
        printf("It's not a valid triangle.\n");
    }

    return 0;
}
