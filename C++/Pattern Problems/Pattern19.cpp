#include<iostream>
using namespace std;

int main(){
	cout<<"Start of program"<<endl;
	
/*	****
	 ***
	  **
	   * */
	int n;
	cin>>n;
	
	int i =1;
	while(i<=n){
		//Spaces
		int space = 1;
		while(space <= (i-1)){
			cout<<" "<<" ";
			space++;
		}
		
		//Star
		int j =1;
		while( j<= (n-i+1)){
			cout<<"*"<<" ";
			j++;
						
		}
		
		cout<<endl;
		i++;
		
	}
	
	
	return 0;
}
