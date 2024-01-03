#include<iostream>
using namespace std;

int main(){
	cout<<"start of the program"<<endl;
	
/*	1 2 3 4 
	  2 3 4
	    3 4
	      4*/
	      
	int n;
	cin>>n;
	
	int i=1;
	
	while(i<=n){
		
		//Print spaces
		int space = 1;
		while(space <= (i-1)){
			cout<<" "<<" ";
			space++;
		}
		
		//Print numbers
		int j =1;
		while(j<= (n-i+1)){
			cout<<i+j-1<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}	      
	
	
	
	
	return 0;
}
