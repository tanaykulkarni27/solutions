/*
	Author :- Tanay Kulkarni
	Date   :- 17-4-2021
	Time   :- 13:44:32.711017
	Name   :- book_reading.cpp 
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
int sz = 1e5+5;


int f(bool chk[],int mult,int t,int n){
	if(mult == 1)
		return n-t;
	else{
		long long cnt = 0;
		int x = 1;
		while(mult*x<=n){
			if(chk[mult*x]){
				cnt++;
			}
			x+=1;
		}
		return cnt;
	}
}
void testcase(){
	int n,t,r;
	cin>>n>>t>>r;
	bool chk[n+5];
	int arr[r];
	memset(chk,true,sizeof(chk));
	for(int i = 0;i<t;i++){
		int x;
		cin>>x;
		chk[x] = false;
	}
	for(int i = 0;i<r;i++){
		cin>>arr[i];
	}
	long long ans = 0;
	for(int i = 0;i<r;i++){
		ans+= f(chk,arr[i],t,n);
	}
	cout<<ans;
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
