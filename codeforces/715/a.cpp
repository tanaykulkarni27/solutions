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
bool pp(int a){
	return a%2 !=0;
}
void testcase(){
	int n = 0;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	partition(arr,arr+n,pp);
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	puts("");
}
int main(){
int t;
cin>>t;
for(int i = 1;i<=t;i++){
	//	cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
