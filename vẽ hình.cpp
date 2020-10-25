/*#include <iostream>
using namespace std;
const int MAX = 1e6; //1e6 = 10^6
int cnt[MAX];                       //đếm số phần tử trong mảng.
int main(){     
    int n;
    do{
        cin >> n;
    }while(n < 1);
    int a[n];
    for(int i = 0; i < n;i++){
        do{
            cin >> a[i];
        }while(a[i] < 0);
    }
    for(int i = 0;i < MAX; i++) 
		cnt[i] = 0;
    for(int i = 0; i < n;i++){
			cnt[a[i]]++;
    	}
    	int d=0;
    for(int i = 0;i < n; i++){
        if(cnt[a[i]] > 1){
            cout <<a[i]<<" "<<cnt[a[i]]<<endl;
            cnt[a[i]]=0;
        }
		 
    }
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d=n,a[100][100];
    
    for(int i=0;i<n;i++){
        for(int r=i;r<n-1;r++) a[i][r]=d--;
        for(int r=i;r<n-i-1;r++)    a[r][n-i-1]=d++;
        for(int r=n-i-1;r>=i+1;r--) a[n-i-1][r]=d;
        for(int r=n-i-1;r>=i+1;r--) a[r][i]=d;
        cout<<endl;
    }
    if(n%2){
        a[n/2][n/2]=(n/2)+1;
    }
    for(int x=0;x<n;x++){
        for(int j=0;j<n;j++)
        cout<<a[x][j]<<" ";
        cout<<endl;
    }
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=n;j>i;j--) cout<<j;
    //     for(int x=0;x<n;x++)
    //     if(i>x) {
    //         for(int s=i+1;s>i;s--)cout<<i+1;
    //     }
    //     cout<<endl;
    // }
    // return 0;
    int n;
    cin>>n;
    for(int i=0,d=1;i<n;d++,i++){
        for(int j=n-1;j>i;j--) cout<<"~";
        for(int x=0;x<i+1;x++) cout<<d;
        cout<<endl;
    }
}
*/
/*#include<bits/stdc++.h>
using namespace std;
bool iu(int n){
    int d=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            d=1;
            break;
        }
    }
    if(d==0&&n>1)return true;
    else return false ;
}
int main(){
    int n;
    cin>>n;
    // int d=0;
    // int a[100][100];
    // for(int i=0;i<=n;i++,d=0){
    //     for(int j=2;j<i;j++){
    //         if(i%j==0){
    //         d=1;
    //         break;
    //         }
    //     }
    //     if(d==0&&i>1) {
    //         cout<<i<<" ";
	//     }
    // }
    int s=0;
    for(int i=0;i<=n;i++){
        if(iu(i)) s=i+s;
    }
    cout<<s;
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        if(i%2==0) for(int j=0;j<m;j++){
            if(j%2==0) {
                cout<<1;
            }
            else cout<<0;
        } 
        if(i%2!=0) for(int j=0;j<m;j++){
            if(j%2==0) {
                cout<<0;
            }
            else cout<<1;
        } 
        
        cout<<endl;
    }
}*/
/*#include<bits/stdc++.h>
using namespace std;       //vẽ tam giác theo qui luật A.
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>1;j--) cout<<"~";
        if(i>=0){
            for(int j=i;j>0;j--) cout<<j;
            cout<<0;
            for(int j=1;j<=i;j++) cout<<j;
        }

        cout<<endl;
    }
}*/



/*
#include<bits/stdc++.h>
using namespace std;   // vẽ tam giác số theo nguyên tắc D(1).
int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=i;j<=n;j++) cout<<j;
        cout<<endl;
    }
}*/
/*
1
2 4
7 11 16
22 29 37 46
56 67 79 92 106
*/

/*
#include<bits/stdc++.h>
using namespace std;        //vẽ tam giác số theo nguyên tắc I(2).
int main(){
    int n;
    cin>>n;int d=0,s=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            s=s+d;
            cout<<s<<" ";
            d+=1;
           }
        cout<<endl;
    }
}
*/

/*#include<bits/stdc++.h>
using namespace std;
bool iu(long long n){
    long long z=n,x=n,y=0,d=0,v=0;
    while(z!=0){
        d=z%10;
        if(d==9){
            v=1;
        }
        z/=10;
    }
    while(x!=0){
        
        y=x%10+y*10;
        x/=10;
    }
    if(y==n&&v==0) return true;
    else return false;
}
 int main (){
     long long n;
     cin>>n;
     long long d=0;
     for(long long i=0;i<=n;i++){
        if(iu(i)&&i>1) {
            cout<<i<<" ";
            d++;
        }
    }
    cout<<endl<<d;
 }*/