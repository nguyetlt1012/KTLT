#include <bits/stdc++.h>
using namespace std;
int a[1000], n;
int mem[1000];

void init(){
    memset(mem, -1, sizeof(mem));
}
int lis(int i) {
	if(i==0){
		mem[i]=1;
		return 1;
	}
    int max_end_here=1;
    for (int j=1;j<i;j++){
    	if(a[j]<a[i]&&mem[j]+1>max_end_here){
    		max_end_here = mem[j]+1;
		}
	}
	mem[i]=max_end_here;
	return max_end_here;
}
void trace(int i){
    for(int j = 0; j < i; j++){
        if (a[j] < a[i] && mem[i] == 1 + mem[j]){
            trace(j);
            break;
        }
    }
    cout << a[i] << " ";
}

//int main(){
//
//    init();
//    cin >> n;
//    for(int i = 0; i < n; i++) cin >> a[i];
//    int res = 1, pos = 0;
//    for(int i = 0; i < n; i++){
//        if (res < lis(i)){
//            res = lis(i);
//            pos = i;
//        }
//    }
//    cout << res << endl;
//    trace(pos);
//    return 0;
//}
