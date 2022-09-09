i#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 **main-Entry point
 *
 ** Description:assigning the variable n with the value of a random number and then assigning a new variable called number with the last digit of n.
 Then using a if and else statment to outpout different messages for what the result of the last digit will be
 *
 **Return: Always 0 (Success)
 *
 **/

int main(void)

{
		int n;
		int number;
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		number=n % (n/10);
		if(number<6 && number!=0)
		{
		printf("Last digit of %i is %i and is less than 6 and not 0\n",n,number);		}
		else if(number==0)
		{
		printf("Last digit of %i is %i and is 0\n",n,number);
		}
		else if(number>5)
		{
		 printf("Last digit of %i is %i and is greater than 5\n",n,number);
		}
		return (0);

}
