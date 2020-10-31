#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c;
	float root1, root2, img;
	float discriminant;
	
	printf("Enter coefficients a,b,c for the quadratic equation of the form ax^2+bx+c=0 : ");
	scanf("%f %f %f", &a,&b,&c);
	discriminant = (b*b)-(4*a*c);
	
	switch(discriminant>0)
	{
		case 1:
			root1 = (-b + sqrt(discriminant))/(2*a);
			root2 = (-b - sqrt(discriminant))/(2*a);
			printf("Two distinct real roots: %.2f & %.2f",root1,root2);
			break;
			
		case 0:
			switch (discriminant<0)
			{
				case 1:
					root1=root2= -b/(2*a);
					img = sqrt(-discriminant)/(2*a);
					printf("Roots are imaginary: %.2f+%.2fi, %.2f-%.2fi", root1,img,root2,img);
					break;
					
				case 0:
					root1=root2= -b/(2*a);
					printf("Roots are real and equal: %.2f & %.2f",root1,root2);
			}
			
	}
	return 0;
}
