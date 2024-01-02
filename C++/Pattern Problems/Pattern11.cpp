#include<iostream>
using namespace std;


int main(){
	cout<<"start of program "<<endl;
/*	A B C
	A B C
	A B C  */
	
	int n;
	cin>>n;
	
	
	int i =1;
	while(i<=n){
		char ch = 'A';
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
