#include<iostream>
using namespace std;

int main(){
	cout<<"start of program"<<endl;
	
	int amount = 1330;
	cout<<" number of ";
	int x;
	cout<<"notes"<<endl;
	switch (1){
		case 1 :{
			cout<<"no. of 100 rs notes are"<< (amount/100)<<endl;
			
		}
		case 2:{
			cout<<"no. of 50 rs notes are"<<(amount%100)/50<<endl;
			
		}
		case 3:{
			cout<<"no of 20 rs notes"<<(amount%100)/20<<endl;
			
		}
		case 4:{
			cout<<"no of 1 rs notes"<<10/1<<endl;
			break;
		}
		default : "enter valid details";
		
	}
	
	return 0;
}
