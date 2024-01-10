#include<iostream>
using namespace std;

int findOne(int n){
	int count = 0;
	
	while( n!= 0){
		int bits = n&1;
		if(bits == 1){
			count++;
		}
		n= n>>1;	
	}
	return count;
}

int setBits(int a ,int b){
	int first = findOne(a);
	int second = findOne(b);
	
return first+second;
}

int main(){
	cout<<"start of program"<<endl;
	
	int a,b;
	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
	
	cout<<"no of one's in a and b is "<<setBits(a,b)<<endl;
	
	return 0;
}
