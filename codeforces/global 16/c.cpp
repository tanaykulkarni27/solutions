/**
 * @author tanay kulkarni
 * @created_on 28-10-2021 11:56:54
**/
#include<bits/stdc++.h>
using namespace std;
#define vtr vector
#define ff(a,x) find(a.begin(),a.end(),x)
#define int long long
#define rep(i,s,e) for(int i = s;i < e;i++)
#define repc(i,s,e,inc) for(int i = s;i < e;i+=inc)
void read(){}
void read(int& a){scanf("%lld",&a);}
void read(double& a){scanf("%lf",&a);}
void read(float& a){scanf("%f",&a);}
void read(string& a){cin>>a;}
template<typename x,typename y>void read(pair<x,y>& a){ read(a.first),read(a.second);}
template<typename x>void read(x& a){for(auto  &i : a) read(i);}
template<typename x,typename... y>void read(x& a,y&... b){read(a);read(b...);}
const int INF = (int)(1e9);
void testcase(){
	int n;
	vector<string>a(2);
	read(n,a[0],a[1]);	
	vtr<vtr<int>>suffix_zero(2,vtr<int>(n,INF));
	for(int i = n - 1;i >= 0;i--){
		if(i == n - 1 and a[0][i] == a[1][i] and a[0][i] == '0'){
			suffix_zero[0][i] = i,suffix_zero[1][i] = i;
		}else if(a[0][i] == a[1][i]){
			suffix_zero[0][i] = suffix_zero[0][i + 1],suffix_zero[1][i] = suffix_zero[0][i + 1];
		}
	}
	int res = 0;
	for(int i = 0;i < n;i++){
		if(a[0][i] == a[1][i] and (i + 1 < n and a[0][i+1] == a[1][i+1]) and  (i + 1 < n and a[0][i] != a[0][i + 1])){
			res += 2;
			i++;
		}else if(a[0][i] == '0' and a[1][i] == '0')
			res++;	
		else if(a[0][i] != a[1][i])
			res += 2;
	}
	printf("%lld\n",res);
}
signed main(){
    int tt;
    scanf("%lld",&tt);
    while(tt--){
		testcase();
    }	
}
/*
vtr<vtr<int>>suffix_one(2,vtr<int>(2,INF));
	{
		for(int i = n - 1;i >= 0;i--){
			if(i == n - 1 and a[0][i] == a[1][i]){
				if(a[0][i] == '1'){ suffix_one[0][i] = i,suffix_one[1][i] = i; } 
				else{ }
				
			}else if(a[0][i] == a[1][i]){
			}
		}
	}
*/
