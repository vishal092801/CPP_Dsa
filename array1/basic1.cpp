#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printArray(int arr[], int size) {
	for(int i=0; i<size; i++) {
		cout << arr[i] << ", ";
	}//cout << endl;
}

//function to print twice of the original value 
void printTwice(int arr[] , int size) {
	for(int i=0; i<=size-1; i++) {
		cout << (2*arr[i]) <<", ";
	}
}

void printEvenOdd(int arr[] , int size ) {
	for(int i=0; i<size; i++) {
		int number = arr[i];
		
		if(number %2 == 0 ){
			cout << "Even ";
		}
		else {
			cout << "Odd ";
		}
	}
}

void countZeroOnes(int arr[] , int size) {
	int totalZero = 0;
	int totalOne = 0;
	for(int i=0; i<size; i++) {
		int number = arr[i];

		if(number == 0) {
			totalZero++;
		}
		else if(number == 1) {
			totalOne++;
		}
	}
	cout << "Total Zero : " << totalZero << endl;
	cout << "total Ones : " << totalOne << endl;
}

int main() {   

	int arr[10] = {1,1,0,1,0};
	int size = 5;
	//int capacity = 10;

	///function call 
	//printArray(arr, size);
	//printTwice(arr,size);
	//printEvenOdd(arr,size);
	countZeroOnes(arr,size);


	
	// int arr[10];
	// cout << arr ;
	// cout << "Enter the value of n, (n= number of values to take input for)" << endl;
	// int n ;
	// cin >> n; 

	// for(int i=0; i<n; i++) {
	// 	cout << "Taking input for index: " << i << endl;
	// 	cin >> arr[i] ;
	// }

	// cout << "Printing the array " << endl;
	// for(int i=0; i<10; i++) {
	// 	cout << arr[i] << ", ";
	// }
	// cout << endl;

	return 0;
}