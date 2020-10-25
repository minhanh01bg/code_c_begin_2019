#include<bits/stdc++.h>
using namespace std;//vẽ tam giác kí tự theo nguyên tắc L.
int main(){
    int n;
    cin>>n;
    int s='a';
    int S='a';
    char a[100]; 
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            s=s+i-1;
            for(int j=1;j<=i;j++){
                cout<<(char)s<<" ";
                s+=1;
            }
        }
        else if(i%2==0){
            for(int j=1;j<=i;j++){
                a[j]=s;
                s+=1;
            }
            for(int j=i;j>=1;j--)
                cout<<(char)a[j]<<" ";
                s-=i;
        } 
        cout<<endl;
    }
}
