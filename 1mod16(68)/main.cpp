#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main()
{
    int x1,x2,x3,x4,x5,result;
    setlocale(LC_CTYPE,"Russian");

    cout<<"������� �1:";
    cin>>x1;
    x1=abs(x1);

    cout<<"������� �2:";
    cin>>x2;
    x2=abs(x2);

    cout<<"������� �3:";
    cin>>x3;
    x3=abs(x3);

    cout<<"������� �4:";
    cin>>x4;
    x4=abs(x4);

    cout<<"������� �5:";
    cin>>x5;
    x5=abs(x5);

    result=(x1+x2+x3+x4+x5)/5;
    cout<<x1<<"\n";
    cout<<x2<<"\n";
    cout<<x3<<"\n";
    cout<<x4<<"\n";
    cout<<x5<<"\n";
    cout<<"������� �������� 5 ����� ����� "<<result;
    return 0;
}
