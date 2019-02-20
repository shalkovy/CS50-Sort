#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("how many numbers will be in your array?\n");
    int a[n];
    int swap, swap2;

    for (int i = 0; i < n; i++)
    {
        printf("get %i number ", i+1);
        scanf("%i", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i+1])
        {
            swap = a[i+1];

            for (int j = i + 1; j > 0; j--)
            {
                if (a[j] < a[j - 1])
                {
                    swap2 = a[j - 1];
                    a[j - 1] = swap;
                    a[j] = swap2;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%i ", a[i]);
    }

    printf("\n");
}