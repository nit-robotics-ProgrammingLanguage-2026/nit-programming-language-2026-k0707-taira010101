#include <stdio.h>

int is_prime(int x);

int main(void)
{
    int limit;
    int total = 0;
    scanf("%d", &limit);
    if (limit > 10000)
    {
        printf("NG");
        return 0;
    }
    for (int candidate = 1; candidate <= limit; candidate++)
        total += is_prime(candidate);
    printf("%d", total);
    return 0;
}

int is_prime(int x)
{
    if (x < 2)
        return 0;
    if (x == 2)
        return 1;
    if (x % 2 == 0)
        return 0;
    for (int factor = 3; factor <= x / factor; factor += 2)
    {
        if (x % factor == 0)
            return 0;
    }
    return 1;
}
