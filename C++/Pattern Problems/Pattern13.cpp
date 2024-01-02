#include<iostream>
using namespace std;

int main(){
	
	cout<<"start of program "<<endl;
/*	A B C
	B C D
	C D E */
	
	int n;
	cin>>n;
	
	char ch ='A';
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<char(ch+i+j-2)<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	
	return 0;
}
