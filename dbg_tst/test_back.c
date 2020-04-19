#include <stdio.h>

unsigned int toggleBitsFromLToR(unsigned int n) 
{
    unsigned int count=0;
    while(n)
    {
        printf("number = %u\n", n);
        count += (n&1);
        n >>= 1;
    }
    return count;
} 
  
// Driver program to test above 
int main() 
{
    unsigned int res=0;
    res = toggleBitsFromLToR(99);
    printf("result=%d\n", res);
    return 0; 
} 
