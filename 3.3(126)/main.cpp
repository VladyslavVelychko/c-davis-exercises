#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <cmath>

using namespace std;

int main()

{
    setlocale(LC_CTYPE,"Rusiian");

    int num;
    double sq_root;

    for(num=1;num<101;num++){
        sq_root=sqrt((double)num);
        cout << num << " " <<sq_root<<"\n";
        }
    return 0;
}
