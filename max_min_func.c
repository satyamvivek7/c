#include <stdio.h>
int maximum_element(int a[], int n)
{
    int maximum = a[0];
    for (int i = 0; i < n; i++) {
        if (maximum < a[i]) { maximum = a[i];
        }
    }
    return maximum;
}
int minimum_element(int a[], int n)
{
    int minimum = a[0];
    for (int i = 0; i < n; i++)
    {
        int minimum = a[0];
        if (minimum > a[i])
        {
            minimum = a[i];
        }
    }
    return minimum;
}
int main()
{
    int n;
    printf("Enter the size of array - ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in array - ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Max element -   %d\n", maximum_element(a, n));
    printf("Min element -   %d\n", minimum_element(a, n));

    return 0;
}