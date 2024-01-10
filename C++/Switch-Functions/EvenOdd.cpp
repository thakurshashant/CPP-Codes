#include<iostream>
using namespace std;

//1 -> Even
//0 -> Odd

bool isEven (int a){
	//odd 
	if(a &1){
		return 0;
	}
	return 1;
}

int main(){
	cout<<"start of program"<<endl;
	
	int num;
	cin >>num;
	
	if(isEven(num)){
		cout<<"number is even"<<endl;
	}
	else{
		cout<<"number is odd"<<endl;
	}
	return 0;
}
