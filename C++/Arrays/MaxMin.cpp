#include<iostream>
using namespace std;

int getMax( int num[] , int n ){
	
	int maxi= INT_MIN;
	for ( int i =0; i<n ; i++){
		//inbuilt maximum function
		maxi = max(maxi , num[i]);		
//		if(num[i] > maxi){
//			maxi =num[i];
		
	}

	//return maximum value
	return maxi;
} 

int getMin( int num[] , int n ){
	
	int mini = INT_MAX;
	for ( int i =0; i<n ; i++){
		mini = min(mini , num[i]);
		
/*		if(num[i] < min){
			min = num[i];
		}*/
	}
	//return minimum value
	return mini;
}

int main(){
	int size;
	cin>>size;
	
	int num[100];
	
	//taking input in array
	for(int i =0 ; i<size; i++){
		cin>>num[i];
	}
	
	cout<<"maximum value is "<< getMax(num,size)<<endl;
	cout<<"minimum value is "<< getMin(num,size)<<endl;
	
	return 0;
}
