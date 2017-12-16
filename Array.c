#include <stdio.h>
#include <math.h>
#include <string.h>
void main(){
	float x,c,a,b,q,t,y;
	int i,z,k,h;
	float array[10] = {0};
	link1:
	printf("Type the X number that lies between -1.0 and 1.0: ");
	scanf("%f", & x);
	if (fabs(x)>1.0)
	{
		printf("Wrong X!!! ");
		goto link1;
	}
	printf("Type the value of minimum member: ");
	scanf("%f", & y);
	for (i = 0; i <10; i = i + 1)
	{
		a = -1;
		for (z = 0; z < i + 1; z = z + 1)
		{
			a = a * (-1);
		}
		b = 1;
		for (k = 0; k < (2*i);k = k + 1)
		{
			b = b * x;
		}
		c = 1;
		for (h = 2; h <= i; h = h + 1)
		{
			c = c * h;
		}
		q = -(a*(b/c));
		if (fabs(q) < fabs(y))
		{
			array[i] = q;
			break;
		}
		else 
		{
			array[i] = q;
		}
	}
	printf("This is the array: ");
	printf("\n");
	for (i = 0; i < 10; i = i + 1)
	{
		t = array[i];
		printf("%f", t);
		printf("\n");
	}
}
