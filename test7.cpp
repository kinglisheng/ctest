#include <iostream>
using namespace std;

void fib(int n){
	if(n<2){
		cout << "ERROR!" << endl;
		return;
	}
	int arr[100];
	arr[0] = 1;
	arr[1] = 1;
	for(int i = 2; i < n; i++){
		arr[i] = arr[i-1] + arr[i-2];		
	}
	for(int i= 0; i<n; i++){
		cout << arr[i] << "\t";
	}
	
}

int fib1(int n){
	int fib;
	if (n==0 || n==1){
		return 1;
	}else{
		return fib1(n-1) + fib1(n-2);
	}	
}

int main(){
	
	fib(10);
	
	/*
	for(int i = 0;i<10; i++){
		cout <<	fib1(i) << "\t";	
	}*/
	
}
