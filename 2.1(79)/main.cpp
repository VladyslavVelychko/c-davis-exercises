#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    bool b;
    setlocale(LC_CTYPE,"Russian");

    b=true;
    cout<<"�������� b ����� "<<b<<".\n";
    if(b)cout<<"��� ���������."<<"\n";

    b=false;
    cout<<"�������� b ����� "<<b<<".\n";
    if(b)cout<<"��� �����������."<<"\n";

    cout<<"10-9 ����� "<<(10>9)<<".\n";
    return 0;
}
