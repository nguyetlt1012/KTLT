#include<iostream>
#include<math.h>
using namespace std;

float get_hypotenuse(float x, float y) {
    return sqrt(x*x + y*y);
}

int main(){
    float x, y;

    cin >> x >> y;

    float z = get_hypotenuse(x, y);
    printf("z = %.2f\n", z);

    return 0;
}
