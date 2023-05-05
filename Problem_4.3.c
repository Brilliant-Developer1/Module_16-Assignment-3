#include <stdio.h>

void noreturn_and_parameter(int array[], int input)
{

    for (int i = 0; i < input; i++)
    {
        if (array[i] > 50)
        {
            array[i] = 0;
        }
    }
}
int main()
{
    int input;
    scanf("%d", &input);
    int array[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &array[i]);
    }

    noreturn_and_parameter(array, input);
    for (int i = 0; i < input; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}