#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest = a;
    int smallest = a;

    if (b > largest) largest = b;
    if (c > largest) largest = c;

    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
    return 0;
}
