#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number :"<<endl;
	cin>>n;
	int sum=1;
	cout<<"The numbers are:"<<" ";
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
	cout<<sum;
	return 0;
}
