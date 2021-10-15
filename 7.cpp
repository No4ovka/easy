#include "easy.h"
int itc_sqrt(int num1)
{
    int a = 0,b = 0;
    while ((a*a)<=num1)
    {
        b=a*a;
        if (b<num1)
            a+=1;
        else if (b==num1)
            return a;
    }
    return -1;
}
