#include<iostream>
using namespace std;


int main(){
	cout<<"start of program "<<endl;
/*	A A A
	B B B
	C C C*/
	
	int n;
	cin>>n;
	
	char ch ='A';
	int i=1;
	
	while(i<=n){
		int j =1;
		while(j<=n){
			cout<< ch<<" ";
			j++;
		}
		cout<<endl;
		ch++;
		i++;
	}
	
	return 0;
}


/*#include<iostream>
using namespace std;


int main(){
	cout<<"start of program "<<endl;
	
	return 0;
}*/
