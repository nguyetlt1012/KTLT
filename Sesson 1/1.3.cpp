#include <iostream>
using namespace std;

int main() {

    int x, y, z;

    int *ptr;

    cin >> x >> y >> z;

    cout << "Here are the values of x, y, and z:\n";

    cout << x << " " << y << " " << z;

    ptr = &x;
    *ptr += 100;

    ptr = &y;
    *ptr += 100;

    ptr = &z;
    *ptr += 100;

    cout << "\nOnce again, here are the values of x, y, and z:\n";

    cout << x << " " << y << " " << z;

    return 0;

}
