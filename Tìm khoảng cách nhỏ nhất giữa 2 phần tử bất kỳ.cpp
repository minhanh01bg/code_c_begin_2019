/*#include<bits/stdc++.h>
using namespace std;  //tìm khoảng cách nhỏ nhất giữa 2 phần tử bất kỳ 
int main(){
    int n;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int Min=INT_MAX;
    int maxx;
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            Min=min(Min,abs(a[i]-a[j])); 
        }
        
    }
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            if(abs(a[i]-a[j])==Min){
                a[i]>a[j] ? maxx=a[i] : maxx=a[j];
                cout<<Min<<' '<<(a[i]+a[j])-maxx<<' '<<maxx;
                return 0;
            }
        }
    }
}*/

