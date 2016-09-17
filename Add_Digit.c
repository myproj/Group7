#include<iostream.h>
 
int main()
{

   // declare variables to be used
   int n, sum = 0, remainder;
 
   // take user input
   cout << "Enter an integer\n";
   cin >> n;

   // process input    
   while(n != 0)
   {
      remainder = n % 10;
      if(remainder<0 && n<=-10) remainder *= -1;
	  cout << "The Remainder is " << remainder << "\n";
	  sum = sum + remainder;
	  cout << "The Sum is " << sum << "\n";
      n = n / 10;
	  cout << "The n is " << n << "\n";
   }
    
   // output
   cout << "Sum of digits of entered number = "<< sum << "\n";
    
   return 0;
}
