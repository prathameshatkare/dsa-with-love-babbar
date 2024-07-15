#include <iostream>

using namespace std;
int addition(int arr[],int size){
	int sum=0;
	
	
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	return sum;
}



int main() {
	int array[5]={1,2,3,-4,5};
	cout<<addition(array,5);
    
   
    return 0;
}
