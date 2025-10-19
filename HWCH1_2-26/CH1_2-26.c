#include <stdio.h>

int main(void)
{
    int a, b;
    printf("叫块ㄢ俱计フ┪传︽だ筳");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("礚猭耞材计 0ぃ 0 埃计\n");
        return 1;
    }

    if (a % b == 0)
        printf("%d 琌 %d 计\n", a, b);
    else
        printf("%d ぃ琌 %d 计\n", a, b);

    return 0;
}
