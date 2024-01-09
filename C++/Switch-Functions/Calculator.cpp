#include<iostream>
using namespace std;

int main(){
	cout<<"start of program"<<endl;
	
	int num ,a,b,result ;
	cout<<"enter the values of a and b "<<endl;
	cin>>a>>b;
	
	cout<<"Enter what you want to perform"<<endl;
	cout<<" 1. Add \n 2. Sub \n 3. Mul \n 4. Div \n 5. Mod "<<endl;
	cin>> num;
	
	switch( num){
		case 1: {
			result = a+b;
			cout<<"Result is "<<result<<endl;
			break;
		}
		case 2: {
			result = a-b; 
			cout<<"Result is "<<result<<endl; 
			break;
		}
		case 3: {
			result = a*b;
			cout<<"Result is "<<result<<endl; 
			break;
		}
		case 4: {
			result = a/b;
			cout<<"Result is "<<result<<endl; 
			break;
		}
		case 5: {
			result = a%b;
			cout<<"Result is "<<result<<endl;
			break;
		}
	}
	return 0;
}
