#include<iostream>
using namespace std;

int power(){
	int a ,b;
	cin>>a>> b;
	int ans =1;
	for(int i =1; i<=b; i++){
		ans = ans *a ;
	}
	return ans;
}


int main(){
	cout<<"start of program"<<endl;
	
/*	int a,b;
	cin>> a >>b;
	int answer = power (a,b);
	cout<<"answer is :"<<answer << endl;

	int c,d;
	cin>> c >>d;
	int answer = power (c,d);
	cout<<"answer is :"<<answer << endl;	 */
	
	int answer = power();
	cout<<"answer is "<<answer <<endl;
	
	int ans2 = power();
	cout<<"answer is "<<ans2 <<endl;
	
	int ans3 = power();
	cout<<"answer is "<<ans3<<endl;
	
	return 0;
}
