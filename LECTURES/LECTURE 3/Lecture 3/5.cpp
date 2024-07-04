#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number :"<<endl;
	cin>>n;
	
	int i=2;
	while(i<n){
		if(n%i!=0){
			cout<<"Prime number"<<endl;
			i++;
		}
		else{
			cout<<"THIS IS NOT PRIME NUMBER For"<<endl;
		}
	}

	
	return 0;
}
