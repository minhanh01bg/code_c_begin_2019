#include<bits/stdc++.h>

using namespace std;

int d=0;  
                  //tổng số phần tử là số nguyên tố thuộc tam giác dưới,
int main() {
    int n,a[100][100],b[100];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }   
    int x=0;int k=0; 
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            b[x]=a[i][j];
            x+=1;
        }
    }
    for(int i=0;i<x-1;i++){
        d=0;
        for(int j=2;j<=sqrt(b[i]);j++){
            if(b[i]%j==0){
                d=1;
                continue;
            }
        }
        if(d==0&&b[i]>1){
           k=b[i]+k;
        }   
    }    
    cout<<k;                                                                                                                                                          
}




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






/*
#include<stdio.h>
#include<math.h>// sắp xếp các phần tử trong mảng tăng dần
int a[1000];
int s[10000000];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    for(int i=0;i<10000000;i++){
        s[i]=0;
    }
    for(int i=0;i<n;i++){
        s[a[i]]++;
    }
    for(int i=0;i<10000000;i++){
        if(s[i]>0){
            for(int j=0;j<s[i];j++){
                printf("%d ",i);
            }
        }
    }
    return 0;
}*/