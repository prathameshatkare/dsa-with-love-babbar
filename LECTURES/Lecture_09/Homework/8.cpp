#include <iostream>

using namespace std;
void reverse(int arr[],int size){
	for(int i=size-1;i>=0;i--){
		cout<<arr[i]<<endl;
	}
}



int main() {
	int array[5]={1,2,3,-4,5};
	reverse(array,5);
   
    return 0;
}
