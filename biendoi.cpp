#include <bits/stdc++.h>
using namespace std;
using ll=long long;
double the;
int main(){
    freopen("SNT.INP","r",stdin);
    freopen("SNT.OUT","w",stdout);
    ll n,m,k,a,b,c,d=0,e=0;
    cin >> n;
    while(n%2==0){
        d++;
        n=n/2;
    }
    if(d==0){
        cout << "-1";
    }else{
        while(n%3==0){
            e++;
            n=n/3;
        }
        if(n>1){
            cout << "-1";
        }else if(d>=e){
            cout << e+(d-e)*2;
        }
    }
}
