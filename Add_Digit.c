#include<iostream.h>
 
int main()
{
<<<<<<< HEAD
   // declare variables to be used
   int n, sum = 0, remainder;
 
   // take user input
   cout << "Enter an integer\n";
   cin >> n;

   // process input    
   while(n != 0)
   {
      remainder = n % 10;
	  cin << "The Remainder is " << remainder << "\n";
=======
   // declare variables
   int n, sum = 0, remainder;
   
  // take input
   printf("Enter an integer\n");
   scanf("%d",&n);
   
   // process 
   while(n != 0)
   {
      remainder = n % 10;
      if(remainder<0 && n<=-10) remainder *= -1;
	  printf("The Remainder is %d\n", remainder);
>>>>>>> old
      sum = sum + remainder;
	  cout << "The Sum is " << sum << "\n";
      n = n / 10;
	  cout << "The n is " << n << "\n";
   }
<<<<<<< HEAD
 
   // output
   cout << "Sum of digits of entered number = "<< sum << "\n";
=======
   
   // output result 
   printf("Sum of digits of entered number = %d\n",sum);
>>>>>>> old
 
   return 0;
}
