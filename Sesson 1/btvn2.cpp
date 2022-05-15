//Viết chương trình nhập vào 2 ma trận vuông cùng kích thước n*n, trong đó n nhập từ bàn phím.
//Sau đó tính tổng và tích của hai ma trận đó và đưa kết quả ra màn hình.
//Yêu cầu sử dụng cấp phát động để cấp phát bộ nhớ cho các ma trận.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int **mt1, **mt2;
    int **sum, **tich;

    cin >> n;
    mt1 = new int *[n];
    for (int i = 0; i < n; i++){
        mt1[i] = new int [n];
    }

    mt2 = new int *[n];
    for (int i = 0; i < n; i++){
        mt2[i] = new int [n];
    }

    sum = new int *[n];
    for (int i = 0; i < n; i++){
        sum[i] = new int [n];
    }

    tich = new int *[n];
    for (int i = 0; i < n; i++){
        tich[i] = new int [n];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mt1[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mt2[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            sum[i][j] = mt1[i][j] + mt2[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            tich[i][j] = 0;
            for (int k = 0; k < n; k++){
                tich[i][j] += mt1[i][k] * mt2[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << tich[i][j] << " ";
        }
        cout << endl;
    }
}
