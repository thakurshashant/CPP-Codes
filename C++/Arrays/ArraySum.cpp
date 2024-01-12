#include<iostream>
using namespace std;

int addArray ( int arr[] , int n){
	int sum = 0;
	
	for(int i =0 ;i< n;i++){
		sum = sum +arr[i];
	}
	return sum;
}

int  main(){
	cout<<"start of program"<<endl;
	int size;
	cin>>size;
	
	int arr[1000];
	cout<<"enter the elements"<<endl;
	for(int i=0 ; i<size;i++){
		cin>>arr[i];
	}
	
	cout<<"the sum of all the array elements is "<<addArray(arr, size);
	
	return 0;
}
