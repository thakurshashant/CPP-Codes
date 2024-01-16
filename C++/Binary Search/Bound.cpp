#include<iostream>
using namespace std;

int firstOcc(int arr[] ,int n , int key){
	
	int s =0 ; int e = n-1;
	int mid = s + (e-s)/2;
	int ans = -1;
	while( e >=s ){
		int mid = s + (e-s)/2;
		if(arr[mid] == key){
			ans = mid;
			e = mid -1;
		} 
		else if(arr[mid] < key){
			s = mid +1;
		}
		else{
			e = mid -1;
		}
		mid = s + (e-s)/2;	
	}
	return ans;
}


int lastOcc(int arr[] ,int n , int key){
	
	int s =0 ; int e = n-1;
	int mid = s + (e-s)/2;
	int ans = -1;
	while( e >=s ){
		
		if(arr[mid] == key){
			ans = mid;
			s = mid +1;
		} 
		else if(arr[mid] < key){
			s = mid +1;
		}
		else{
			e = mid -1;
		}
		mid = s + (e-s)/2;	
	}
	return ans;
}

int main(){
	cout<<"start of program"<<endl;
	cout<<"enter the  value of key"<<endl;
	int key ;
	cin>>key;
	int even[5] = { 1,2,3,3,5};
	cout<<"first occurenece of "<<key<<" is "<<firstOcc(even , 5 , key)<<endl;
	cout<<"last occurenece of "<<key<<" is "<<lastOcc(even , 5 , key);
		
	
	
	return 0;
}
