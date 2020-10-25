#include<bits/stdc++.h>
using namespace std;		//vẽ mũi tên sang trái.
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i;j++) cout<<"~";
		for(int s=0;s<n-i;s++) cout<<"*";
		cout<<endl;
	}
	for(int i=0;i<n-1;i++){
		for(int x=0;x<=i;x++) cout<<"~";
		for(int y=0;y<=i+1;y++) cout<<"*";
		cout<<endl;
	}
}