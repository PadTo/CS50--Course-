#include <stdio.h>

int main(void)
{
    int swap;
    int condition = 0;
    int j = 0;
    int store;
    const int n = 3;
    int numbers[] = {1, 2, 3};

    for (int k = 0; k < n - 1; k++)
    {
        if (k == 0)
        {
            swap = 0;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                store = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = store;
                swap = 1;
            }
        }
        if (swap == 0)
        {
            printf("Numbers are already in ascending order.");
            return 0;
        }
    }

    /* Check if the values are in ascending order*/
    while (numbers[j] < numbers[j + 1])
    {
        if (numbers[j] < numbers[j + 1])
        {
            condition = 1;
        }
        else
        {
            condition = 0;
        }

        j++;
    }

    if (condition == 1)
    {
        printf("Numbers are in ascending order!");
        return 0;
    }
    else
    {
        printf("Numbers aren't in ascending order!");
        return 1;
    }
}
