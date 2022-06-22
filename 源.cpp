
#include<stdio.h>
int main()
{
	int x, y, sum,x1,y1;
	scanf("%d\n%d\n",&x1 ,&y1);
	if (x1 < 0)
		x = -x1;
	else
		x = x1;
	
	if (y1 < 0)
		y = -y1;
	else
		y = y1;
	sum = x + y;
	printf("|%d|+|%d|=%d", x1, y1, sum);
	return 0;
}