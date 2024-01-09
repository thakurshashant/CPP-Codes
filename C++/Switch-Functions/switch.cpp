#include<iostream>
using namespace std;

int main(){
	cout<<"start of the program"<<endl;
	
	char ch = '2' ;
	int num = 1;
	
	cout<<endl;
	switch (ch){
		case 1: cout<<"First"<<endl;
			break;
		case '2' : switch (num){
						case 1 : cout<<"value of num is "<< num<<endl;
						break;
		}
 		 
			break;
			
		default: cout<<"it is default case"<<endl;
	}
	
	
	return 0;
}
