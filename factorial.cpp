#include "functions.h"

int factorial(int n){
    while(n <= 0){
	cout << "\nPlease enter the positive number: ";
	cin >> n;
    }	
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
