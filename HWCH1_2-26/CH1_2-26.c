#include <stdio.h>

int main(void)
{
    int a, b;
    printf("�п�J��Ӿ�ơ]�H�ťթδ�����j�^�G");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("�L�k�P�_�G�ĤG�ӼƬ� 0�]����H 0 �����ơ^\n");
        return 1;
    }

    if (a % b == 0)
        printf("%d �O %d ������\n", a, b);
    else
        printf("%d ���O %d ������\n", a, b);

    return 0;
}
