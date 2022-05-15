//Tran Van Phuc
#include<iostream>
#include<vector>
#include<list>
#include<stack>

using namespace std;

void dfs(std::vector< std::list<int> > adj) {
    stack<int> stk;
    vector<bool> visited(adj.size());
    stk.push(1);
	while (!stk.empty()) {
	    int u=stk.top();
	    if (!visited[u]){
	        visited[u] = true;
	        cout<< u << std::endl;
        }
	    if (!adj[u].empty()){
	        int v=adj[u].front();
	        adj[u].pop_front();
	        if(!visited[v]){
	            stk.push(v);
        }
	    }else { stk.pop();
	    }
	}
}
int main(){
	vector<list<int> >adj;
	adj.push_back({1,2});
	adj.push_back({2,1});
	adj.push_back({2,3});
	adj.push_back({3,2});
	adj.push_back({2,4});
	adj.push_back({4,2});
	adj.push_back({3,4});
	adj.push_back({4,3});
	dfs(adj);
}
