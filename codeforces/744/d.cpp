/**
 * Author :- Tanay Kulkarni
 * Date   :- 28-9-2021
**/
#include<bits/stdc++.h>
using namespace std;
void testcase(){	
	int n;
	cin>>n;
	vector<pair<int,int>>a(n,{0,0});
	for(int i = 0;i < n;i++){
		cin>>a[i].first;
		a[i].second = i + 1;
	}
	sort(a.rbegin(),a.rend());
	priority_queue<pair<int,int>>adj;
	for(auto i : a)
		adj.push(i);
	vector<pair<int,int>>res;
	while(adj.size() > 1){
		pair<int,int>x = adj.top();
		adj.pop();
		pair<int,int>y = adj.top();
		adj.pop();
		if(x.first > 0 and y.first > 0){
			x.first--;
			y.first--;
			res.push_back({x.second,y.second});
		}
		if(x.first)
			adj.push(x);
		if(y.first)
			adj.push(y);
		
	}
	
	cout<<res.size()<<"\n";
	for(auto i : res){
		cout<<i.first<<" "<<i.second;
		puts("");
	}
}
signed main(){
	std::cout << std::fixed;
    std::cout << std::setprecision(9);
    int tt = 1;
    cin>>tt;
    int cc = 1;
    while(tt--){
        ///printf("Case #%ld:2 ",cc);
        testcase();
        cc++;
    }
}
