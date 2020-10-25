
#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	fgets(a,sizeof(a),stdin);
	for(int i=0;i<strlen(a);i++){
		if(a[i]!=' '){
			printf("%c",a[i]);
		}
	}
}