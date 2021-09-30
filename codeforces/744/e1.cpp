/**
 * Author :- Tanay Kulkarni
 * Date   :- 28-9-2021
**/
#include<bits/stdc++.h>
using namespace std;
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
void testcase(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i =0;i < n;i++)
		cin>>a[i];
	deque<int>x;
	x.push_back(a[0]);
	for(int i = 1;i < n;i++){
		if(a[i] < x.front()){
			x.push_front(a[i]);
		}else
			x.push_back(a[i]);
	}
	for(int i : x)
		cout<<i<<" ";
	puts("");
}
signed main(){
	std::cout << std::fixed;
    std::cout << std::setprecision(9);
    int tt;
    cin>>tt;
    int cc = 1;
    while(tt--){
        ///printf("Case #%ld:2 ",cc);
        testcase();
        cc++;
    }
}
