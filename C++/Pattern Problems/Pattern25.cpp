#include<iostream>
using namespace std;

int main(){
	cout<<"start program"<<endl;
	
/*	1 2 3 4 5 5 4 3 2 1
	1 2 3 4 * * 4 3 2 1
	1 2 3 * * * * 3 2 1
	1 2 * * * * * * 2 1
	1 * * * * * * * * 1	 */
	
	int n;
	cin>>n;
	
	int i =1;
	while(i<=n){
		//1st triangle
		int j =1;
		while(j<= (n-i+1)){
			cout<<j<<" ";
			j++;
		}
		//2nd triangle
		int star = 1;
		while(star<= i-1){
			cout<<"*"<<" ";
			star++;
		}
		//3rd triangle
		int star2 = 1;
		while(star2<= (i-1)){
			cout<<"*"<<" ";
			star2++;
		}   
		//4th traingle
		int value = (n-i+1);
		while(value >=1){
			cout<<value<<" ";
			value--;
		}
		
		cout<<endl;
		i++;
	}	
	
	
	return 0;
}
