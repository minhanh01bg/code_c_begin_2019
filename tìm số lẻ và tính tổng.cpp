#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[n];
	cin >>n;
	for(int i = 0;i<n;i++)
	{
		cout <<"vi tri thu nhat "<<i+1<<" :";
		cin >>a[i];
	}
	int s = 0;
	for(int i =0;i<n;++i)
	{
	if(a[i]%2!=0)
		{
			cout <<a[i]<<endl;
			s += a[i];
			cout <<s<<endl;
		}
	}
	return 0;
}

