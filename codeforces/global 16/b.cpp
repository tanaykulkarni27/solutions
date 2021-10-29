/**
 * @author tanay kulkarni
 * @created_on 28-10-2021 11:56:54
**/
#include<bits/stdc++.h>
using namespace std;
#define ff(a,x) find(a.begin(),a.end(),x)
#define int long long
void read(){}
void read(int& a){scanf("%lld",&a);}
void read(double& a){scanf("%lf",&a);}
void read(float& a){scanf("%f",&a);}
void read(string& a){cin>>a;}
template<typename x,typename y>void read(pair<x,y>& a){ read(a.first),read(a.second);}
template<typename x>void read(x& a){for(auto  &i : a) read(i);}
template<typename x,typename... y>void read(x& a,y&... b){read(a);read(b...);}
signed main(){
    int tt;
    scanf("%lld",&tt);
    while(tt--){
        string s;
		read(s);
		int n = s.size();
		int MEX_OF_STRING = -1,z = 0,o = 0;
		for(int i = 0;i < n;i++){
			o |= s[i] == '1';
			z |= s[i] == '0';
		}
		MEX_OF_STRING = z + o;
		int opt = 0;
		for(int i =0;i < n;){
			int j = i;
			bool ok = 0;
			while(j < n and s[j] == '0'){
				j++;
				ok = 1;
			}
			i = max(i + 1,j);
			opt += ok;
		}
		printf("%lld\n",min(opt,MEX_OF_STRING));
    }	
}
