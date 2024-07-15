#include <iostream>

using namespace std;
void swapalternate(int arr[],int size){
	int temp;
	for(int i=0;i<size;i+=2){
		if(i+1<size){
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		
		
	}
}
}
void printarray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}



int main() {
	int array[8]={31,82,36,-4,5,7,8,9};
	swapalternate(array,8);
	cout<<"alternate array is:"<<endl;
    printarray(array,8);
    return 0;
}
