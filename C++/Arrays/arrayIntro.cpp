#include<iostream>
using namespace std;

int main(){
	cout<<"start of program"<<endl;
	
	//declare
	int number[15];
/*	
	cout<<"value of 0 index"<< number[0]<<endl; 
	
	cout<< endl <<"everything is fine"<< endl <<endl;
	
	int third[15] {2 ,7};
	int n = 15;
	cout<<"printing a array"<<endl;
	for(int i =0 ; i<= n; i++){
		cout<< third[i]<<" ";
	}*/
	cout<<"size of array "<<sizeof(number)/sizeof(int)<<endl;
	
	char ch[5]  = { 'a' , 'b', 'c', 'r'};
	cout<<ch[3]<<endl;
	
	return 0;
}
