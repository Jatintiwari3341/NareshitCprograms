/* 1       2       3 

   6       5       4

   7       8       9

 12      11     10

 13     14     15 
*/
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter rows and columns ");
    scanf("%d%d", &n, &m);
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 0)
            {
                printf("%3d", --k);
            }
            else
            {
                printf("%3d", k++);
            }
        }
        k += 3;
        printf("\n");
    }
}
