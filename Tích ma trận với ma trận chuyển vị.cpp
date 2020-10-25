
// INPUT
// 2 2
// 1 2  
// 3 4  
// OUTPUT
// 5 11
// 11 25
#include<stdio.h>
#include<math.h>//Tích ma trận với ma trận chuyển vị
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           b[i][j]=a[j][i];
        }
    }
    int kq[100][100];
    if(n>=m){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            kq[i][j]=0;
            for(int k=0;k<n;k++){
                kq[i][j]+=a[i][k]*b[k][j];
            }        
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",kq[i][j]);
        }
        printf("\n");
    }}
    else {
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            kq[i][j]=0;
            for(int k=0;k<m;k++){
                kq[i][j]+=a[i][k]*b[k][j];
            }        
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",kq[i][j]);
        }
        printf("\n");
    }}
    
}

