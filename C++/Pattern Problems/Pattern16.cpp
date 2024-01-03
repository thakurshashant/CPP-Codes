#include<iostream>
using namespace std;

int main(){
	cout<<"Start of the program"<<endl;
	
/*	D
	C B
	B C D
	A B C D */
	
	int n;
	cin>>n;
	 char ch = 'A';
	int i =1;
	while(i <= n){
		int j = 1;
		while(j <= i){
			cout<<char (ch+n+j-i-1 )<<" "; // ch+i-a
			j++;
			
		}
		cout<<endl;
		i++;
	}
	
	return 0;
}
