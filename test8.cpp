#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a[5] = {1,3,5,7,9};
	
	for(int i = 0; i<5; i++){
		//cout << a[i] << "\t";
		cout << *(a+i) << "\t";
	}
}
