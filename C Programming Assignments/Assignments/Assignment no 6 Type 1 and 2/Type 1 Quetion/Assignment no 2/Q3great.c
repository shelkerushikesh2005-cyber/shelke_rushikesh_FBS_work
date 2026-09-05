void great();
void main()
{
	great();
}
great()
{
	int a,b,c;
	printf("Enter the number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("a is greater");
	else if(b>c && b>a)
	printf("b is greater");
	else
	printf("c is greater");
}