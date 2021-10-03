#include<bits/stdc++.h>
using namespace std;

int main() {
  //freopen("input.txt","r",stdin);
  int n,k;
  cin>>n>>k;
  std::map<int, int > mp;
  string s;
  int count=0,c;
  for(int i=0;i<k;i++){
    cin>>s;
    if(s=="CLOSEALL"){
      count=0;
      mp.clear();
    }else{
      cin>>c;
      mp[c]+=1;
      //cout<<s<<" "<<mp[s]<<endl;
      if(mp[c]%2!=0)
        count++;
      else if(mp[c]%2==0){
        count--;
      }
    }
    if(count<0)
      cout<<0<<endl;
    else
      cout<<count<<endl;
  }
  return 0;
}
