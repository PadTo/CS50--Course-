#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char name[20];
    printf("What's your name?: ");
    scanf("%s", name);

    int i = 0;
    int j = 0;
    while (name[j] != '\0')
    {
        j++;
    }
    printf("Your name has %i letters\n", j);

    while (name[i] != '\0')
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            printf("%c ", name[i] - 32);

        else
        {
            printf("%c ", name[i]);
        }
        i++;
    }
}