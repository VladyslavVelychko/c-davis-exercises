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

    cout<<"��������� �������� �������������� ���� ������ - "<<ivar;
    cout<<"\n";
    cout<<"��������� �������� ���� ������ � ��������� ������ - "<<dvar;
    cout<<"\n";

    ivar=ivar/3;
    dvar=dvar/3.0;

    cout<<"�������� �������� �������������� ���� ������ - "<<ivar;
    cout<<"\n";
    cout<<"�������� �������� ���� ������ � ��������� ������ - "<<dvar;

    return 0;
}
