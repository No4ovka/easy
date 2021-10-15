#include "easy.h"
double itc_scir(int num1)
{
    double a=3.14*(num1*num1);
    if (num1<=0)
        return -1;
    return 3.14*(num1*num1);
}
double itc_pow(int n, int i)
{double m=1,p=itc_abs(i);
int a=n;
    if (i!=0){
        for (int k=1; k<p; k++)
            n= n*a;
    }else
        if(i==0)
            return 1;
        //else {a=1/(n^(-i));}
    if (i<0)
        return m/n;
    else
        return n;
}

