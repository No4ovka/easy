#include "easy.h"

double itc_fabs(double num2)
{if (num2>=0)
        return num2;
    else
        return num2*-1;
}
int itc_revnbr(int num3)
{int c=0;
    for (int k=0;k<3;k++)
    {
        c=c*10+num3%10;
        num3=num3/10;
    }
    return c;
}
