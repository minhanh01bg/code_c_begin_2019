#include<bits/stdc++.h>
using namespace std;//ước của n nhỏ hơn n và tổng ước bằng n;
bool miu(int n){
	int d=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			d=d+i;
		}
	}
	if(n==d) return true;
	else return false;
}
int main(){
	int a,b;
	do{
		cin>>a>>b;
	}while(a<1&&b<1);
	if(a>b) swap(a,b);
	for(int i=a;i<=b;i++){
		if(miu(i)){
			cout<<i<<" ";
		}
	}
}
