#include<string>
#include<iostream>
using namespace std;
typedef long long ll;

ll Int (string a){
    ll x=0;
    for(int i=0;i<a.length();i++){
        x=x*10+(a[i]-'0');
    }
    return x;
}
int main(){
    string a;
    cin>>a;
    cout<<Int(a);
}