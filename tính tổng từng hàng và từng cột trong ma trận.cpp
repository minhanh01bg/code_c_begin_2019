#include<stdio.h>
#include<math.h>//tính tổng từng hàng và từng cột trong ma trận
int main(){
    int n;
    scanf("%d",&n);
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int s[100],y=0,d[100],x=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            s[y]+=a[i][j];
        }
        y++;
        for(int j=0;j<n;j++){
            d[x]+=a[j][i];
        }
        x++;
    }
    for(int i=0;i<y;i++){
        printf("%d ",s[i]);
    }
    printf("\n");
    for(int i=0;i<x;i++){
        printf("%d ",d[i]);
    }
}