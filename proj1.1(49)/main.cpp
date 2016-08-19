#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    double f;
    double m;
    setlocale(LC_CTYPE,"Russian");

    cout<<"Введите значение в футах - ";
    cin>>f;

    m=f/3.28;

    cout<<"Ваше значение в метрах - "<<m;
    return 0;
}
