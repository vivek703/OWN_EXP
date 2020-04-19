#include <stdio.h>
#include <iostream>

using namespace std; 

class xyz
{
    public:
    xyz()
    {
        printf("this=%p %s:%d\n", this, __func__, __LINE__);
    }
    ~xyz()
    {
        printf("%s:%d\n", __func__, __LINE__);
    }

    void test()
    {
        printf("%s:%d\n", __func__, __LINE__);
    }
};

int main(int argc, char *argv[])
{
    xyz x;
    x.test();
    xyz *p = new xyz();
    p->test();
    cout << "going to call distructor\n";
    delete(p);
    return 0;
}
