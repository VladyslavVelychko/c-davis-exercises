#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    double n, d, result;
    setlocale(LC_CTYPE,"Russian");

    cout<<"������� ��������� - ";
    cin>>n;
    cout<<"\n";

    cout<<"������� ����������� - ";
    cin>>d;
    cout<<"\n";

    result=n/d;

    if(d!=0){cout<<"������� ��������(����������� �� ����� 0).\n"<<n<<"/"<<d<<" ����� "<<result;}//vse okay

    return 0;
}
