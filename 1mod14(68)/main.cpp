#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    double yupiter,zemlya;
    setlocale(LC_CTYPE,"Russian");

    cout<<"¬ведите значение года ёпитера - ";
    cin>>yupiter;

    zemlya=yupiter/12.0;

    cout<<"«начение в годах «емли - "<<zemlya;
    return 0;
}
