// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n,a[100];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int r=0,y=0;
//     for(int i=0;i<n;i++){
//         if(a[i]%2==0){
//             r++;
//         }
//         if(a[i]%2){
//             y++;
//         }
//     }
//     printf("%d ",y);
//     for(int i=0;i<n;i++){
//         if(a[i]%2){
//             printf("%d ",a[i]);
//         }
        
        
//     }
//     printf("\n%d ",r);
//     for(int i=0;i<n;i++){
//         if(a[i]%2==0){
//             printf("%d ",a[i]);
//         }
        
//     }
// }

// #include<stdio.h>
// // using namespace std;
// void nhap(int a[100][100],int n){
// 	for(int i=0;i<n;i++){				//nhập ma trận
// 		for(int j=0;j<n;j++)
//         scanf("%d",&a[i][j]);
// 		// cin>>a[i][j];
// 		// cout<<endl;
        
// 	}
// }
// // void ruat(int a[100][100],int n,int m){
// // 		for(int i=m-1;i>=0;i--){			//roay 90 độ ngược chiều kim đồng hồ.
// // 		for(int j=0;j<n;j++)
// // 		cout<<a[j][i];
// // 		cout<<endl;
// // 	}
// // }
// void ruat(int a[100][100],int n){
// 		for(int i=0;i<n;i++){				// roay 90 độ theo chiều kim đồng hồ.
// 		for(int j=n-1;j>=0;j--)
// 		printf("%d ",a[j][i]);
//         // cout<<a[j][i];
// 	printf("\n");
// 	}
// }
// // void ruat(int a[100][100],int n,int m){
// // 		for(int i=n-1;i>=0;i--){		//roay 180 độ chiều kim đồng hồ.
// // 		for(int j=m-1;j>=0;j--)
// // 		cout<<a[i][j];
// // 		cout<<endl;
// // 	}
// // }
// int main(){
// 		int n,m,a[100][100];
//         scanf("%d",&n);
// 		// cin>>n>>m;
// 		nhap(a,n);
// 		ruat(a,n);
// }

// #include<string.h>
// #include<stdio.h>
// int main(){
//     char a[100],b[100];
//     gets(a);
//     gets(b);
//     int p;
//     scanf("%d",&p);
//     for(int i=0;i<p-1;i++){
//         printf("%c",a[i]);

//     }
//     for(int i=0;i<strlen(b);i++){
//         printf("%c",b[i]);
        
//     }
//     for(int i=p-1;i<strlen(a);i++){
//         printf("%c",a[i]);
//     }
// }

// #include<stdio.h>
// #include<math.h>
// int a[100][100], n, r = 0;
// void output() {
//     scanf("%d",&n);
//     int d = n*n;
//     for(r=0;r<n;r++) {
//         for(int i = r ; i < n-r-1 ; i++) a[r][i] = d--;

//         for(int i = r ; i < n-r-1 ; i++) a[i][n-r-1] = d--;

//         for(int i = n-r-1 ; i >= r+1 ; i--) a[n-r-1][i] = d--;

//         for(int i = n-r-1 ; i>= r+1 ; i--) a[i][r] = d--;
//     }
// 	if(n % 2 != 0) {
// 		a[n/2][n/2] = 1;
//     }
// 	for(int i = 0; i < n; i++) {
//   		for(int j = 0; j < n; j++)
//             printf("%d ",a[i][j]);
//         printf("\n");
//     }
// }
// int main() {
// 	output();
// }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[100][100];
//     int  d=n*n;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n-i-1;j++)  a[i][j]=d--;
//         for(int j=i;j<n-i-1;j++)  a[j][n-i-1]=d--;
//         for(int j=n-i-1;j>i;j--)  a[n-i-1][j]=d--;
//         for(int j=n-i-1;j>i;j--)  a[j][i]=d--;
//     }
//     if(n%2){
//         a[n/2][n/2]=1;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// }
#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;

int main(){
    fast_io;
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[100];
    for(int i=0;i<100;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        b[a[i]]++;
    }
    int x=0;
    for(int i=0;i<n;i++){
        if(b[a[i]]==1){
            x++;
        }
    }
    cout<<x;
    cout<<endl;
     for(int i=0;i<n;i++){
        if(b[a[i]]==1){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}


