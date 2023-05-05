#include <stdio.h>

int return_and_parameter(int a, int b)
{

    int even = 0, odd = 0;
    if (a * b % 2 == 0)
    {
        even += 2;
    }
    else
    {
        odd++;
    }

    if (even)
    {
        return even;
    }
    else
    {
        return odd;
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int ans = return_and_parameter(a, b);

    if (ans == 2)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}