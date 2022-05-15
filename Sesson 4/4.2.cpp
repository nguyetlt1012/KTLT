#include <iostream>
#include <cmath>
#include <iomanip>
#include <utility>

using namespace std;
using Point = pair<double, double>;

double area(Point a, Point b, Point c) {
    double d1,d2,d3;
    d1= sqrt(pow((a.first-b.first),2)+pow((a.second-b.second),2));
    d2= sqrt(pow((c.first-b.first),2)+pow((c.second-b.second),2));
    d3= sqrt(pow((a.first-c.first),2)+pow((a.second-c.second),2));
    double p=(d1+d2+d3)/2;
    return sqrt(p*(p-d1)*(p-d2)*(p-d3));
}

int main() {
 cout << setprecision(2) << fixed;
 cout << area({1, 2}, {2.5, 10}, {15, -5.25}) << endl;
 return 0;
}
