#include <iostream>
#include<windows.h>
using namespace std;

int lucas(int n )
{
    if (n == 1) return 1;
    if (n == 0) return 2;
    return lucas(n - 1) + lucas(n - 2);
}

int main()
{
    cout << lucas(2) << endl;
    system("pause");
}
