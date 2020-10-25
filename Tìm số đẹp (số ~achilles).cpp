#include<bits/stdc++.h>
using namespace std; //Tìm số đẹp (số ~achilles)
bool tn(int n){
    int d=0,s=0,S=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    d=1;
                    continue;
                }
            }
            if(d==0&&i>1){
                s++;
                if(n%(i*i)==0){
                    S++;
                }
            }
            d=0;
        }
        
    }
    if(s==S&&s!=0){
        return true;
    }
    return false;
}
int main(){
    int n;
    int m;
    cin>>n>>m;
    if(n>m) swap(n,m);
    for(int i=n;i<=m;i++){
        if(tn(i)){
            cout<<i<<" ";
        }
    }
}