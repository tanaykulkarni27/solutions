/*
	Author :- Tanay Kulkarni
	Date   :- 17-4-2021
	Time   :- 17:48:10.851040
	Name   :- solve.cpp 
*/
#include<bits/stdc++.h>
using namespace std;
void debug(string j){
cout<<"| Value : "<<j<<" |\n";
}
void debug(int j){
cout<<"| Value : "<<j<<" |\n";
}
void debug(int i,string j){
cout<<"Iteration "<<i<<": "<<j<<"\n";
}
void debug(int i,int j){
cout<<"Iteration "<<i<<": "<<j<<"\n";
}
// coin change ways
void testcase(){
	int n,amount;
	cin>>n>>amount;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int dp[amount+1];
	memset(dp,0,sizeof(dp));
	dp[0] = 1;
	for(int i = 1;i<=amount;i++){
		for(auto x : arr){
			if(i-x>=0)
				dp[i] += dp[i-x];
		}
	}
	cout<<dp[amount];
	puts("");
}
int main(){
int t = 1;
//cin>>t;
for(int i = 1;i<=t;i++){
		cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
