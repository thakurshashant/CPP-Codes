#include<iostream>
using namespace std;

int main(){
	cout<<"start the program"<<endl;
	
/*	1 2 3 
	4 5 6
	7 8 9	*/
	
	int n;
	cin>>n;
	 
	int i =1,count =1;
	while ( i<=n){
		int j =1;
		while(j<=n){
			cout<<count<<" ";
			count++;
			j++;
		}
		cout<<endl;
		i++;
	} 	
	
	
	
	
	return 0;
}
