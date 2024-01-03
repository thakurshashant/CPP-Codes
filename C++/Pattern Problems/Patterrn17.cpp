#include<iostream>
using namespace std;

int main(){
	
	cout<<"start program"<<endl;
	
/*	   *
	  **
	 ***       
	****   */
	
	int n;
	cin>>n;
	int i=1;
	
	while(i<=n){
		
		//Print spaces
		int space = n-i;
		while(space){
			cout<<" "<<" ";
			space--;
		}
		
		//Print stars
		int j=1;
		while(j<=i){
			cout<<"*"<<" ";
			j++; 	
		}
		cout<<endl;
		i++;
	}
	return 0;
}
