#include <stdio.h>

int main(void)
{
    printf("number\tsquare\tcube\n");
    int i, square, cube;
    for (i = 0; i <= 10; ++i) {
        square = i * i;
        cube = i * i * i;
        printf("%d\t%d\t%d\n", i, square, cube);
    }
    return 0;
}
