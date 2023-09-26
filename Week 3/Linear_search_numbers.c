#include <stdio.h>
#include <string.h>

/*Searching for a number in a given array of numbers*/
int main(void)
{
    int doors[] = {1, 20, 30, 50, 100, 170};
    int n;

    printf("What number do you want to find?\n");
    scanf("%i", &n);

    for (int i = 0; i < 7; i++)
    {
        if (doors[i] == n)
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not Found...\n");
    return 1;
}