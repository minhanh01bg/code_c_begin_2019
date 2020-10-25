#include<bits/stdc++.h>
using namespace std;//tìm số đẹp(số powerful)
bool iu(int n){
    int x=n,d=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            d=0;
            for(int y=2;y<=sqrt(i);y++){
                if(i%y==0){
                    d=1;
                    continue;
                }
            }
            if(d==0&&i>1&&x%(i*i)==0){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    if(n>m) swap(n,m);
    for(int i=n;i<=m;i++){
        if(iu(i)){
            cout<<i<<" ";
        }
    }

}