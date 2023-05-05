#include <stdio.h>
#include <string.h>

int is_palindrome(char input[])
{
    int i, j, len, flag = 1;

    len = strlen(input);
    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (input[i] != input[j])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    char input[100];
    scanf("%s", input);

    int ans = is_palindrome(input);

    if (ans == 0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
    return 0;
}