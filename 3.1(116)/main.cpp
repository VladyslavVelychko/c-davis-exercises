#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int x;
    setlocale(LC_CTYPE,"Russian");
    for(x=0;x<6;x++)
    {if(x==1)cout<<"x ����� �������.\n";
    else if(x==2)cout<<"x ����� ����.\n";
    else if(x==3)cout<<"� ����� ����.\n";
    else if(x==4)cout<<"x ����� �������.\n";
    else cout<<"x �� ������ � �������� �� 1 �� 4.\n";
    }
    return 0;
}
