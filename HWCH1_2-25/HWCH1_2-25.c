/* initials.c
   �C�L�m�W�Y�g W G Y ������r���]�����V�U�^
   �sĶ: gcc -o initials initials.c
   ����: ./initials
*/

#include <stdio.h>

int main(void) {
    /* �ϥΦr��}�C���O�w�q W�BG�BY ���C�@�� */
    const char *W[] = {
        "W       W",
        "W       W",
        "W   W   W",
        "W  W W  W",
        "W W   W W",
        "WW     WW",
        "W       W"
    };

    const char *G[] = {
        " GGGGGGG ",
        "G       G",
        "G        ",
        "G   GGGG ",
        "G       G",
        "G       G",
        " GGGGGG  "
    };

    const char *Y[] = {
        "Y       Y",
        " Y     Y ",
        "  Y   Y  ",
        "   Y Y   ",
        "    Y    ",
        "    Y    ",
        "    Y    "
    };

    int i;
    /* �C�L W */
    for (i = 0; i < (int)(sizeof(W)/sizeof(W[0])); ++i) {
        puts(W[i]);
    }

    puts(""); /* �Ť@����j */

    /* �C�L G */
    for (i = 0; i < (int)(sizeof(G)/sizeof(G[0])); ++i) {
        puts(G[i]);
    }

    puts(""); /* �Ť@����j */

    /* �C�L Y */
    for (i = 0; i < (int)(sizeof(Y)/sizeof(Y[0])); ++i) {
        puts(Y[i]);
    }

    return 0;
}

