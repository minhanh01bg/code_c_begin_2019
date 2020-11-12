#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string somin(ll m,ll s){
    if(s>9*m||(m>1&&s==0)) return "-1";
    string numl(m,'0');
    ll tmp=s-9*(m-1);
    if(tmp<0){tmp=1;}
    numl[0] = tmp +'0';
    s-=tmp;
    for(ll i=1;i<m;i++){
        tmp=s-9*(m-1-i);
        if(tmp<0){tmp=0;}
        numl[i]=tmp+'0';
        s-=tmp;
    }
    return numl;
}
string somax(ll m, ll s){
    if(s>9*m||(m>1&&s==0)) return "-1";
    string num2(m,'0');
    for(int i=0;i<m;i++){
        if(s>9){
            num2[i]=9+'0';
            s-=9;
        }
        else{
            num2[i]=s+'0';
            s=0;
        }
    }
    return num2;
}
int main(){
    ll m,s;cin>>m>>s;
    string min=somin(m,s);
    string max=somax(m,s);
    cout<<min<<" "<<max;
}