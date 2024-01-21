#include<iostream>
using namespace std;

int getPivot(int arr[] , int n){
	
	int start =0 ;
	int end = n-1;
	int mid = start + (end - start)/2;
	
	while( end >start){
		
		if( arr[mid] >= arr[0]){
			start = mid +1;
		}
		else{
			end= mid;
		}
		mid = start + (end - start)/2;		
	}
	
	return start;	
}

int main(){
	cout<<"start of program"<<endl;
	int arr[5] = { 8 ,10,17,1,3};
	
	cout<<"Value of Pivot index is "<< getPivot(arr, 5) <<endl;
	
	
	
	return 0;
}
