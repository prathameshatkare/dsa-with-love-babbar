#include <iostream>

using namespace std;

int getarray(int arr[],int size){
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	
	
}
int printarray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
	
	
	
}
int maxmin(int arr[],int size){
	
	int maxi;
	int mini;
	for(int i=0;i<size;i++){
		maxi=max(arr[i],arr[i+1]);
	}
	for(int i=0;i<size;i++){
			mini=min(arr[i],arr[i+1]);
	}
	cout<<"maximum number is:"<<maxi<<endl;
	cout<<"minimum number is:"<<mini<<endl;
	
	
}



int main() {
    
    int array[10];
    cout<<"Enter the element of array:"<<endl;
    getarray(array,10);
    cout<<" element of array:"<<endl;
    printarray(array,10);
    maxmin(array,10);
    return 0;
}
