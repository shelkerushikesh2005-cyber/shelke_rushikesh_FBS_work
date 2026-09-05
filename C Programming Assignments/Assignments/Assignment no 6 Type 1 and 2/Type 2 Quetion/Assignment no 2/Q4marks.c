int marks();
void main()
{
	int x=marks();
	if(x==0)
	printf("Distinction");
	else if(x==1)
	printf("First class");
	else if(x==2)
	printf("Second class");
	else if (x==3)
	printf("Pass class");
	else
	printf("Fail");
}
marks()
{
	int mark;
	printf("Enter the marks");
	scanf("%d",&mark);
	if(mark>=75)
	return 0;
	else if(mark>=65 && mark<75)
	return 1;
	else if(mark>=55 && mark<65)
	return 2;
	else if (mark>=40)
	return 3;
	else
	return 4;
}