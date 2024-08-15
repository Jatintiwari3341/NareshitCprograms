
/*5

                           1

                  4       9

       16     25     36   

49   64     81   100
*/
#include <stdio.h>

int main()
{
    int n;
    int a = 1;
    printf("Enter rows ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= n - i; k++)
        {
            printf("     ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%5d", a * a);
            a++;
        }
        printf("\n");
    }
}