#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Russian");
    int x;

    for(x=0;x!=123;){
    cout<<"¬ведите число: ";
    cin>>x;
    }
    return 0;
}
