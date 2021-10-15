#include "easy.h"
int itc_min(int num1, int num2)
{
    if (num1<num2)
        return num1;
    else
        return num2;
}

double itc_fmax(double num1, double num2)
{
    if (num1<num2)
        return num2;
    else
        return num1;
}
