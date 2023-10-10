#include <stdio.h>
#include <string.h>

typedef struct
{
    char menu_item[20];
    float price;

} Menu;

char make_FL_CAPITAL(char string[])
{
    // Check if the first letter of the string is a lower case letter
    if (string[0] != ' ' && (string[0] >= 'a' && string[0] <= 'z'))
    {
        // if it is, then change it to a capital using ASCII table
        string[0] = string[0] - 32;
    }
}

int main(void)
{
    printf("Welcome to Beach Burger Shack!\n");
    printf("Choose from the following menu to order. Press enter when done.\n");

    int found;

    char Order[30];
    float sum = 0;

    // 6 Items on the menu and initialising structure
    int const N = 6;
    Menu full_menu[6];

    strcpy(full_menu[0].menu_item, "Burger");
    full_menu[0].price = 8.3;

    strcpy(full_menu[1].menu_item, "Salad");
    full_menu[1].price = 7.3;

    strcpy(full_menu[2].menu_item, "Chips");
    full_menu[2].price = 4.3;

    strcpy(full_menu[3].menu_item, "Cola");
    full_menu[3].price = 1.3;

    strcpy(full_menu[4].menu_item, "Sprite");
    full_menu[4].price = 2;

    strcpy(full_menu[5].menu_item, "Soup");
    full_menu[5].price = 3.1;

    for (int i = 0; i < N; i++)
    {
        printf("Item: %s       Price: $%f\n", full_menu[i].menu_item, full_menu[i].price);
    }

    printf("What would you like to order?\n");

    // Creating an infinite loop
    while (1)
    {
        found = 0;
        printf("Enter a food or beverage name: ");

        // Read a line of input using fgets
        if (fgets(Order, sizeof(Order), stdin) == NULL)
        {
            // Handle potential error or end of input
            printf("Error reading input or end of input.\n");
            break;
        }

        // Make the first letter capital
        make_FL_CAPITAL(Order);

        // Remove the trailing newline character, if present
        size_t len = strlen(Order);
        if (len > 0 && Order[len - 1] == '\n')
        {
            Order[len - 1] = '\0';
        }
        if (strlen(Order) == 0)
        {
            if (sum == 0)
            {
                printf("You haven't ordered anything...");
                break;
            }

            else
            {
                printf("Here is the total sum: $%f", sum);
                break;
            }
        }

        for (int i = 0; i < N; i++)
        {
            if (strcmp(Order, full_menu[i].menu_item) == 0)
            {
                sum = sum + full_menu[i].price;
                found = 1;
            }
        }

        if (found == 0)
        {
            printf("There is no such item in our menu...");
            return 1;
            break;
        }
    }
}