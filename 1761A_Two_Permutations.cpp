#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        if(a+b<=n-2 || (a==n && a==b)){
            cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
    }
    return 0;
}