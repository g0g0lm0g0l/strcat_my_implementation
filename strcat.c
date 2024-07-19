/*
 *
 * Simple reimplementation of strcat function :)
 * Just exercice from the book (2d editoin)
 * It is very likely to have errors, it is done on purpose for learning purposes
 *
 */

#include <stdio.h>

char *strcat(char *dst, char *src)
{
    int i;
    for (i = 0; dst[i] != '\0'; i++)
	    ;
    for (; *src+1 != '\0'; i++) {
        dst[i] = *(src++);
    }
    return dst;
}

int main(void)
{
    char dst[100];
    char *p_test = "hola mundo";

    strcat(dst, p_test);
    printf("%s\n", dst);

    return 0;
}
