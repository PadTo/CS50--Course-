#include <stdio.h>
#include <string.h>

typedef struct Data_structure
{
    char name[20];
    int votes;
} person;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <candidate1> <candidate2> ... <candidateN>\n", argv[0]);
        return 1;
    }

    int numCandidates = argc - 1;
    person candidates[numCandidates];

    for (int k = 0; k < numCandidates; k++)
    {
        strcpy(candidates[k].name, argv[k + 1]); // Copy the name from command line
        candidates[k].votes = 0;                 // Initialize votes to 0
    }

    int voters;
    char vote[20]; // Change the data type to char array
    printf("Number of voters: ");

    // Input handling for the number of voters
    do
    {
        if (scanf("%i", &voters) != 1)
        {
            printf("Invalid input. Please enter a valid number of voters: ");
            while ((getchar()) != '\n')
                ; // Clear input buffer
        }
    } while (voters <= 0); // Keep asking until a positive integer is entered

    while ((getchar()) != '\n')
        ; // Clear input buffer

    for (int i = 0; i < voters; i++)
    {
        printf("Vote: ");
        scanf("%s", vote);

        for (int j = 0; j < numCandidates; j++)
        {
            if (strcmp(vote, candidates[j].name) == 0)
            {
                candidates[j].votes++;
                break;
            }
        }
    }

    for (int k = 0; k < numCandidates; k++)
    {
        printf("%s: %i votes\n", candidates[k].name, candidates[k].votes);
    }

    return 0;
}
