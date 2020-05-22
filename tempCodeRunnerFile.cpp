/*#include<stdio.h>
#include<math.h>//phân tích thừa số nguyên tố,
int main(){
   int n;
   scanf("%d",&n);
   for(int i=2;i<n;i++){
      if(n%i==0){
         printf("%dx",i);
         n/=i;
         i=1;
      }
      
   }
   printf("%d",n);         

   return 0;
}*/

/*#include<stdio.h> // đếm số lần xuất hiện của các chữ số trong một số.
#include<math.h>
int main(){
   int n;
   scanf("%d",&n);
   int d,i=0,x=n,a[100],y=0,snt[100];
   while(n!=0){
      d=n%10;
      a[i]=d;
      i++;
      n/=10;
   }
   while ( x != 0){
      y++;
      x/=10;
   }
   for(int i=0 ; i < 100 ; i++){
      snt[i]=0;
   }
   for(int i=y-1;i>=0;i--){
      snt[a[i]]++;
   }
   for(int i=y-1;i>=0;i--){
      if(snt[a[i]]>0){
         printf("%d %d",a[i],snt[a[i]]);
         printf("\n");
         snt[a[i]]=0;
      }
   }
}*/
/*
#include<stdio.h>
#include<math.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[100][100],b[100];
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         scanf("%d",&a[i][j]);
      }
   }
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++)
    printf("%d",a[i][j]);
    printf("\n");
   }
   int c[100],d,e;
   for(int i=0;i<n;i++){ int y=0,z=0;
      for(int j=0;j<n;j++){
         if(i==j){
             printf("%d",a[i][j]);
         }
         if(i+j == n-1 && i != j) {
         printf("%d",a[i][j]);
         }
      }
   }
}*/
/*
#include<stdio.h>
#include<math.h> //vẽ tam giác số theo nguyên tắc G.
int main(){
   int n;
   scanf("%d",&n);
   int s=1,S=2;
   for(int i=0;i<n;i++){
     if(i%2==0) {
        for(int j=0;j<=i;j++) 
        {printf("%d",s);
        s=s+2;}
        s=1;
     }
      if(i%2!=0) {
        for(int j=0;j<=i;j++) 
        {printf("%d",S);
        S=S+2;}
        S=2;
     }
      printf("\n");
   }
}*/
/*
#include<stdio.h>
#include<math.h>//vẽ tam giác số theo nguyên tắc B(1)
int main(){
    int n;
   scanf("%d",&n);
   int s=1,S=2;
   for(int i=0;i<n;i++){
     if(i%2==0) {
        for(int j=0;j<=i;j++) 
        printf("%d",s);
        s=s+2;
    
     }
      if(i%2!=0) {
        for(int j=0;j<=i;j++) 
        printf("%d",S);
        S=S+2;
       
     }
      printf("\n");
   }
}*/
/*
#include<stdio.h>
#include<math.h>//vẽ tam giác số theo nguyên tắc J
int main(){
   int n;
   scanf("%d",&n);
   int s=1,S=0;
   for(int i=0;i<n;i++){
      if(i%2==0) for(int j=0;j<=i;j++){
         printf("%d",s);
         s+=1;
      }
      s=1;
      if(i%2!=0) {
         S=i+1;
         for(int j=0;j<=i;j++) {
         printf("%d",S);
         S-=1;
         }
      }
      printf("\n");
   }
}*/

/*
#include<stdio.h>
#include<math.h>//đếm số phần tử trong mảng

int main(){
   int n,a[100];
   scanf("%d",&n);
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   int snt[100];
   for(int i=0;i<100;i++){
      snt[i]=0;
   }
   for(int i=0;i<n;i++){
      snt[a[i]]++;
   }
   for(int i=0;i<100;i++){
      if(snt[i]>0){
         printf("%d %d",i,snt[i]);printf("\n");
      }
   }
   return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;  // đếm số nguyên tố theo thứ tự từ nhỏ đến lớn trong mảng một chiều
const int MAX=1e6;
int n,d=0,a[MAX],snt[MAX];
int main(){
   cin>>n;
   for(int i=0;i<n;i++){
      cin>>a[i];
   }
   for(int i=0;i<MAX;i++){
      snt[i]=0;
   }
   for(int i=0;i<n;i++){
      d=0;
      for(int j=2;j<=sqrt(a[i]);j++){
         if(a[i]%j==0){
            d=1;
            continue;
         }
      }
      if(d==0&&a[i]>1){
         snt[a[i]]++;
      }
   }
   for(int i=0;i<MAX;i++){
      if(snt[i]>0){
         cout<<i<<" "<<snt[i]<<endl;
      }
   }
}*/
// 6 5
// OUTPUT
// 11011
// 11011
// 00000
// 00000
// 11011
// 11011
#include<stdio.h>
#include<math.h>
int main(){
   int n,m;
   scanf("%d%d",&n,&m);
   for(int i=0;i<n;i++){
     if(i<2||i>=n-2){
         for(int j=0;j<2;j++){
            printf("1");
         }
         for(int j=0;j<m-4;j++) 
            printf("0");
         for(int j=m-2;j<m;j++){
               printf("1");
         }
      } 
      if(i>=2&&i<n-2) 
         for(int j=0;j<m;j++) printf("0");
      printf("\n");
   }
}