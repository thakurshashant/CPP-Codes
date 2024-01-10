#include<iostream>
using namespace std;

int factorial (int n){
	
	int fact =1;
	for (int i =1 ;i<=n; i++){
		fact = fact *i;
	}
	return fact ;	
}

int nCr(int n, int r){
	
	int ans = factorial(n)/( factorial(n-r) * factorial(r)) ;
	return ans;
}


int main(){
	cout<<"start of program"<<endl;
	int a,b;
	
	cout<<"enter the value of n"<<endl;
	cin>>a;
	cout<<"enter value r"<<endl;
	cin>>b;
	
	cout<<"value of factorial is "<<nCr(a,b)<<endl;
	return 0;
}
