/*
Reverse of a given String
Write a C program to print the reverse of a given String .
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

    printf("Reverse ");
    for (i--; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}