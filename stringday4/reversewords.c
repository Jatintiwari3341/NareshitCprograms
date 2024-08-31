#include <stdio.h>
int main()
{
    char s[100];
    int i, j, temp = 0;
    printf("Enter the strings ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' || s[i + 1] == '\0')
        {
            for (j = i; j >= temp; j--)
                printf("%c", s[j]);
            temp = i;
        }
    }

    return 0;
}