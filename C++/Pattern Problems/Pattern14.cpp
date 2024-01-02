#include<iostream>
using namespace std;

int main(){
	cout<<"start of the program"<<endl;
	
/*	A
	B B
	C C C*/
	
	int n;
	cin>>n;
	char ch ='A';
	int i =1;
	
	while(i<=n){
		
		int j =1;
		while(j<=i){
			cout<<ch<<" ";
			j++;
		}
		cout<<endl;
		ch++;
		i++;
	}
	
	
	return 0;
}
