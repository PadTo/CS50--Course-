float max(int N, float array[])
{
    float temp = array[0];
    for (int i = 0; i < N; i++)
    {

        if (temp < array[i])
        {
            temp = array[i];
        }
    }
    printf("Maximum value in an array is: %f", temp);
}

int main(void)
{
    int n_el;
    printf("Number of elements: ");
    scanf("%i", &n_el);

    float array[4];
    float input;

    int i;
    for (i = 0; i < n_el; i++)
    {
        printf("Element %i: ", i + 1);
        if (scanf("%f", &input) != 1)
        {
            printf("ERROR: Please input a number!");
            break;
        }

        array[i] = input;
    }

    max(n_el, array);
}