#include<iostream>
using namespace std;

int main(){
	cout<<"start program"<<endl;
	
	int n ;
	cout<<"enter your number"<<endl;
	cin>>n;
	
	if( n == 0 || n ==1 ){
		cout<<"not prime number"<<endl;
	}
	else{
		bool isPrime = true;
		for( int i = 2; i<n; i++){
		
		int value = (n%i);
			
		if(value == 0){
			isPrime = false;		
			break;		
		}
	}
	
	if(isPrime){
		cout<<" prime number"<<endl;
	}else{
		cout<<" not a prime number"<<endl;
	}
					
	}
	
	
	
	
	return 0;
}

