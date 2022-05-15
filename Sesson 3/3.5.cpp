#include <iostream>
using namespace std;

int binom(int n, int k) {
    if (k > n) return 0;
    if (k == 0) return 1;
    return binom(n-1, k) + binom(n-1, k-1);
}

//int gt(int a) {
//    int res = 1;
//    for (int i = 1; i <= a; i++){
//        res *= i;
//    }
//    return res;
//}

int binom2(int n, int k){

    //# Khử đệ quy
    float result = 1.0;
    for (int i = 1; i <= k; i++){
        result *= (float)(n - i + 1) / i;
    }
    return(int) result;
}

int main() {
    int n,k;
    cin >> k >> n;
    cout << binom(n, k) <<endl;
    cout << binom2(n, k) <<endl;
}
