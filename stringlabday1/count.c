/*
Count
Write a C program to count the Count the vowel, Consonant, Digit and Special Character in a given String .

*/

#include <stdio.h>
int main()
{
    char name[30];
    int i, v = 0, cs = 0, d = 0, spl = 0;
    printf("Enter a sentence ");
    gets(name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z'))
        {
            if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
            {
                v++;
            }
            else
                cs++;
        }
        else if (name[i] >= '0' && name[i] <= '9')
            d++;

        else if (name[i] != ' ')
            spl++;
    }
    printf(" vowel=%d, consonant=%d, digit=%d, special character=%d", v, cs, d, spl);

    return 0;
}