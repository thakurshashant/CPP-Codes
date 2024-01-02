#include<iostream>
using namespace std;

int main(){
	cout<<"start of the program"<<endl;
	/*	 1 2 3 4
      	 1 2 3 4
		1 2 3 4 
		1 2 3 4*/
		
		int n;
		cin>>n;  // number of rows 
		
		int i = 1;
		while(i <= n){   //1st row 
			int j = 1;
			while (j<= n){   // elements of 1st row
				cout<<j<<" ";
				j++;
			}
			cout<<endl;
			i++;
		}
	
	return 0;
}
