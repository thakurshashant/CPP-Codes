#include<iostream>
using namespace std;

int main(){
	cout<<"Start of program"<<endl;
	
/*	   1
	  121
	 12321
	1234321   */
	
	int n;
	cin>>n;
	int i =1;


	
	while(i<=n){
		int spaces=1 ;
		//print spaces
		while(spaces <= (n-i)){
			cout<<" "<<" ";
			spaces++;
			
		}	
		
		//print 1st triangle
		int j =1;
		while(j<=i){
			cout<<j<<" ";
			j++;
		}
		//print second triangle
	
		int value= (i-1);
		while(value){
			cout<<value<<" ";
			value--;
		}
		
		cout<<endl;
		i++;
		
		
	}
	
	return 0;
}
