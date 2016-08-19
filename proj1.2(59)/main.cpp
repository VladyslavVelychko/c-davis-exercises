#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    double f,m,result;
    int counter;
    setlocale(LC_CTYPE,"Russian");

    counter=0;
    for(f=1.0;f<=100.0;f++){
    m=f/3.28;
    cout<<f<<" футов равно "<<m<<" метров.\n";
    counter++;
    if(counter==10){cout<<"\n";
    counter=0;}
    }

    return 0;
}
