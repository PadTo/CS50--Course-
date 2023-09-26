#include <stdio.h>
#include <string.h>

typedef struct Data_structure
{
    char name[20];
    char number[20];
} person;

/*Searching a phone book using linear search*/
int main(void)
{
    const int N = 2;
    person people[N];
    strcpy(people[0].name, "Carter");
    strcpy(people[0].number, "+37066");

    strcpy(people[1].name, "Jake");
    strcpy(people[1].number, "+37077");

    char search_name[20];
    printf("Whose phone number are you looking for?\n");
    scanf("%s", &search_name);

    for (int i = 0; i < N; i++)
    {
        if (strcmp(people[i].name, search_name) == 0)
        {
            printf("%s's number is %s", search_name, people[i].number);
            return 0;
        }
    }
    printf("Not found...");
    return 1;
}