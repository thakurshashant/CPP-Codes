#include<iostream>
using namespace std;

int main(){
	cout<<"start program "<<endl;
	
/*	1
	2 1
	3 2 1
	4 3 2 1*/ 
	
	int n;
	cin>>n;
	int value;
	
	int i =1;
	while(i<=n){
		value = i;
		int j=1;
		while(j<=i){
			cout<<value <<" "; // cout<<i-j+1
			value--;
			j++;
		}
		cout<<endl;
		i++;
	}
	
	
	return 0;
}
