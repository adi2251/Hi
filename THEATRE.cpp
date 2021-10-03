#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("testcases.txt","r",stdin);
	long long  t,cash=0;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		std::vector<std::vector<long long> > v(4, vector<long long > (4, 0)),v1(4, vector<long long > (4, 0));
		for(long long int i=0;i<n;i++){
			long long time;
			char a;
			cin>>a;
			cin>>time;
			if(time==12&&a=='A')
				v[0][0]+=1;
			else if(time==12&&a=='B')
				v[1][0]+=1;
			else if(time==12&&a=='C')
				v[2][0]+=1;
			else if(time==12&&a=='D')
				v[3][0]+=1;
			else if(time==3&&a=='A')
				v[0][1]+=1;
			else if(time==3&&a=='B')
				v[1][1]+=1;
			else if(time==3&&a=='C')
				v[2][1]+=1;
			else if(time==3&&a=='D')
				v[3][1]+=1;
			else if(time==6&&a=='A')
				v[0][2]+=1;
			else if(time==6&&a=='B')
				v[1][2]+=1;
			else if(time==6&&a=='C')
				v[2][2]+=1;
			else if(time==6&&a=='D')
				v[3][2]+=1;
			else if(time==9&&a=='A')
				v[0][3]+=1;
			else if(time==9&&a=='B')
				v[1][3]+=1;
			else if(time==9&&a=='C')
				v[2][3]+=1;
			else if(time==9&&a=='D')
				v[3][3]+=1;		
		}
		long long count0=0,count1=0,count2=0,count3=0;
		for(long long i=0;i<4;i++){
			if(v[0][i]==0)
				count0++;
		}
		for(long long i=0;i<4;i++){
			if(v[1][i]==0)
				count1++;
		}
		for(long long i=0;i<4;i++){
			if(v[2][i]==0)
				count2++;
		}
		for(long long i=0;i<4;i++){
			if(v[3][i]==0)
				count3++;
		}
		std::vector<pair<long ,long >> v2;
		std::vector<long long> v4;
		v2.push_back(make_pair(count0,0));
		v2.push_back(make_pair(count1,1));
		v2.push_back(make_pair(count2,2));
		v2.push_back(make_pair(count3,3));
		sort(v2.begin(),v2.end());
		//cout<<" v2 "<<endl;
		for(long o=0;o<4;o++ ){
			v4.push_back(v2[o].second);
		}
		//cout<<endl;
		long long tr=3;
		std::vector<long long > v3;
			// for(long o=0;o<4;o++){
			// 	for(long p=0;p<4;p++){
			// 		cout<<v[o][p]<<" ";
			// 	}
			// 	cout<<endl;
			// }
		for(long long i=0;i<4;i++){
			long long j=v4[tr],max=0,temp;
			tr-=1;
			for(long long k=0;k<4;k++){
				//cout<<" out loop "<<" "<<v[j][k]<<" ";
				//cout<<endl;
				if(max<v[j][k]){
				//cout<<" in loop "<<" "<<v[j][k]<<" ";
				//cout<<endl;
					max=v[j][k];
					temp=k;
				}
			}
			if(max!=0){
				for(long long k=0;k<4;k++)
				v[j][k]=-1;
			for(long long k=0;k<4;k++)
				v[k][temp]=-1;
			//cout<<endl;
			// for(long o=0;o<4;o++){
			// 	for(long p=0;p<4;p++){
			// 		cout<<v[o][p]<<" ";
			// 	}
			// 	cout<<endl;
			// }
			}
			v3.push_back(max);
		}
		sort(v3.begin(),v3.end());
		long long sum=0;
		if(v3[3]==0){
			sum-=100;
		}
		else sum+=(v3[3]*100);
		if(v3[2]==0){
			sum-=100;
		}
		else sum+=(v3[2]*75);
		if(v3[1]==0){
			sum-=100;
		}
		else sum+=(v3[1]*50);
		if(v3[0]==0){
			sum-=100;
		}
		else sum+=(v3[0]*25);
		cash+=sum;
		cout<<sum<<endl;
	}
	cout<<cash;
		
}
