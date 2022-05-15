#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print_vector(const vector<int> &a) {
    for (int v : a) cout << v << ' ';
    cout << endl;
}

void delete_even(vector<int> &a) {
    for (unsigned int i = 0; i < a.size();) {
        if (a[i] % 2 == 0) {
            a.erase(a.begin() + i);
        }
        else {
            i++;
        }
    }
}

void sort_decrease(vector<int> &a) {
    for (unsigned int i = 0; i < a.size()-1; i++)
        for (unsigned int j = i + 1; j < a.size(); j++){
            if (a[i] < a[j]){
                swap(a[i], a[j]);
            }
        }
}

vector<int> merge_vectors(const vector<int> &a, const vector<int> &b) {
    vector<int> c;
    for (unsigned int i = 0; i < a.size(); i++) {
        c.push_back(a[i]);
     }

     for (unsigned int i = 0; i < b.size(); i++) {
        c.push_back(b[i]);
     }
     sort_decrease(c);
     return c;
}

int main() {
    int m, n, u;
    std::vector<int> a, b;

    cin >> m >> n;
    for(int i = 0; i < m; i++){
        cin >> u;
        a.push_back(u);
    }
    for(int i = 0; i < n; i++){
        cin >> u;
        b.push_back(u);
    }

    delete_even(a);
    cout << "Odd elements of a: ";
    print_vector(a);

    delete_even(b);
    cout << "Odd elements of b: ";
    print_vector(b);

    sort_decrease(a);
    cout << "Decreasingly sorted a: ";
    print_vector(a);

    sort_decrease(b);
    cout << "Decreasingly sorted b: ";
    print_vector(b);

    vector<int> c = merge_vectors(a, b);
    cout << "Decreasingly sorted c: ";
    print_vector(c);

    return 0;
}
