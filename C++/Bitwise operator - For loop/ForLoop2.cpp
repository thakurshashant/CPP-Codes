#include<iostream>
using namespace std;

int main(){
	cout<<"start of the program"<<endl;
	
	int n;
	cout<<"enter the value of n"<<endl;
	int sum =0;
	cin>>n;
	for( int i=1; i<=n;i++){
		sum = sum +i;
	}
	
	cout<<"the value of the sum is "<<sum;
	
	return 0;
}
