#include<iostream>
using namespace std;

int main(){
	cout<<"start of program"<<endl;
	
	int a =3;
	cout<< a<<endl;
	
	if(true){
		int  b =5;  //scope in if block only
		cout<<b<<endl;
	}
	int b =1;  //scope in main block
	cout<<b<<endl;
	
	
	return 0;
}
