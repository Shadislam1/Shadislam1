#include <stdio.h>
int main()
{
    int i, T, N, j;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        printf("case %d:", i);
        for (j = 1; j <= N; j++)
        {
            if (N % j == 0)
            {
                printf(" %d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}
