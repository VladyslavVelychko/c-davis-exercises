#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int ivar;
    double dvar;
    setlocale(LC_CTYPE,"Russian");

    ivar=100;
    dvar=100.0;

    cout<<"Ќачальное значение целочисельного типа данных - "<<ivar;
    cout<<"\n";
    cout<<"Ќачальное значение типа данных с плавающей точкой - "<<dvar;
    cout<<"\n";

    ivar=ivar/3;
    dvar=dvar/3.0;

    cout<<" онечное значение целочисельного типа данных - "<<ivar;
    cout<<"\n";
    cout<<" онечное значение типа данных с плавающей точкой - "<<dvar;

    return 0;
}
