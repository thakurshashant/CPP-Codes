#include<iostream>
using namespace std;

//1 -> prime no.
//0 -> not a prime no. 
bool isPrime(int  n){
	
	for(int i =2; i< n;i++){
		//not a  prime no
		if( n%i == 0 ){
			return 0;
		}	
	}
	return 1;	
}

int main(){
	cout<<"start of program"<<endl;
	
	int n;
	cin>>n;
	
	if(isPrime(n)){
		cout<<"prime no."<<endl;
	}
	else{
		cout<<"not a prime no."<<endl;
	}
	return 0;
}
