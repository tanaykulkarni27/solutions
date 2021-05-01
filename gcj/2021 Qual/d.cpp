/*
	Author :- Tanay Kulkarni
	Date   :- 1-5-21
	Time   :- 17:47:03.225506
	Name   :- solve.cpp
*/
#include<bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#define read(a) cin>>a;
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else

#define debug(x...)
#endif
const int MOD = 1000000007;
const int pb = 5000;
const float pbl = 0.7957403697;
vector<float> pbs(100);

int p = 0;
void testcase(){
	
	int cheater = -1;
	int stds[100];
	int mn = 0,mx=0;
	for(int i = 1;i<=10000;i++){
		mn+=0.1*i;
		mx+=0.9*i;
	}

	for(int i = 0;i<100;i++){
		int solved = 0;
		char ac[10000];
		read(ac);
		for(int k = 0;k<10000;k++){
			if(ac[k]-'0' == 1)
				solved++;
		}
		stds[i] = solved;
	}
	for(int i = 0;i<100;i++){
		bool res1 = (stds[i]>stds[cheater] || cheater == -1);
		bool res2 = stds[i] < mn || stds[i] > mx;
		if( res1 && res2){
			cheater = i;
		}
		
	}
	cout<<cheater+1<<"\n";
	// cout<<cheater<<endl;
}
int main(){
int t;
cin>>t>>p;
for(int i = 1;i<=t;i++){
		cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
