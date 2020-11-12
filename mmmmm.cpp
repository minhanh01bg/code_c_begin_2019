#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    // map<string, int> b;
    string c[100],d[100];
    int x=0,y=0;
    for(int i=0;i<a.length();i++){
        if(a[i]>='A'&&a[i]<='Z') 
            a[i]+=32;
    }
    for(int i=0; i < a.length(); i++){
        if(a[i]==' '&&a[i+1]!=' ') {x++;}
        else if(a[i]!=' ') c[x]+=a[i];
    }
    for(int i=0; i < b.length(); i++){
        if(b[i]==' '&&b[i+1]!=' ') {y++;}
        else if(b[i]!=' ') d[y]+=b[i];
    }
    for(int i=0;i<=x-1;i++){
        for(int j=i+1;j<=x;j++){
            if(c[i]==c[j]) c[i]="";
        }
    }
    string r[100];
    int z=0;
    for(int i=0;i<=x;i++){
        int e=0;
        for(int j=0;j<=y;j++){
            if(c[i]==d[j]) {
                e=1;
                break;
            }
        }
        if(e==0&&c[i]!=""){
            r[z]=c[i];
            z++;
        }
    }
}
