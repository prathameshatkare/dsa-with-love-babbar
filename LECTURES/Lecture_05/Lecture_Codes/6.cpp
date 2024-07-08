#include<bits/stdc++.h>
using namespace std;
int main(){
	int num ;
	cout<<"Enter your number:"<<endl;
	cin>>num;
	int a;
	int a2;
	int sum;
	int product=1;
	int temp=num;
	
	while(temp!=0){
		a=temp%10;
		
		product=product*a;
		sum=sum+a;
		temp=temp/10;
	}
	     
		
	
	cout<<sum<<endl;
	cout<<product<<endl;
	
	
	cout<<"OUR ANSWER IS:"<<product-sum;
	return  0;
}
