#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    double yupiter,zemlya;
    setlocale(LC_CTYPE,"Russian");

    cout<<"������� �������� ���� ������� - ";
    cin>>yupiter;

    zemlya=yupiter/12.0;

    cout<<"�������� � ����� ����� - "<<zemlya;
    return 0;
}
