/**
 * Author :- Tanay Kulkarni
 * Date   :- 15-8-2021
**/
#include<bits/stdc++.h>
using namespace std;
void testcase(int case_number){
    int n;
    cin>>n;
    // vector<int>a(n);
    int res;
    cin>>res;
    for(int i = 1;i<n;i++){
        // cin>>a[i];
        int x;
        cin>>x;
        res &= x;
    }
    cout<<res;
    puts("");
}
signed main(){
    int tt = 1;
    cin>>tt;
    int cc = 1;
    while(tt--){
        testcase(cc);
        cc++;
	}
}
