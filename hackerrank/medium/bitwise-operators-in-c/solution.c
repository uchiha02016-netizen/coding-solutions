#include <stdio.h>

int main()
{
    int n, k;
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    scanf("%d %d", &n, &k);

    for (int a = 1; a <= n; a++)
    {
        for (int b = a + 1; b <= n; b++)
        {
            int and_result = a & b;
            int or_result = a | b;
            int xor_result = a ^ b;

            if (and_result < k && and_result > max_and)
            {
                max_and = and_result;
            }

            if (or_result < k && or_result > max_or)
            {
                max_or = or_result;
            }

            if (xor_result < k && xor_result > max_xor)
            {
                max_xor = xor_result;
            }
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);

    return 0;
}
