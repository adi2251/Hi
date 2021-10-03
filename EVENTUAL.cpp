#include<bits/stdc++.h>

using namespace std ;
int main () {
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t ;
  cin >> t ;
  while (t--){  
  int n ;
  cin >> n ;
  string s ;
  cin >> s ;
  int b[26] = {0} ;
  for (auto a : s) {
    b[a - 'a'] ++ ;
  }
  int flag=0;
  for (int i = 0 ; i < 26 ; i++) {
    if (b[i] % 2) {
        flag=1;
      cout << "NO" << endl ;
      break;
    }
  }
  if(flag==0)
  cout << "YES" << endl ;
  }
  return 0 ;
}
