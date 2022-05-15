#include<iostream>
using namespace std;

void sortArray(int *p, int n)
{
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (*(p+i) > *(p+j)){
                int tmp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tmp;
            }
        }
    }
}

int main()
{
    int a[100];
    int n;
    int *p;

    cout << "Enter the number of elements: ";
    cin >> n;

    p = a;
    for (int i = 0; i < n; i++){
        cin >> *(p + i);
    }
    cout << "The input array is:" << endl;
    for (int i = 0; i < n; i++){
        cout << *(p + i) << " ";
    }

    sortArray(a, n);

    cout << "\nThe sorted array is:" << endl;
    for (int i = 0; i < n; i++){
        cout << *(p+i) << " ";
    }
}
