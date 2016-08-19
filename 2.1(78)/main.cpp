#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main()
{
    double x,y,z;
    setlocale(LC_CTYPE,"Russian");

    x=5;
    y=4;

    z=sqrt(x*x+y*y);

    cout<<"Гипотенуза равна "<<z;
    return 0;
}
