#include "functions.h"

int factorial(int n){
    if (n < 0) {
    	std::cout << " Please Enter the Number greater and equal to zero" << endl;
    	return -1;
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
