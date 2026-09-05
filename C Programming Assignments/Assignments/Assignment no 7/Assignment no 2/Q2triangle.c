void triangle(int*,int*,int*);
void main()
{
	int a,b,c;
	printf("Enter the first side\n");
	scanf("%f",&a);
	printf("Enter the second side\n");
	scanf("%f",&b);
	printf("Enter thrid side\n ");
	scanf("%f",&c);
	triangle(&a,&b,&c);
	
}
void triangle(int *a,int *b,int *c)
{
	if(*a==*b&&*b==*c)
		printf("The triangle is equilateral");
	else if(*a==*b||*b==*c||*a==*c)
		printf("The triangle is isosceles");
	else 
		printf("The triangle is scelene");
}