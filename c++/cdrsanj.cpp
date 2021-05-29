#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin>>x;
	int count=0;
	if(x==1)
		cout<<1<<endl;
	else if(x%2==0){
		int temp=x;
		while(temp%2==0){
			count++;
			temp/=2;
		}
		cout<<count*2<<endl;
	}
	else
		cout<<0<<endl;

	return 0;
}
