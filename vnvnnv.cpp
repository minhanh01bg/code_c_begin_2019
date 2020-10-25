#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=n,d,a[100],e=0;
    int i=0;
    while(x){
        d=x%10;
        a[i]=d;
        i++;
        x/=10;
    }
    
    // for(int y=0;y<i;y++){
    //     cout<<a[y]<<" ";
    // }
    int b[100],r=0;
    for(int y=0;y<i;y++){
        e=0;
        for(int j=2;j<=sqrt(a[y]);j++){
            if(a[y]%j==0){
                e=1;
                continue;
            }
        }
        if(e==0&&a[y]>1){
            b[r]=a[y];
            r++;
        }
    }
    
    int s[100];
    for(int y=0;y<100;y++){
        s[y]=0;
    }
    for(int y=0;y<r;y++){
        s[b[y]]++;
    }
    for(int y=0;y<100;y++){
        if(s[y]>0){
            cout<<y<<" "<<s[y]<<endl;
        }
    }
}

