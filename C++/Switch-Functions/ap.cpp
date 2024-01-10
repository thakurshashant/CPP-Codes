#include<iostream>
using namespace std;

int ap (int n){
	int ans = ( n*3  + 7);
	return ans;
}

int main(){
	cout<<"start"<<endl;
	
	int n;
	cin>>n;
	
	cout<<"value of nth term of ap is "<<ap(n)<<endl;	
	return 0;
}
