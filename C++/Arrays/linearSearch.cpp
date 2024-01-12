#include<iostream>
using namespace std;

int findNumber( int arr[] , int n){
	bool istrue = false;
	for(int i =0; i<n ;i++){
		
		if(arr[i]  == 1){
			istrue = true;
		}

	}
	if(istrue ==  true){
		cout<<"1 is present"<<endl;	
	}
	else{
		cout<<"1 is not present"<<endl;
	}
	return 0;
}

int main(){
	cout<<"start of program"<<endl;
	
	int size ;
	
	int arr[10] = { 5 , 7 -2 ,10 ,22 ,-2 ,0 , 5, 22,10 };
	size=10;
	//find whether 1 is present or not
	
	findNumber(arr, size);
	
	return 0;
}
