#include <stdio.h>
int main()
{
    int A, I, P, E;
    int score = 0;

    scanf("%d %d %d %d", &A, &I, &P, &E);

    if (21 <= A && A <= 35)
    {
        score++;
    }
    if (80 <= I && I <= 100)
    {
        score++;
    }
    if (70 <= P && I <= 100)
    {
        score++;
    }

    if (2 <= E && E <= 50)
    {
        score++;
    }
    else if (A >= 30 && I >= 95 && P >= 90)
    {
        score++;
    }

    if (score == 4)
    {
        printf("Selected\n");
    }
    else
    {
        printf("Rejected\n");
    }

    return 0;
}
