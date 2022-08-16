#include <stdio.h>


int main()

{

	float a, b, c;
	
	printf("Enter sides of triangle : \n");
	
	printf("Enter 1st side : ");
	scanf("%f", &a);
		
	printf("Enter 2nd side : ");
        scanf("%f", &b);

	printf("Enter 3rd side : ");
        scanf("%f", &c);

	if(a!=b && b!=c  &&  c!=a)
	{
		printf("The obeserved triangle is a scalene triangle. \n");
	}

	else if(a==b==c)
        {
                printf("The obeserved triangle is equilateral triangle. \n");
        }
	
	  else
        {
                printf("The obeserved triangle is an isosceles triangle.\n");
        }
	return 0;
}
