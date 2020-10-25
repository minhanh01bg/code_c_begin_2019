#include<bits/stdc++.h>
using namespace std;//	Tìm hàng có nhiều phần tử là số nguyên tố nhất
int main() {
    int n,a[100][100];
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <  n ; j++) cin>>a[i][j];
    }
    int b[100];
    int y=0,z=0,r=0;
    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < n ; j++){
            for(int l = 2 ; l <= sqrt(a[i][j]) ; l++){
                if(a[i][j] % l == 0){
                    y=1;
                }
            }
            if(y == 0 && a[i][j] > 1){
                z++;
            }
            y=0;
        }
        b[r]=z;
        z=0;
        r++;
    }
    int max=0;
    int e=0,f=0;
    for(int i=0;i<r;i++){
        if(max<b[i]) {
            max=b[i];
            e=i;
        }
    }
    cout<<e+1<<endl;
    for(int i=0 ;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==e){
                for(int o=2;o<=sqrt(a[i][j]);o++){
                    if(a[i][j]%o==0){
                        f=1;
                    }
                }
                if(f==0&&a[i][j]>1){
                    cout<<a[i][j]<<" ";
                }
                f=0;
            }
        }
    }
}