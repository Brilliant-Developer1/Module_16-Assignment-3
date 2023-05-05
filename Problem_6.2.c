#include <stdio.h>

void pass_by_reference(int *a, int *b)
{
    *a = 30;
}
int main()
{
    int a = 10, b = 20;

    pass_by_reference(&a, &b);
    printf("%d %d", a, b);

    return 0;
}