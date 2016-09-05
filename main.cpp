#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout << "Enter a number: ";
    int n;
    cin>>n;
    printf("\nThe factorial of %d is %d\n",n,factorial(n));
    return 0;
}
