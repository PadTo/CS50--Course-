#include <stdio.h>
#include <string.h>

typedef struct data_structure
{
    char city[30];
    int temp;
} temperature;

int sort(temperature structure[], int N)
{
    int lowest;
    int count;
    char c_city[30];

    /* Using Selection Sort*/
    for (int i = 0; i < N - 1; i++)
    {
        lowest = structure[i].temp;
        count = 0;
        for (int j = i; j < N; j++)
        {

            if (lowest > structure[j].temp)
            {
                lowest = structure[j].temp;
                count = j;
            }
        }
        structure[count].temp = structure[i].temp;
        structure[i].temp = lowest;

        char tempCity[30];
        strcpy(tempCity, structure[i].city);
        strcpy(structure[i].city, structure[count].city);
        strcpy(structure[count].city, tempCity);
    }
    for (int i = 0; i < 5; i++)
    {

        printf("City: %s  Temperature: %i\n", structure[i].city, structure[i].temp);
    }
}

int main(void)
{
    const int N = 5;
    temperature city_temperatures[N];

    strcpy(city_temperatures[0].city, "Las_Vegas");
    city_temperatures[0].temp = 105;

    strcpy(city_temperatures[1].city, "Phoenix");
    city_temperatures[1].temp = 107;

    strcpy(city_temperatures[2].city, "Chicago");
    city_temperatures[2].temp = 85;

    strcpy(city_temperatures[3].city, "New_York");
    city_temperatures[3].temp = 85;

    strcpy(city_temperatures[4].city, "Austin");
    city_temperatures[4].temp = 97;

    // Call the sort function to sort the array
    sort(city_temperatures, N);

    // Rest of your program
}