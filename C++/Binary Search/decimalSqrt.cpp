#include<iostream>
using namespace std;

long long int sqrtInteger( int x){
            int start = 0;
            int end = x;
            long long int ans=0;
    
            while(end>=start){
            long long int mid = start  + (end-start)/2 ;
            if( mid*mid == x){
            return mid;
             }
            else if( mid*mid > x ){
            end = mid -1;
            }
            else{
            ans = mid;
            start = mid+1;
            }
         }
        return ans;
    }
    
double morePrecision(int n , int precision , int tempSol){
	
	double factor = 1;
	double ans = tempSol;
	
	for(int i =0; i< precision ;i++){
		factor = factor/10;
		//0.1
		//0.01
		//0.001
		for( double j = ans ; j*j < n ; j=j+factor){
			 ans = j;
			
		}		
	}	
	return ans;
}
    
int main(){
		int n;
		cout<<"enter the number"<<endl;
		cin>>n;
		
        int tempSol = sqrtInteger(n);
        cout<<"answer is "<<morePrecision( n ,3 , tempSol);
        
    return 0;
};
