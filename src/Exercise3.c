/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	//Your codes here
	int n=testcase;

	if (n>=2)
	printf("%d ",2);
	for (int i=3;i<n;i+=2)
	{
		int delta,SquareRoot=(int)sqrt(n);
		for (int j=2;j<=SquareRoot;j++)
			{
				if (n%j==0)
				delta=0;
			}
		delta=1;
	if (delta==1)
		{
			printf("%d ",i);}
		}
	
}
