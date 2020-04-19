/* add.c
 ** a simple C program
 **/

#include <stdio.h>
#include "test.h"

static int static_1(void)
{
    printf("%s:%d:%s\n", __func__, __LINE__, __FILE__);
}

int main(int argc, char *argv[])
{
    test();
    static_1();
    return 0;
}
