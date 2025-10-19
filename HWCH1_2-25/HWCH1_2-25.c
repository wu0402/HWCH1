/* initials.c
   列印姓名縮寫 W G Y 的方塊字母（垂直向下）
   編譯: gcc -o initials initials.c
   執行: ./initials
*/

#include <stdio.h>

int main(void) {
    /* 使用字串陣列分別定義 W、G、Y 的每一行 */
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
    /* 列印 W */
    for (i = 0; i < (int)(sizeof(W)/sizeof(W[0])); ++i) {
        puts(W[i]);
    }

    puts(""); /* 空一行分隔 */

    /* 列印 G */
    for (i = 0; i < (int)(sizeof(G)/sizeof(G[0])); ++i) {
        puts(G[i]);
    }

    puts(""); /* 空一行分隔 */

    /* 列印 Y */
    for (i = 0; i < (int)(sizeof(Y)/sizeof(Y[0])); ++i) {
        puts(Y[i]);
    }

    return 0;
}

