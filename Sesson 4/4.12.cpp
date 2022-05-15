// Tran Van Phuc 20194354

#include<bits/stdc++.h>
using namespace std;

long long n;
vector<long long> vt;
vector<long long> L;
vector<long long> R;

void inputData(){
    cin >> n;
    vt.push_back(-1);
    for(long long i=0; i<n; i++){
        long long temp;
        cin >> temp;
        vt.push_back(temp);
    }
    vt.push_back(-1);
}

void solve(){
    while(true){
        inputData();
        if(n==0) return;

        // Xu ly o day
        stack<long long> st; // 1 stack de thuc hien thuat toan ghi ra cac gia tri L, R
        L.resize(n+2);
        R.resize(n+2);
        for(long long i=1; i<=n+1; i++){
            while(!st.empty() && vt[i] < vt[st.top()]){
                L[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        for(long long i=n; i>=0; i--){
            while(!st.empty() && vt[i] < vt[st.top()]){
                R[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        long long maxh = 0;
        for(long long i=1; i<=n; i++){
            long long h = (L[i] - R[i] -1)*vt[i];
            if(h > maxh) maxh = h;
        }

        cout << maxh << endl; break;

        // Xoa mang truoc khi bat dau vong lap moi ( mang vt, mang L, mang R)
        vt.erase(vt.begin(),vt.end());
        L.erase(L.begin(),L.end());
        R.erase(R.begin(),R.end());
    }
}

int main(){
    solve();
    return 0;
}
