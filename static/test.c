#include "test.h"
#include <stdio.h>

static int static_1(void)
{
    printf("HI\n");
}

void test(void)
{
    static_1();
}
