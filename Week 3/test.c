#include <stdio.h>
#include <string.h>

int array[] = {7, 1, 5, 3, 2, 9, 0};

int main(void)
{
    int smallest;    // Placeholder for the smallest value in the array
    const int N = 7; // Placeholder for elements in the array
    int index;       // Index for the position of the smallest element
    int check;       // Checking if the smallest value does not change

    for (int i = 0; i < N; i++)
    {
        check = array[i];    // Assigning a value to check
        smallest = array[i]; // Assigning the same value to the current smallest value

        // Looping over the the array to find the smallest value
        for (int j = i; j < N; j++)
        {
            if (smallest > array[j])
            {
                smallest = array[j];
                index = j;
            }
        }

        if (check != smallest) /* If the check values is not the same as smallest,
                                  then switch the smallest and the current index places*/

        {
            array[index] = array[i];
        }

        array[i] = smallest;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%i\n", array[i]);
    }
}