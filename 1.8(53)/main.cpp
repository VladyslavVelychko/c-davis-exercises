#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int a, b, c;
    setlocale(LC_CTYPE,"Russian");

    a=2;
    b=3;

    cout<<"�������� � ����� "<<a<<"\n";
    cout<<"�������� b ����� "<<b<<"\n";

    if(a<b)cout<<"a ������ b\n\n";
    if(a==b)cout<<"���� �� �����";

    c=a-b;
    cout<<"c=a-b\n";
    cout<<"���������� � �������� "<<c<<"\n";
    if(c>=0)cout<<"�������� � ��������������\n\n";
    if(c<0)cout<<"�������� � ������������\n\n";

    c=b-a;
    cout<<"c=b-a\n";
    cout<<"���������� � �������� "<<c<<"\n";
    if(c>=0)cout<<"�������� � ��������������\n";
    if(c<0)cout<<"�������� � ������������\n";
    return 0;
}
