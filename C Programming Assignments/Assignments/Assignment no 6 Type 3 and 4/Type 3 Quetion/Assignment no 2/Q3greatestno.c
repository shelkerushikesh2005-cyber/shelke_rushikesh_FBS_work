void great(int,int,int);
void main()
{
	int a,b,c;
	printf("Enter the number");
	scanf("%d%d%d",&a,&b,&c);
	great(a,b,c);
	
}
void great(int a,int b,int c)
{
	if(a>b && a>c)
	printf("a is greater");
	else if(b>c && b>a)
	printf("b is greater");
	else
	printf("c is greater");
}