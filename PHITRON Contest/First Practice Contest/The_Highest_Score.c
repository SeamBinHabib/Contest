#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int s, max = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &s);

        if (max < s)
        {
            max = s;
        }
    }
    printf("%d", max);

    return 0;
}
