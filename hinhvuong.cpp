#include <bits/stdc++.h>
using namespace std;
using ll=long long;
double the;
const ll M=20192020;
int main(){
    freopen("SNT.INP","r",stdin);
    freopen("SNT.OUT","w",stdout);
    ll n,m,k,a,b,c,d=0,e=0,i,j;
    cin >> i >> j >> k;
    if(k%2==0){
        a=(((i*j)+(i+k-1)*j)*(k/2));
        b=(((j+k-1)*i)+((i+k-1)*(j+k-1)))*(k/2);
        cout << ((a+b)%M*(k/2)%M)%M;
    }else{
        a=((i*j)+(i+k-1)*j)*(k/2)+((i*j)+(i+k-1)*j)/2;
        b=(((j+k-1)*i)+(i+k-1)*(j+k-1))*(k/2)+(((j+k-1)*i)+(i+k-1)*(j+k-1))/2;
        cout << ((a+b)%M*(k/2)%M+(a+b)/2)%M;
    }
}
