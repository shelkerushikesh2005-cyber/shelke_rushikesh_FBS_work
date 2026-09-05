int triangle(int,int,int);
void main()
{
	int a,b,c;
	printf("Enter the first side\n");
	scanf("%f",&a);
	printf("Enter the second side\n");
	scanf("%f",&b);
	printf("Enter thrid side\n ");
	scanf("%f",&c);
	int x=triangle(a,b,c);
	if(x==0)
		printf("The triangle is equilateral");
	else if(x==1)
		printf("The triangle is isosceles");
	else 
		printf("The triangle is scelene");
	
}
int triangle(int a,int b,int c)
{
	if(a==b&&b==c)
		return 0;
	else if(a==b||b==c||a==c)
		return 1;
	else 
		return 2;
}