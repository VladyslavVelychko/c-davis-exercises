#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main ()

{
    setlocale(LC_CTYPE,"Russian");
    char choice;

    cout << "������� �� �����������:\n";
    cout << "1. if\n";
    cout << "2. switch\n";
    cout << "�������� ������� �������:\n";
    cin >> choice;
    cout << "\n";
    switch(choice){
        case '1':
            cout << "��������� ���������� if:\n\n";
            cout << "if(�������) ����������;\n";
            cout << "else ����������;\n";
            break;
        case '2':
            cout << "��������� ���������� switch:\n\n";
            cout << "switch(���������) {\n";
            cout << " case ���������:\n";
            cout << " ������������������ ����������\n";
            cout << " break;\n";
            cout << "//...\n";
            cout <<"}\n";
            break;
        default:
            cout << "������ �������� ���.\n";
            }
    return 0;
}
