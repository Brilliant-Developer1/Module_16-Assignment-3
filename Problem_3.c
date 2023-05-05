#include <stdio.h>

int count_before_zero(int array[], int input)
{
    int count = 0;
    for (int i = 0; i < input; i++)
    {
        if (array[i] == 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
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
    int count = count_before_zero(array, input);

    printf("%d", count);

    return 0;
}