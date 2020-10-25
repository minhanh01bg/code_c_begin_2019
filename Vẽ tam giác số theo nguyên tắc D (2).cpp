#include<bits/stdc++.h>
using namespace std;   //	Vẽ tam giác số theo nguyên tắc D (2)
int main(){
    int n;
    cin>>n;
    int x=1;
    for(int i=0;i<n;i++){
        x=i+1;
        for(int j=n-1;j>=i;j--){
            cout<<x++;
        }
        x=0;
        cout<<endl;
    }
}