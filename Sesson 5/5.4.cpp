#include <iostream>
using namespace std;
void input(int *pi)
{
    *pi=1;
    *(pi+1)=-100;
    *(pi+2)=5;
    *(pi+3)=0;
}
void f(int *pi, int &m)
{
    m=*pi;
    for(int i=1; i<4; i++)
        if(m<*(pi+i)) m=*(pi+i);
}
int main()
{   int a[10], x;
    input(a);
    f(a,x);
    cout<<x;
    return 0;
}
