#include "../include/myutils.h"

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int check_prime(int a)
{
   int c;
 
   for ( c = 2 ; c <= a - 1 ; c++ )
   { 
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
  
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome\n", str);
            return;
        }
    }
    printf("%s is palindrome\n", str);
}
int vsum(int num, ...)
{
    va_list valist;
  
    int sum = 0, i;
  
    va_start(valist, num);
    for (i = 0; i < num; i++) 
        sum += va_arg(valist, int);
  
    va_end(valist);
  
    return sum;
}