#include<bits/stdc++.h>
using namespace std;

int main() {
  //freopen("input.txt","r",stdin);
  int n;
  cin>>n;
  if(n%4==0)
    cout<<n+1;
  else
    cout<<n-1;
  return 0;
}
