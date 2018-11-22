#include <iostream>
using namespace std;



int main(){
	int max1(int, int);  //ÉùÃ÷ 
	
	int x, y;
	cin >> x >> y;
	int z = max1(x,y); 
	cout << "max=" << z;	
	
	
	
} 	

int max1(int a, int b){
	return (a>b) ? a:b;
}
