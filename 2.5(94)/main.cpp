#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int i,j;
    bool b1,b2;
    setlocale(LC_CTYPE,"Russian");

    i=10;
    j=11;
    if(i<j)cout<<"i<j\n";
    if(i<=j)cout<<"i<=j\n";
    if(!(i==j))cout<<"i �� ����� j\n";
    if(i>j)cout<<"��� ����� ���� �� �������.";
    if(i>=j)cout<<"��� ����� ���� �� �������.";
    if(i==j)cout<<"��� ����� ���� �� �������.";

    b1=true;
    b2=false;
    if(b1&&b2)cout<<"��� ����� ���� �� �������.";
    if(!(b1&&b2))cout<<"�� b1 � b2 ���� ������.\n";
    if(b1||b2)cout<<"���������� ���.\n";
    return 0;
}
