//Tran Van Phuc
#include<iostream>
#include<vector>
#include<list>
#include<queue>

using namespace std;

void bfs(vector< list<int> > adj) {
    queue<int> qu;
    vector<bool> visited(adj.size());
    qu.push(1);
    visited[1] = true;
    while(!qu.empty()){
    	int f=qu.front();
    	qu.pop();
    	cout<<f<<endl;
    	for (auto i = adj[f].begin(); i != adj[f].end(); i++) {
            if (!visited[*i]) {
                qu.push(*i);
                visited[*i] = true;
            }
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
	bfs(adj);
}
