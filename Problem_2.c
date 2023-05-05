#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    int s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int u = 1; u <= k; u++)
        {
            printf("%d", i);
        }

        s--;
        k++;
        printf("\n");
    }
    return 0;
}

/* input 5
output =
    *
   **
  ***
 ****
*****

*/