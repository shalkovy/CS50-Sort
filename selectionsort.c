#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n = get_int("how manu numbers do u want to sort?\n");
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("get %i number ", i+1);
        scanf("%d", &a[i]);
    }

   for (int i = 0; i < n; i++)
    {
        int min = a[i];

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                min = a[j];
                a[j] = a[i];
                a[i] = min;
            }
       }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
