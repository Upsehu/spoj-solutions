#include<bits/stdc++.h>
using namespace std;

long gcd(long a,long b){

	return b==0?a:gcd(b,a%b);
}

int main(){
	int t;
	cin>>t;
	while(t--){	
		string s;
		cin>>s;
		int count=0;
		 long frac;
		int flag=0;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='.'){
				flag=1;
				break;
			}
			count++;	
		}
		long number=1;
		for(int i=0;i<s.size();i++){
			if(s[i]=='.'){
				continue;	
			}
			number = number*10+(s[i]-'0');
		}
		//cout<<number<<endl;
		frac = 1;
	
		if(flag==1)
			frac = pow(10,count); 	

		printf("%ld\n",frac/gcd(number,frac));
	}
	
	return 0;
}
