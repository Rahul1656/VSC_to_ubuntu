#include "./include/mystring.h"
#include "./include/myutils.h"
#include "./include/bitmask.h"
int main()
{
	int i = 0;
	int num ;
    char str[20];
    int n, result;
    int sum;
 
	char dest[20] = "hello,";
	char *s = "world!";
	char d[7];
	int length;

	int n1,k;
 
	length = Mystrlen(s);
	printf("%d\n", length);
 
	Mystrcpy(d, s);
	puts(s);
 
	Mystrcat(dest, s);
	puts(dest);
	
	if(Mystrcmp(dest, s) == 1)
	{
		printf("dest great than s");
	}
	else if(Mystrcmp(dest, s) == -1)
	{
		printf("dest less than s");
	}
	else
	{
		printf("dest equal to s");
	}
//2nd pgm
//factorial call
	printf("Enter a number:");
    scanf("%d",&num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    //prime or not call 
    printf("Enter an integer to check whether it is prime or not:");
    scanf("%d",&n);
    result = check_prime(n);
    if ( result == 1 )
      printf("%d is prime.\n", n);
    else
      printf("%d is not prime.\n", n);
    //palindrome call
    printf("Enter a string:");
    scanf("%s",str);
    isPalindrome(str);  
    
    sum=vsum(3,10,12,18);
    printf("Sum:%d",sum);
    
// 3rd pgm
    printf("Enter the number:");
    scanf("%d",&n1);
    printf("Enter the Kth bit:");
    scanf("%d",&k);
    printf("%d with %d-th bit Set: %d\n",
           n1, k, set(n1, k));
    printf("%d with %d-th bit Cleared: %d\n",
           n1, k, reset(n1, k));
    printf("%d with %d-th bit Toggled: %d\n",
           n1, k, flip(n1, k));

	return 0;
}
