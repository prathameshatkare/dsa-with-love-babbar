#include <iostream>

using namespace std;
void reverse(int arr[],int size){
	for(int i=0;i<size;i++,size--){
		swap(arr[i],arr[size-1]);
	}
}
void printarray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}



int main() {
	int array[5]={31,82,36,-4,5};
	reverse(array,5);
	cout<<"reversed array is:"<<endl;
    printarray(array,5);
    return 0;
}
