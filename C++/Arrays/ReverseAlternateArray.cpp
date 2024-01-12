#include<iostream>
using namespace std;

void alternateReverse(int arr[] ,int n){
	
	for( int i = 0; i< n ; i = i+2){
		if(i+1 < n){
		swap(arr[i] ,arr[i+1]);
	}
	cout<<endl;
	}
	
}
void printReversedArray (int arr[] ,int n){
	cout<<"reversing alternate arrays"<<endl;
	for(int i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	cout<<"start of program"<<endl;
	
	int arr[100],brr[100];
	int size;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	
	cout<<"enter array elements"<<endl;
	for(int i =0; i<size; i++){
		cin>>arr[i];
	}
	
	cout<<"enter another array of 6 elements"<<endl;
	for(int i =0; i<6; i++){
		cin>>brr[i];
	}
	
	alternateReverse(arr ,size);
	alternateReverse(brr ,6);
	printReversedArray(arr,size);
	printReversedArray(brr,6);
	
	return 0;
}
