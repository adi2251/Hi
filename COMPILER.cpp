#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--)
		{
			stack<char> st;
			long ans=0;
			string s;
			cin>>s;
			long f=0;
			for(int i=0;i<s.length();i++)
			{
				f++;
			 if(!st.empty() && st.top()=='<' && s[i]=='>')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
            
            if(st.empty())
            {
                ans+=f;
                f= 0;
            }
			}
        cout << ans << "\n";        
    }
	return 0;
}
