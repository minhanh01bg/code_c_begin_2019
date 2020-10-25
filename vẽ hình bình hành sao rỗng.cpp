#include<bits/stdc++.h>
using namespace std;		//vẽ hình bình hành sao rỗng.
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		if(i==0) for(int x=0;x<m;x++) cout<<"*";
		for(int j=0;j<i;j++) cout<<"~";
		if(i>0&&i<n-1){
			cout<<"*";
			for(int y=0;y<m-2;y++) cout<<".";
			cout<<"*";
		}
		if(i==n-1) for(int q=0;q<m;q++) cout<<"*";
		cout<<endl;
	}
}