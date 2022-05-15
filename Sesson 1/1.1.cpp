#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    int *p;

    cout << "Enter three integers:";
    cin >> x >> y >> z;

    cout << "\nThe three integers are:" << endl;

    p = &x;
    cout << "x = " << *p;

    p = &y;
    cout << "\ny = " << *p;

    p = &z;
    cout << "\nz = " << *p;
}
