void marks(int);
void main()
{
	int mark;
	printf("Enter the marks");
	scanf("%d",&mark);
	marks(mark);
	
}
void marks(int mark)
{
	
	if(mark>=75)
	printf("Distinction");
	else if(mark>=65 && mark<75)
	printf("First class");
	else if(mark>=55 && mark<65)
	printf("Second class");
	else if (mark>=40)
	printf("Pass class");
	else
	printf("Fail");
}