#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    int n = -1;
    while(n<0) {
    	cout << "Enter a number: ";
    	cin >> n;
    }	
    cout<<"The factorial of " << n << "is "<< factorial(n)<< endl;
    return 0;
}
