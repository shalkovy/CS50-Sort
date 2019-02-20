#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("how many numbers do you want to sort?\n");
    int a[n];
    int swap = 0, counter = 0;

    for (int i = 0; i < n; i++)
    {
        printf("get %i number ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if (a[i] > a[i+1])
                counter++;
                {
                    swap = a[i];
                    a[i] = a[i+1];
                    a[i+1] = swap;
                }
        }

    }

    for (int i = 0; i < n; i++)
    {
        printf ("%i ", a[i]);
    }
    printf("iterration was %i times", counter);
    printf("\n");
}