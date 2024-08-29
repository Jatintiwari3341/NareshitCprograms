#include <stdio.h>
int main()
{
    char a[100], newStr[100];
    int i, idx = 0;
    printf("Enter a string ");
    scanf("%[^\n]", a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ');
        else
        {
            newStr[idx++] = a[i]; // newStr[0]= A
        }
    }
    newStr[idx] = '\0';
    printf("%s", newStr);

    return 0;
}