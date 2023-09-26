#include <stdio.h>
#include <string.h>

/*Searching a phone book using linear search*/
int main(void)
{
    const int n = 3;
    char names[][20] = {"Carter", "David", "Tom"};
    char numbers[][20] = {"+370666", "+370777", "+370888"};

    char search_name[20];
    printf("Whose phone number are you looking for?\n");
    scanf("%s", &search_name);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(names[i], search_name) == 0)
        {
            printf("%s's number is %s", search_name, numbers[i]);
            return 0;
        }
    }
    printf("Not found...");
    return 1;
}