#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"enter the number:"<<endl;
	cin>>n;
	int i=0;
	int sum= 0;
	while(i<=n){
		sum=sum+i;
		i+=2;
	}
	cout<<"Sum of all even number is:"<<sum;
	return 0;
}
