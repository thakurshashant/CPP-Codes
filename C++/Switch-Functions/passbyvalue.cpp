#include<iostream>
using namespace std;

void dummy (int n){
	n++;
	cout<<" n is "<<n<<endl;
	
}

int main(){
	cout<<"start of program"<<endl;
	
	int n ;
	cin>>n;
	dummy(n);
	
	cout<<"number is "<<n<<endl;
	
	
	return 0;
}
