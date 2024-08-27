/*
Count the number of alphabet
Write a C program to count the number of alphabet present in a given String
*/

#include <stdio.h>
int main()
{
    char s[100];
    int i;
    printf("Enter the strings ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
        ;

    printf("Length=%d\n", i);

    return 0;
}