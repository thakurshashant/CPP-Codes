#include <bits/stdc++.h> 
using namespace std;


void bubbleSort(int arr[], int n)
{   
    for(int i = 1 ;i<n ; i++){
    	
    	bool sorted = false;
    	
   	for( int j = 0 ; j< n-i; j++){
     if (arr[j] > arr[j + 1]) {
       swap(arr[j], arr[j + 1]);
       sorted = true;
     }
   }
   
   
   if( sorted == false){
   	break;
   }
    
	}
	}
	
    

int main(){
	cout<<"start of the program"<<endl;
	
	int arr[10];
	cout<<"Enter the element of the arrays"<<endl;
	
	for(int i =0; i<10 ;i++){
		cin>>arr[i];
	}
	
	bubbleSort(arr, 10);
	
	return 0;
}

