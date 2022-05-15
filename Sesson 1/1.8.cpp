#include <iostream>
using namespace std;

int main()
{
    int **mt;
    int m, n;
    int sum = 0;

    cout << "Enter m, n = ";
    cin >> m >> n;

    //cap phat bo nho mang 2 chieu
    mt = new int *[m];
    for (int i = 0; i < m; i++){
        mt[i] = new int[n];
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << "mt[" << i << "][" << j << "] = ";
            cin >> mt[i][j];
            if (mt[i][j] % 2 == 0){
                sum += mt[i][j];
            }
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The sum of all even elements is " << sum;
}
