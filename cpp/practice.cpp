#include <iostream>
using namespace std;
/*
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[100];  // assuming max size is 100

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array:\n";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}

*/


int main(){
	
	int n;
	
	cout<<"ENTER SIZE OF ARRAY :";
	cin>>n;
	
	int arr[n];
	
	for(int i = 0 ;i<n ; i++){
		cin>>arr[i];
	}
	int sum = 0;
	for(int i = 0 ;i<n ; i++){
		if (arr[0]==arr[i]){
			sum++;
		}
		
		
}
cout<<sum;
}



#include <iostream>
using namespace std;
int main(){
	
	int intarr[4];
	
	for(int i = 0; i<4 ; i++){
		cout<<"ENTER 4 ELEMENTS :";
		cin>>intarr[i];
		
	}
	
	 for (int i = 1; i < 4; i++) {

	int max = intarr[0];
	int min = intarr[0];
	
	if(intarr[i]>max){
		max = intarr[i];
	}
	
	if(intarr[i]<min){
		min=intarr[i];
	}
}
	cout<<"MAXIMUM ="<<max;
	cout<<"MINIMUM =" <<min;
	return 0;


