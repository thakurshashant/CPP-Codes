#include<iostream>
using namespace std;

int main(){
	cout<<"start of program"<<endl;
	
	int num =1;
	
		switch (num){
			case 1 : cout<<" case matched "<<endl;
			continue ;   // continue -- this command is not used in switch case
			case 2 : cout<<"second case"<<endl;
			break;
			
		}
	
	return 0;
}
