#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s='@'+n-1;
    for(int i=0;i<n;i++){
        s='@'+n-i-1;
        for(int j=n;j>i;j--){
            cout<<(char)s;
            s+=1;
        }
        cout<<endl;
    }

}