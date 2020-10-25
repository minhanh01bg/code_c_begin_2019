#include<bits/stdc++.h>
using namespace std;//vẽ tam giác số theo nguyên tắc k
int main(){
    int n;
    cin>>n;
    int s=1,x=0;
    for(int i=1;i<=n;i++){
        x=i;
        for(int j=1;j<=i;j++){
            cout<<s<<" ";
            s+=n-j;
        }
        
        s=x+1;
        cout<<endl;
    }
}