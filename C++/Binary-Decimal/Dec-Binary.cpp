#include<iostream>
#include<math.h>
using namespace std;

int main(){
	cout<<"Start of program"<<endl;
	
	int n;
	cin>>n;
	
	//Convert into binary 
	int ans =0;
	int i =0;
	
	while(n != 0){
		
		int bit = n&1;  //here number is converted into binary itself
		
		ans = (bit * pow(10,i) ) +ans;
		n = n>>1;
		i++;
	}
	// Negative no. - binary
	
	
	
	cout<<"Answer is"<< ans <<endl;
	return 0;
}
