#include<iostream>
using namespace std;

void reverse(int arr[] ,int n){
	int start = 0;
	int end = n-1;
	
	while(end >= start){
		swap(arr[start] ,arr[end]);
		start++;
		end--;
	}
	

}
void printArray(int arr[] , int n){
	cout<<"printing reversed array"<<endl;
	for(int i =0 ;i<n ;i++){
		cout<<arr[i]<<" ";
	}	
	cout<<endl;
}

int main(){
	cout<<"start of program"<<endl;
	
	int size;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	
	int arr[100] ,brr[100];
	cout<<"enter an array"<<endl;
	for(int i =0; i<size; i++){
		cin>>arr[i];
	}
	cout<<"enter another array"<<endl;
	for(int i =0; i<7; i++){
		cin>>brr[i];
	}
	
	reverse(arr ,size);
	reverse(brr,7);
	printArray(arr,size);
	printArray(brr,7);
	
	return 0;
}
