#include<stdio.h>
#include<math.h>//Tìm giá trị lớn nhất và nhỏ nhất cùng vị trí xuất hiện của chúng
int n;
int a[1000000];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=0;
    int min=99999999;
    int m,x;
    for(int i=0;i<n;i++){
        if(max<=a[i]){
            max=a[i];
            m=i+1;
        }
        if(min>=a[i]){
            min=a[i];
            x=i+1;
        }
    }
    printf("%d %d",max,m);
    printf("\n");
    printf("%d %d",min,x);
}
