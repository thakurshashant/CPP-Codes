#include<iostream>
using namespace std;


int main(){
	cout<<"start of program "<<endl;
/*	A B C
	D E F
	G H I  */
	
	int n;
	cin>>n;
char ch = 'A';	
	
	int i =1;
	while(i<=n){
		
		int j =1;
		while(j<=n){
			cout<<ch <<" ";
			ch++;
			j++;
		}
		cout<<endl;
		i++;
		
	}
	return 0;
}
