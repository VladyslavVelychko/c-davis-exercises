#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main ()

{
    setlocale(LC_CTYPE,"Russian");
    char choice;

    cout << "Справка по инструкциям:\n";
    cout << "1. if\n";
    cout << "2. switch\n";
    cout << "Выберите вариант справки:\n";
    cin >> choice;
    cout << "\n";
    switch(choice){
        case '1':
            cout << "Синтаксис инструкции if:\n\n";
            cout << "if(условие) инструкция;\n";
            cout << "else инструкция;\n";
            break;
        case '2':
            cout << "Синтаксис инструкции switch:\n\n";
            cout << "switch(выражение) {\n";
            cout << " case константа:\n";
            cout << " последовательность инструкций\n";
            cout << " break;\n";
            cout << "//...\n";
            cout <<"}\n";
            break;
        default:
            cout << "Такого варианта нет.\n";
            }
    return 0;
}
