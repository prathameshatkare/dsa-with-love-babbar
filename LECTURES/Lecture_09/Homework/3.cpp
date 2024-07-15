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
	
	int max=INT_MIN;
	int min=INT_MAX;
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"maximum number is:"<<max<<endl;
	cout<<"minimum number is:"<<min<<endl;
	
	
}



int main() {
    
    int array[10];
    cout<<"Enter vthe element of array:"<<endl;
    getarray(array,10);
    cout<<" element of array:"<<endl;
    printarray(array,10);
    maxmin(array,10);
    return 0;
}
