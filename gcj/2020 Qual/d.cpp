/*
	Author :- Tanay Kulkarni
	Date   :- 18-5-2021
	Time   :- 20:08:50.018870
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
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
int t,n;
int q = 0;
int query(int i){
	int x;
	cout<<i<<endl;
	fflush(stdout);
	cin>>x;
	q++;
	return x;
}
void testcase(){
	vector<int>arr(n+1,0);
	vector<int>same(n+1,1);
	int upd[2] = {0,0};
	int l1 = -1;
	int l2 = -1;
	q = 0;
	for(int i = 0;i<n/2;i++){
		int j;
		if(q%10 == 0 && l1 != l2){
			if(l1 == -1 || l2 == -1){
				int last_q = max(l1,l2);
				 upd[1] = query(last_q+1) ^ arr[last_q];
				 upd[0] = upd[1];
				query(1);
				for(int ll = 0;ll<n;ll++) arr[ll] ^= upd[1];
			}else{
				upd[0] = query(l1+1) ^ arr[l1];
				upd[1] = query(l2+1) ^ arr[l2];
				for(int ll = 0;ll<n;ll++) arr[ll] ^= upd[same[ll]];
			}
			
		}
		j = n-1-i;
		arr[i] = query(i+1);
		arr[j] = query(j+1);
		if(arr[i] == arr[j]){
			l1 = i;
			same[i] = 0;
			same[j] = 0;
		}
		else
			l2 = i;
	}
	string res = "";
	for(int i = 0;i<n;i++){
		res+=arr[i]+'0';
	}
	//reverse(res.begin(),res.end());
	cout<<res<<endl;
	fflush(stdout);
	string c;
	cin>>c;
	//debug(q);	
	assert(c == "Y");
	
	
}
int main(){
cin>>t>>n;
for(int i = 1;i<=t;i++){
	//cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
