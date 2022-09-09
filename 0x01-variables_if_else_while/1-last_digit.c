#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */

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
