#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

typedef enum{
    NONE=0,
    CHECK_PS,
    CHECK_NAME,
    CHECK_MEM,
    CHECK_XYZ
} state;

typedef struct _myObj
{
    state my_state;
    pthread_cond_t var;
    pthread_mutex_t mtx;
} helper;

void TASK1(void)
{
}

void TASK2(void)
{
}

void TASK3(void)
{

}

void TASK4(void)
{
}

void TASK5(void)
{
}

void TASK6(void)
{
}

void TASK7(void)
{
}

void TASK8(void)
{
}

void TASK9(void)
{
}

void TASK10(void)
{
}

void TASK11(void)
{
}

void TASK12(void)
{
}

void TASK13(void)
{
}

void TASK14(void)
{
}

void TASK15(void)
{
}

int main(int argc, char * argv[])
{
    return 0;
}
