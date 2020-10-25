//	Vẽ tam giác ký tự theo nguyên tắc H
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a='@';
    for(int i=0;i<n*2-1;i+=2){
        for(int j=0;j<=i;j+=2){
            printf("%c",a);
            a=a+2;
        }
        a=a-2;
        for(int j=0;j<i;j+=2){
            a=a-2;
            printf("%c",a);
        }
        a='@';
        printf("\n");
    }
}