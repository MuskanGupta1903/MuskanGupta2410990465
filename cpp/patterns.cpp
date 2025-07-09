#include <iostream>
using namespace std; //butterfly pattern
/*int main(){
	int n ;
	cout<<"ENTER NUMBER OF ROWS :";
	cin>>n;
	for(int i = 1 ; i<= n ;i++){
		for(int j = 1 ; j<= i ; j++){
			cout<<"*";
		}
		
		
	for(int j = 1 ; j <= 2*(n-i) ; j++) {
			cout<<" ";
		}
		
		for(int j = 1 ; j<= i ; j++){
			cout<<"*";
		}
		cout<<endl;
}


for(int i = n ; i>= 1 ; i--){
	for(int j = 1 ; j<=n ; j++){
		cout<<"*";
	}
	for(int j = 1 ; j <= 2*(n-i) ; j++) {
			cout<<" ";
		}
		
		for(int j = 1 ; j<= i ; j++){
			cout<<"*";
		}
		cout<<endl;
}
	
} */


int main(){
	
	int n ;
	cout<<"ENTER THE NUMBER OF ROWS :";
	
	cin>>n;
	
	for(int i = 0 ; i<n ; i++){
		for(int j = 0; j<n ; j++){
			if(i==0 || i == n-1 || j==0 || j == n-1){
			
			cout<<"*";
		}
		else{
			cout<<" ";
		}
	} cout<<endl;
	
	
} 
return 0;}

*/







