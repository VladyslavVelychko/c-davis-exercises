#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int i;
    setlocale(LC_CTYPE,"Russian");

    for(i=0;i<6;i++){
    switch(i){
    case 0: cout<<"меньше 1\n";
    case 1: cout<<"меньше 2\n";
    case 2: cout<<"меньше 3\n";
    case 3: cout<<"меньше 4\n";
    case 4: cout<<"меньше 5\n";
    case 5: cout<<"меньше 6\n";}
    cout<<"\n";
    }
    return 0;
}
