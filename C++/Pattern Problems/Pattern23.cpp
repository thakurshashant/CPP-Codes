#include<iostream>
using namespace std;

int main(){
	cout<<"start of prgam"<<endl;
	
/*	      1
	    2 2 
	  3 3 3
	4 4 4 4*/
	 
	int n;
	cin>>n;
	
	int i=1;
	int count =1;
	while(i<=n){
		//Print spaces
		
		int space = 1;
		
		while(space <= (n-i)){
			cout<<" "<<" ";
			space++;
		}
		
		//Print numbers
		
		
		int j =1;
		while(j<= i){
			cout<<count<<" ";
			count++;
			j++;
		}
		cout<<endl;
		i++;
	}
	 
	      
	      
	return 0;     
}
