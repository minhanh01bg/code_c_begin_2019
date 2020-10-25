#include<bits/stdc++.h>
using namespace std;
// void nhap(int a[100][100],int n,int m){
// 	for(int i=0;i<n;i++){				//nhập ma trận
// 		for(int j=0;j<m;j++)
// 		cin>>a[i][j];
// 		cout<<endl;
// 	}
// }
// void xuat(int a[100][100],int n,int m){
// 		for(int i=m-1;i>=0;i--){			//xoay 90 độ ngược chiều kim đồng hồ.
// 		for(int j=0;j<n;j++)
// 		cout<<a[j][i];
// 		cout<<endl;
// 	}
// }
void xuat(int a[100][100],int n,int m){
		for(int i=0;i<m;i++){				// xoay 90 độ theo chiều kim đồng hồ.
		for(int j=n-1;j>=0;j--)
		cout<<a[j][i];
		cout<<endl;
	}
}
// void xuat(int a[100][100],int n,int m){
// 		for(int i=n-1;i>=0;i--){		//xoay 180 độ chiều kim đồng hồ.
// 		for(int j=m-1;j>=0;j--)
// 		cout<<a[i][j];
// 		cout<<endl;
// 	}
// }
int main(){
		int n,m,a[100][100];
		cin>>n>>m;
		nhap(a,n,m);
		xuat(a,n,m);
}


