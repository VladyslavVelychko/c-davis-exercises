#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int a,b;
    setlocale(LC_CTYPE,"Russian");

    cout<<"������� ���������: ";
    cin>>a;
    cout<<"������� �����������: ";
    cin>>b;

    if(b)cout<<"���������: "<<a/b<<"\n";
    else cout<<"�� ���� ������ ������!";
    return 0;
}
