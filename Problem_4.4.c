#include <stdio.h>

void noreturn_and_noparameter()
{
    int input;
    scanf("%d", &input);
    for (int i = 1; i <= input; i++)
    {
        if (input % i == 0)
        {
            printf("%d ", i);
        }
    }
}
int main()
{

    noreturn_and_noparameter();

    return 0;
}