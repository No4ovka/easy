#include "easy.h"

void itc_name()
{
    cout<<"Artem";
}

void itc_fio()
{
    itc_name();
    cout << " Kazarin Antonovich";
}
int itc_abs(int num1)
{int aa=0;
    if (num1>=0)
    {aa=num1;
        return aa;//num1;
    }
    else
    {aa=num1*(-1);
        return aa;//num1*-1;
    }
}
