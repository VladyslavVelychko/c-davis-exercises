#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    double f;
    double m;
    setlocale(LC_CTYPE,"Russian");

    cout<<"������� �������� � ����� - ";
    cin>>f;

    m=f/3.28;

    cout<<"���� �������� � ������ - "<<m;
    return 0;
}
