typedef struct complex
{
	int real;
	int imaginary;
}complex;
void complexStore(complex*);
void complexDisplay(complex*);
void main()
{	complex c;

	printf("Store complex Number");
	complexStore(&c);
	printf("Display complex Number");
	complexDisplay(&c);
}
void complexStore(complex*c)
{
		
		scanf("%d",&c->real);
		scanf("%d",&c->imaginary);
}
void complexDisplay(complex*c)
{
		printf("\n %d+%di",c->real,c->imaginary);
}

