/*
	Author :- Tanay Kulkarni
	Date   :- 25-4-2021
	Time   :- 16:08:31.093105
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
void testcase(){
	int n;
	cin>>n;
	string arr[n];
 
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int x1 = -1,y1 = -1,x2 = -1,y2 = -1;
	x1 = -1;
	x2 = -1;
	y2 = -1;
	y1 = -1;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
				if(arr[i][j] == '*' && x1 == -1){
					x1 = j;
					y1 = i;
				}
				else if(arr[i][j] == '*'){
					x2 = j;
					y2 = i;
				}
			}
	}
	//debug(x1,y1);
	//debug(x2,y2);
	if(x1 == x2){
		//int gap = abs(y1-y2);
		if(x1+1<n){
			arr[y1][x1+1] = '*';
			arr[y2][x2+1] = '*';
		}
		else{
			arr[y1][x1-1] = '*';
			arr[y2][x2-1] = '*';
		}
	}
	if(y1 == y2){
		//int gap = abs(x1-x2);
		if(y1+1 < n){
			arr[y1+1][x1] = '*';
			arr[y2+1][x2] = '*';
		}
		else{
			arr[y1-1][x1] = '*';
			arr[y2-1][x2] = '*';
		}
	}
	else{
		arr[y2][x1] = '*';
		arr[y1][x2] = '*';
	}
	for(int i = 0;i<n;i++){
		cout<<arr[i];
		puts("");
	}
}
int main(){
int t;
cin>>t;
for(int i = 1;i<=t;i++){
		//cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
