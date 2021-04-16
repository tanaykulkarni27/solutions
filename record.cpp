/*
	Author :- Tanay Kulkarni
	Date   :- 16-4-2021
	Time   :- 17:57:17.042735
	Name   :- record.cpp 
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
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	if(n == 1){
		cout<<arr[0]<<endl;
		return;
	}
	int day = 0,ans = 0;
	for(int i = 0;i<n;i++){
		bool res = i == 0 || arr[i]>day;
		bool res2 = i == n-1 || arr[i]>arr[i+1];
		if(res && res2){
			ans++;
		}	
		day = max(arr[i],day);
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
