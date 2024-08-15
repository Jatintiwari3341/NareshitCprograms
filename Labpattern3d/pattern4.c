 /*       1

              2       4

      3      6       9

4    8    12     16
*/
#include <stdio.h>

int main()
{
    int n;
    
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
            printf("%5d", i*j);
            
        }
        printf("\n");
    }
}
