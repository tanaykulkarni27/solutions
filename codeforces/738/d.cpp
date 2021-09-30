/**
 * Author :- Tanay Kulkarni
 * Date   :- 30-9-2021
**/
#include<bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define ff(a,x) find(a.begin(),a.end(),x)
#define int int64_t
void ppl(char i){ cerr<<i<<" , ";}
void ppl(string i){ cerr<<i<<" , ";}
void ppl(float i){ cerr<<i<<" , ";}
void ppl(int i){ cerr<<i<<" , ";}
void ppl(double i){ cerr<<i<<" , ";}
void ppl(){cerr<<"\n";};
template<typename x,typename y> void ppl(pair<x,y>&t){cerr<<"{ ";ppl(t.first);cerr<<" , ";ppl(t.second);cerr<<" } , ";}
template<typename x> void ppl( x &t){ cerr<<"{ ";for(auto i : t){ ppl(i);}cerr<<" } , ";}
template<typename x,typename... y> void ppl(x a,y... b){ppl(a);ppl(b...);}
#define dbg(...) cerr<<"DEBUG : "<<#__VA_ARGS__<<" => "
vector<vector<int>>m,d;
map<int,vector<int>>g1,g2;
int visited[1001];
void init(int n){
	for(int i = 1;i <= n;i++){ g1[i] = vector<int>(0),g2[i] = vector<int>(0);}
	m = vector<vector<int>>(n + 2,vector<int>(n + 2,0));
	d = vector<vector<int>>(n + 2,vector<int>(n + 2,0));
}
void dfs(int current_node,int start_node,bool which){
	visited[current_node] = 1;
	if(which)
		m[start_node][current_node] = 1;
	else
		d[start_node][current_node] = 1;
	vector<int>tmp;
	if(which)
		tmp = g1[current_node];
	else
		tmp = g2[current_node];
	for(int i : tmp){
		if(visited[i] == 0){
			dfs(i,start_node,which);
		}
	}
}
void bfs(int start_node,bool which){
	queue<int>q;
	q.push(start_node);
	visited[start_node] = 1;
	if(which)
		m[start_node][start_node] = 1;
	else
		d[start_node][start_node] = 1;
	vector<int>tmp;
	while(!q.empty()){
		int parent = q.front();
		///cout<<parent<<" ";
		q.pop();
		visited[parent] = 1;
		if(which)
			tmp = g1[parent];
		else
			tmp = g2[parent];
		for(auto i : tmp){
			if(visited[i] == 0){
				if(which){
					m[start_node][i] = 1;
					m[i][start_node] = 1;
				}
				else{
					d[start_node][i] = 1;
					d[i][start_node] = 1;
				}
				q.push(i);
			}
		} 
	}
}
 
void testcase(){
	g1.clear(),g2.clear();
	int n,m1,m2;
	cin>>n>>m1>>m2;
	init(n);		
	for(int i = 0;i < m1;i++){
		int u,v;
		cin>>u>>v;
		g1[u].push_back(v);
		g1[v].push_back(u);
	}
	for(int i = 0;i < m2;i++){
		int u,v;
		cin>>u>>v;
		g2[u].push_back(v);
		g2[v].push_back(u);
	}
	for(int i = 1;i <= n;i++){
		memset(visited,0,sizeof(visited));		
		bfs(i,1);
	}
	for(int i = 1;i <= n;i++){
		memset(visited,0,sizeof(visited));		
		bfs(i,0);
	}
	vector<pair<int,int>>res;
	bool ok = 1;
	for(int i = 1;i <= n && ok;i++){
		for(int j = 1;j <= n && ok;j++){
			if(i == j)
				continue;
			if(m[i][j] == 0 and d[i][j] == 0){
				g1[i].push_back(j);
				g1[j].push_back(i);
				g2[i].push_back(j);
				g2[j].push_back(i);
				res.push_back({i,j});
				for(int k = 1;k <= n;k++){
					memset(visited,0,sizeof(visited));		
					bfs(k,1);
				}
				for(int k = 1;k <= n;k++){
					memset(visited,0,sizeof(visited));		
					bfs(k,0);
				}
			}
		}
	}
	cout<<res.size()<<"\n";
	for(auto i : res)
		cout<<i.first<<" "<<i.second<<"\n";
    puts("");
}
signed main(){
	std::cout << std::fixed;
    std::cout << std::setprecision(9);
	testcase();
}
