#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    // Declare a Variable Num and Take Input Of Upcoming No Of Lines (No Of Times Next Input Lines)
    int T[num], X[num], count;
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &T[i], &X[i]);
    }
    // Declare Array [num] times And Take input Using for Loop In Array
    for (int i = 0; i < num; i++)
    {
        if (T[i] < 6)
        {
            count = 1;
            printf("%d", count * X[i], X[i]);
        }
        else if (T[i] % 6 == 0)
        {
            count = T[i] / 6;
            printf("%d", X[i] * count);
        }
        else
        {
            count = (T[i] / 6) + 1;
            printf("%d", count * X[i]);
        }
        printf("\n");
    }
    /*Using For Loop We Print Out Our Output*/

    return 0;
}
