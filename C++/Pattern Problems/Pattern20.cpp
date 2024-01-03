#include<iostream>
using namespace std;

int main(){
	cout<<"start of prgam"<<endl;
	
/*	1 1 1 1
	  2 2 2 
	    3 3
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
		while(j<=(n-i+1) ){
			cout<<i<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	 
	      
	      
	return 0;     
}
