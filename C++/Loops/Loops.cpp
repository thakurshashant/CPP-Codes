#include<iostream>
#include<math.h>
using namespace std;

int main(){
	cout<<"start program"<<endl;
	
	// WHILE LOOP 
	
/*	int i=0,n ;
	cout<<"enter the value of n , upto which you want to print the numbers"<<endl;
	cin>>n;
	while(i <= n){
		cout<<i<<" ";
		i++;
	}*/
	
/*	int sum = 0,i = 0 , n;
	cout<<"enter the number upto which you want sum"<<endl;
	cin>>n;
	while(i <= n ){
		sum = sum +i;
		i++;
		
	}
	cout<<"the sum of the numbers upto n is :"<<sum<<endl;*/

    // Sum of N even numbers

/*	int i = 2,sum = 0 ,n;
	cout<<"enter n "<<endl;
	cin>>n;
	while(i<=n){
		if(i%2 == 0){
			sum = sum +i;	
		}
		i++;
	}	
	cout<<"The sum of n even numbers is:"<<sum<<endl;*/
	
/* int  degreeF , degreeC;
	cin>>degreeF;
	degreeC = ((degreeF -32) *5)/9;
	cout<<degreeC; */
	
	//PRIME NUMBER
	
/*	int i  ,n;
	bool isPrime = true;
	cin>> n;
	if(n == 0 || n ==1){
		cout<<"not a prime number"<<endl;
	}
	else {
		for( i = 2  ; i < n ;i++ ){
		if (n % i == 0 ){
			isPrime = false;
			break;
		}
		}
		if(isPrime ){
			cout<<"prime number"<<endl;		
		}
		else{
			cout<<"not a prime number"<<endl;
		}
	} */
	
	return 0;
}
