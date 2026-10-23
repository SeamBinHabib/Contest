#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int bit;
    int one = 0, max = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &bit);

        if (bit == 1)
        {
            one++;
            if (max < one)
            {
                max = one;
            }
        }
        else
        {
            one = 0;
        }
    }

    if(max == 0)
    {
        printf("0");
    }
    else
    {
        printf("%d",max);
    }

    return 0;
}
