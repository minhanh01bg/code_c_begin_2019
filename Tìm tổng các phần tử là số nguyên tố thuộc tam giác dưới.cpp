#include<stdio.h>
#include<math.h>//	Tìm tổng các phần tử là số nguyên tố thuộc tam giác dưới
int main(){
    int n;
    scanf("%d",&n);
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    int y=0,b[100];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
           b[y] = a[i][j];
            y++;
        }
    }
    int d=0,s=0;
    for(int i=0;i<y;i++){
        d=0;
        for(int j=2;j<=sqrt(b[i]);j++){
            if(b[i]%j==0){
                d=1;
                continue;
            }
        }
        if(d==0&&b[i]>1){
            s+=b[i];
        }
    }
    printf("%d",s);
}