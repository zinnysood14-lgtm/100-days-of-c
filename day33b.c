#include <stdio.h>

int main()
{
    int n, i, element, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    pos = 0;

    while(pos < n && a[pos] < element)
    {
        pos++;
    }

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = element;

    printf("Array after insertion:\n");

    for(i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}