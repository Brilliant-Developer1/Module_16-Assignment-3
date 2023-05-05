#include <stdio.h>

void pass_by_value(int a)
{
    a = 20;
}
int main()
{
    int a = 10;

    pass_by_value(a);
    printf("%d", a);

    return 0;
}