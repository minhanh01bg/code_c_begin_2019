#include <iostream>
using namespace std;

unsigned short int n;

bool ktlocphat(int n) {
 while(n > 0) {
  unsigned short int t = n % 10;
  if (t != 0 && t != 6 && t != 8)
   return false;
  n = n / 10;
 }
 return true;
}

int main() {
 cin >> n ;
 if(ktlocphat(n))
  cout << "1";
 else  cout << "0";
}
