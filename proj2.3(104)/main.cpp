/*������� ��������*/

#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main()
{
    double Principal;//���� �������� ����!!! �� ����� ���� �������� ����� �����
    double IntRay;//���������� ������
    double PayPerYear;//���������� ������ � ���
    double NumYears;//���� ����� � �����
    double Payment;//������ ����������� �������
    double numer,denom;
    double b,e;// for Pow()
    setlocale(LC_CTYPE,"Russian");

    cout<<"������� �������� ����� �����: ";
    cin>>Principal;

    cout<<"������� ���������� ������(<1): ";
    cin>>IntRay;

    cout<<"������� ���������� ������ � ���: ";
    cin>>PayPerYear;

    cout<<"������� ���� ����� (� �����): ";
    cin>>NumYears;

    numer=IntRay*Principal/PayPerYear;

    e=-(PayPerYear*NumYears);
    b=(IntRay/PayPerYear)+1;
    denom=1-pow(b,e);
    Payment=numer/denom;
    cout<<"������ ������� �� ����� ���������� "<<Payment;
    return 0;
}
