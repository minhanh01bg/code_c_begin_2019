#include<bits/stdc++.h>
using namespace std;
int main(){					//vẽ mũi tên sang phải tương ứng.
	int n;
	cin>>n;
	for(int i=0;i<n*2-1;i++){
		if(i==0||i==n*2-1){
			for(int j=0;j<n;j++) cout<<"*";
		}
		if(i>0&&i<n){
			for(int x=0;x<i;x++) cout<<"~";
			for(int y=0;y<i;y++) cout<<"~";
			for(int z=n;z>i;z--) cout<<"*";
		}
		if(i>=n&&i<n*2-1){
			for(int q=n*2-2;q>i;q--) cout<<"~";
			for(int e=n*2-2;e>i;e--) cout<<"~";
			 for(int y=n-1;y<=i;y++) cout<<"*";
		}
		cout<<endl;
	}
}
