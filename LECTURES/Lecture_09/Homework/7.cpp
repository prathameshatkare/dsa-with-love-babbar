#include <iostream>

using namespace std;
bool search(int arr[],int size,int n){
	
	
	
	for(int i=0;i<size;i++){
		if(n==arr[i])
			return 1;
	}
	return 0;

}



int main() {
	int array[5]={1,2,3,-4,5};
	bool found=search(array,5,-4);
	
	if(found==1){
		cout<<"True"<<endl;
	}
	else cout<<"false"<<endl;
    
   
    return 0;
}
