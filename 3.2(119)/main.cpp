#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    int num;
    setlocale(LC_CTYPE,"Russian");

    cout<<"������� ����� �� 1 �� 3: ";
    cin>>num;

    switch(num){
    case 1:
    cout<<"���� ����� ��� ���� �� �����.\n";
    break;
    case 2:
    cout<<"���� ������� �� ����� ������ �����.\n";
    break;
    case 3:
    cout<<"��� ���� ������, � � ��������� �����������.\n";
    break;
    default:
    cout<<"�� ������ ������ 1, 2 ��� 3!\n";
    }
    return 0;
}
