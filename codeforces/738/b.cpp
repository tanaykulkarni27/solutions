/**
 * Author :- Tanay Kulkarni
 * Date   :- 15-8-2021
**/
#include<bits/stdc++.h>
using namespace std;
void testcase(int case_number){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if( s[0] != '?' && n == 1){
        cout<<s+"\n";return;
    }
    int i =0;
    while(i < n && s[i] == '?')
        i++;
    if(i >= n){ // if everything is 
        bool ok = 1;
        for(int j =0;j<n;j++){
            if(ok)
                cout<<"R";
            else
                cout<<"B";
            ok =!ok;
        }
        puts("");
        return;
    }
    for(int j = i-1;j>=0;j--){
        if(s[j+1] == 'R')
            s[j] = 'B';
        else
            s[j] = 'R';
    }
    i = n-1;
    while(i >= 0 && s[i] == '?'){
        i--;
    }
    for(int j = i+1;j<n;j++){
        if(s[j-1] == 'R')
            s[j] = 'B';
        else
            s[j] = 'R';   
    }
    string s2 = s;
    for(int j = 1;j<n;j++){
        i = j;
        if(s[i] == '?'){
            if(s[i-1] == 'R'){
                s[i] = 'B';
            }
            else
                s[i] = 'R';
        }
    }
    for(int j = n-2;j>=0;j--){
        if(s2[j] == '?'){
            if(s2[j+1] == 'R')
                s2[j] = 'B';
            else
                s2[j] = 'R';
        }
    }
    int c1 =0,c2 = 0;
    for(int j =0;j+1<n;j++){
        i = j;
        if(s.substr(i,2) == "BB" || s.substr(i,2) == "RR")
            c1++;
        if(s2.substr(i,2) == "BB" || s2.substr(i,2) == "RR")
            c2++;
    }
    if(c2 <= c1)
        cout<<s2;
    else
        cout<<s;
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
