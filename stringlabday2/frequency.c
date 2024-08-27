#include <stdio.h>
void main()
{
    char a[100];
    int b[100];
    int i, n, c, j;

    printf("Enter string ");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (b[i] != -1)
        {
            for (c = 1, j = i + 1; a[j] != '\0'; j++)
            {
                if (a[i] == a[j])
                {
                    c++;
                    b[j] = -1;
                }
            }
            b[i] = c;
        }
    }
    for (i = 0; a[i] != '\0'; i++)
    {
        if (b[i] != -1)
            printf("The frequency of %c is %d\n", a[i], b[i]);
    }
}