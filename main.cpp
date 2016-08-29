#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    cout<<"Enter a 	number whose factorial you want.\n";
    int n;
    cin>>n;
    if(factorial(n) == -1)
    {
    	cout<<"Please enter a positive number.\n"
    	while(n<0)
    	{
    		cin>>n;
    		if(n<0)
    			cout<<"Please enter a positive number.\n"
    	}

    }
    cout<<"The factorial of "<<n<<" is "<< factorial(n)<< endl;
    return 0;
}
