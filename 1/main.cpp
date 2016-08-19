#include <stdio.h>
#include <conio.h>

using namespace std;
int roman(int,int,char);
int main()
{
    int a;
    printf("Enter your number\n");
    scanf("%d",&a);
    a=roman(a,1000,'M');
    a=roman(a,500,'D');
    a=roman(a,100,'C');
    a=roman(a,50,'L');
    a=roman(a,10,'X');
    a=roman(a,5,'V');
    a=roman(a,1,'I');
    putchar(a);
    return 0;
}

int roman(int i,int j,char k)
{while(i>=j){putchar(k);i=i-j;}
return(i);
}
