#include <stdio.h>
int main()
{
    char a[100], b[100];
    int i, n, j, t;

    printf("Enter string 1 ");
    gets(a);
    printf("Enter string 2 ");
    gets(b);
    for (i = 0; a[i] != '\0'; i++)
    {
        for (j = i + 1; a[j] != '\0'; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            if (b[i] > b[j])
            {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != b[i])
        {
            printf(" Not a Anagram");
            return 0;
        }
    }
    printf("Anagram");
}