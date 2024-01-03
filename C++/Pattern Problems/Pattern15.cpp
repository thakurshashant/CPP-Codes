#include<iostream>
using namespace std;

int main(){
	cout<<"Start of program"<<endl;
	
/*	A 
	B C
	C D E
	D E F G*/
	
	int n;
	cin>>n;
	char ch ='A';
	int i =1;
	
	while(i<=n){
		int j =1;
		while(j<=i){
			cout<<char( ch+i+j-2)<<" ";
			j++;
			
		}
		cout<<endl;
		i++;
	}
	
	
	
	
	return 0;
}
