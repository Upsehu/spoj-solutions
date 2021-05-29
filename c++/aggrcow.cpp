#include<bits/stdc++.h>
using namespace std;

bool isfeasible(int arr[],int mid,int n,int c){
	int pos = arr[0];
	
	int elements = 1;

	for(int i=1;i<n;i++){
		if(arr[i]-pos >=mid){
			pos=arr[i];
			elements++;

			if(elements==c)
				return true;
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c;
		cin>>n>>c;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];

		sort(arr,arr+n);

		int left=1,right=arr[n-1]-arr[0],res=-1;

		
		while(left<right){
			int mid = (left+right)/2;
		//	cout<<mid<<' '<<left+right<<endl;	
			if(isfeasible(arr,mid,n,c)){
				res=max(res,mid);
				left=mid+1;
			}
			else
				right=mid;

		//	cout<<res<<endl;
		}
		
		cout<<res<<endl;
	}

	return 0;                                                                                                                                                                                                                                       
	
}	
