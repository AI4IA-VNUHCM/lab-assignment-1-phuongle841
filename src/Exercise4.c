/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
	int Row=height,i,j;
	for (i=1;i<=Row;i++)
	{
		for (j=i;j<Row;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(i==Row||j==1||j==(2*i-1))
			{
				printf("*");
			}			
		else 
			{
				printf(" ");
			}
		}
	printf("\n");	
	}
	return 0;
}