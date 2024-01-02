#include<iostream>
using namespace std;

int main(){
	
	cout<<"start of program"<<endl;
/*	1 
	2 3
	3 4 5
	4 5 6 7 */
	
	int n;
	cin>>n;
	int value ;
	
	int i=1;
	while( i<= n){
		int j = 1;
		value = i;
		while(j<=i){
			
			cout<<value <<" ";  //  or cout<<i+j-1<<
			value++;
			j++;
		}
		cout<<endl;
		i++;
	}
	
	
	return 0;
}
