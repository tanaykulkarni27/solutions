/*
	* Author :- Tanay Kulkarni
	* Date   :- 7-6-2021
	* Time   :- 21:46:48.890678
	* Name   :- solve.cpp
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
    vector<int>arr(n);
    int cnt = 0;
    int MN = INT_MAX;
    vector<int>chosen(0);
    for(auto& i : arr){
        cin>>i;
        if(i <= 0){
            chosen.push_back(i);
            cnt++;
        }
    }
    sort(chosen.begin(), chosen.end());
    int mn = INT_MAX;
    for(int i = 0;i<n;i++)
        if(arr[i] > 0)
            mn = min(arr[i],mn);
    bool ok = mn<INT_MAX;
    n = chosen.size();
    for(int i = 1;i<n;i++){
        ok &= abs(chosen[i]-chosen[i-1])>=mn;
    }
    if(ok)
        cnt++;
    cout<<cnt;
    puts("");
}
int main(){
int t;
cin>>t;
for(int i = 1;i<=t;i++){
		// cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
