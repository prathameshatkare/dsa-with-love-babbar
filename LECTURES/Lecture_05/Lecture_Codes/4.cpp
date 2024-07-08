#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number :"<<endl;
	cin>>n;
	int a=0;
	int b=1;
cout<<a<<"\n"<<b<<"\n";
	cout<<"The numbers are:"<<" ";
	for(int i=0;i<=n;i++){
		int next=a+b;
		cout<<next<<endl;
		a=b;
		b=next;
	}

	return 0;
}
