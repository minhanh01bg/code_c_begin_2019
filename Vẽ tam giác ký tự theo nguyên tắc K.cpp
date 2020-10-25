#include<stdio.h>
#include<math.h>//	Vẽ tam giác ký tự theo nguyên tắc K
int main(){
	int n;
	scanf("%d",&n);
	int s='A';
	for(int i=0;i<n;i++){
		s=s+i;
		for(int j=0;j<=i;j++){
			printf("%c ",s);
			s=s+n-1-j;
		}
		s='A';
		printf("\n");
	}
}