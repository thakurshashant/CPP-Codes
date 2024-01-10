#include<iostream>
using namespace std;

void printCounting( int n){
	
	int s=1;
	for(int i =1;i<=n;i++){
		cout<<i<<" ";
	}
	
}


int main(){
	cout<<"start of program"<<endl;
	
	int n;
	cout<<"enter the number you want to print upto"<<endl;
	cin>>n;
	
	printCounting(n);
	
}
