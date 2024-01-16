#include<iostream>
using namespace std;

int binarySearch( int arr[] , int size, int key){
	int start = 0;
	int end = size-1;
	int mid  = start + (end -start)/2;
	
	while(end >= start){
		
		if(key == arr[mid]){
			return mid;
			
		}
		else if( key > arr[mid]){
			start = mid+1;
			
		}
		else{
			end = mid -1;
			
		}
		 mid  = start + (end -start)/2;
	}
	return -1;
}

int main(){
	cout<<"start of program"<<endl;
	
	int even[6] = {2,4,6,8,12, 14};
	int odd[5] = {3 ,8,11,14,16};
	
	cout<<"enter the key you want to find out"<<endl;
	int key;
	cin>>key;
	

	int ans1 =	binarySearch(even , 6 , key);
	int ans2 = binarySearch(odd , 5 ,key);
	
	cout<<"index of even "<<key<<" is : "<<ans1<<endl;
	cout<<"index of odd "<<key<<" is : "<<ans2;
	
	return 0;
}
