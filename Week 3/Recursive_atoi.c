#include <stdio.h>

long atoi(char *str)
{
    int res = 0;
    int j = 0;
    while (str[j] == ' ' || str[j] == '\n')
    {
        j++;
    }

    if (str[j] == '-')
    {
        printf("ERROR: The integer has to be positive!\n");
        return 1;
    }

    for (; str[j] != '\0'; j++)
    {
        res = res * 10 + (str[j] - '0');
    }
    return res;
}

int main(void)
{
    char str[100]; // Declare a character array to store the input string
    printf("Enter a positive integer: ");
    scanf("%s", str);

    long result = atoi(str); // Call the atoi function and store the result

    printf("The integer value is: %ld\n", result);

    return 0;
}
