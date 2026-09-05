int triangle();
void main()
{
	int x=triangle();
	if(x==0)
	printf("The triangle is equilateral");
	else if(x==1)
	printf("The triangle is isosceles");
	else 
	printf("The triangle is scelene");
}
triangle()
{
	float a,b,c;
	printf("Enter the first side\n");
	scanf("%f",&a);
	printf("Enter the second side\n");
	scanf("%f",&b);
	printf("Enter thrid side\n ");
	scanf("%f",&c);
	if(a==b&&b==c)
		return 0;
	else if(a==b||b==c||a==c)
		return 1;
	else 
		return 2;
}