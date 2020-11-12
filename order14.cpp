#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int n) 
{ 
    if (n==0 || n==1) 
        return n; 
    int j = 0; 
    for (int i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n-1]; 
  
    return j; 
} 
int binarySearch(int arr[], int n, int x) {
  int r = n - 1; 
  int l = 0; 
  while (r >= l) {
    int mid = l + (r - l) / 2; 
 
    if (arr[mid] == x)
      return mid;
 
    if (arr[mid] > x)
      r = mid - 1;
    if (arr[mid] < x)
      l = mid + 1;
  }
  return -1;
}
int main(){
  int t;
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    int a[n],b[n];
    for(int i = 0 ; i < n ; i++) {
      cin>>a[i];
      b[i] = a[i];
    }
    int d = 0;
    sort(b, b + n);
    int x=removeDuplicates(b,n);
    int max=b[n-1];
    for(int i = 0 ; i < n ; i++) {
      d=binarySearch(b,x,a[i]);
      if(b[d]!=max)
        cout<<b[d+1]<<" ";
      else cout<<"_"<<" ";
    }
    cout<<endl;
  }
  return 0;
}