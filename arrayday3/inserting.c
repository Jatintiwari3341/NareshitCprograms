#include <stdio.h>
int main()
{
    int a[100], n, i, j, pos, ele;
    printf("Enter the array size 1-100");
    scanf("%d", &n);
    printf("enter %d integers", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter new elements and position");
    scanf("%d", &ele);

    for (i = n; i >= 0; i--)
    {
        if (a[i - 1] > ele)
            a[i] = a[i - 1];
        else
            break;
    }
    a[i] = ele;
    printf("\n%d index %d\n", i, a[i]);
    printf("elements are");
    for (i = 0; i <= n; i++)
        printf("%d ", a[i]);
}