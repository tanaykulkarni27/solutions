/*
	Author :- Tanay Kulkarni
	Date   :- 18-4-2021
	Time   :- 09:30:53.400185
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
void testcase(){
	int n,k;
	cin>>n>>k;
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	dp[0] = 1;
	for(int i = 1;i<=n;i++){
		for(int j = 0;j<=k;j++){
			if(i-j>=0)
				dp[i] += dp[i-j];
		}
	}
	cout<<dp[n];
	puts("");
}
int main(){
int t;
cin>>t;
for(int i = 1;i<=t;i++){
		cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
