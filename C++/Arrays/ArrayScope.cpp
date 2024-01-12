#include<iostream>
using namespace std;

void update( int arr[] , int n){  //here address of array is taken.
	
	cout<<"Inside the function"<<endl;
	
	//updating the array
	arr[2] =120;
	
	//printing the array
	for(int i =0; i<3; i++){
		cout<< arr[i]<<" ";
		
	}cout<<endl;
	
	
	cout<<"going back to main function"<<endl;
}

int  main(){
	cout<<"start of program"<<endl;
	
	int arr[3] = { 1 ,2,3};
	
	update(arr , 3);   // here the address of first block gets transferred to function
	
	//printing the array
	for (int i =0 ; i<3; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
