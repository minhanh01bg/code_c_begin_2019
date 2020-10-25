#include<stdio.h>
#include<math.h>//tích của hai ma trận
int main(){
    int n,m,a[100][100],b[100][100];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int s[100][100];
    if(n<=m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            s[i][j]=0;
            for(int k=0;k<m;k++){
                s[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    }
    else {
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            s[i][j]=0;
            for(int k=0;k<m;k++){
                s[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    }
    
}