#include<bits/stdc++.h>
using namespace std;
int convert(string s){
    int res=0;
    for(auto i:s){
        res=res*10+(int(i)-48);
    }
    return res;
}
int main(){
    string s;
    cin >> s;
    int n=s.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int a=convert(s.substr(0,i+1));
            int b=convert(s.substr(i+1,j-i));
            int c=convert(s.substr(j+1,n-j));
            if(a*a +b*b==c*c || a*a +c*c==b*b || c*c +b*b==a*a){
                cout << max(a,max(b,c));
                break;
            }
        }
    }
}
