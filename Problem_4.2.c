#include <stdio.h>

int return_and_noparameter()
{
    int input;
    scanf("%d", &input);
    int array[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &array[i]);
    }
    int ans = 0;
    for (int i = 0; i < input; i++)
    {
        ans = ans + array[i];
    }
    return ans;
}
int main()
{

    int ans = return_and_noparameter();
    printf("%d", ans);

    return 0;
}