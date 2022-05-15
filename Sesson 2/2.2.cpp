#include <iostream>
using namespace std;

void rotate(int &x, int &y, int &z) {

    int xtemp = x;

    x = y;
    y = z;
    z = xtemp;
}

int main() {
    int x, y, z;

    //# Nhập 3 số nguyên
    cin >> x >> y >> z;

    printf("Before: %d, %d, %d\n", x, y, z);
    rotate(x, y, z);
    printf("After: %d, %d, %d\n", x, y, z);

    return 0;
}
