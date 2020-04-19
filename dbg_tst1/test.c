#include <stdio.h>

struct {
    int foo, bar;
} baz;

int *example()
{
    return &baz.foo;
}

#if 0
char *foo()
{
    char *start = "hello";
    char *end = start + 5;
    return (start + end) / 2;
}
#endif//

int main()
{
    example();
    return 0;
}

