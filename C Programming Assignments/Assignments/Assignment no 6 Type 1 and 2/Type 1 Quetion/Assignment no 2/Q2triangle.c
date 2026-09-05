void triangle();
void main()
{
	triangle();
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
	printf("The triangle is equilateral");
	else if(a==b||b==c||a==c)
	printf("The triangle is isosceles");
	else 
	printf("The triangle is scelene");
}