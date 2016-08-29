#include "functions.h"

int factorial(int n){
	if(n<0)
	{
		std::cout<<"Please re-enter a posititve number"
		return -1;
	}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
