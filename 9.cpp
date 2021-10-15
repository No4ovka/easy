#include "easy.h"
int itc_str(int num1, int num2, int num3)
{
    if (((num1+num2)<=num3) || ((num3+num2)<=num1) || ((num1+num3)<=num2))
        return -1;
    else
    {
        double p,a,kor=0;
        p=(num1+num2+num3)/2.;
        a=p*(p-num1)*(p-num2)*(p-num3);
        //a=itc_sqrt(a,1);float a = 1;
        kor=itc_sqrt(a);
        return kor;
        //cout<<endl<<"-1";
    }
}
