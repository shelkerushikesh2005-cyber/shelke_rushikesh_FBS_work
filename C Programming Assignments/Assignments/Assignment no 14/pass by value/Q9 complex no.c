struct complex
{
	int real;
	int imaginary;
};
struct complex store(struct complex c);
void display(struct complex c);
void main()
{
	struct complex c;
	c=store(c);
	display(c);
}
struct complex store(struct complex c)
{
	printf("Enter the complex number");
	scanf("%d",&c.real);
	scanf("%d",&c.imaginary);
	return c;
}
void display(struct complex c)
{

	printf("complex number is %d+%di",c.real,c.imaginary);
}

