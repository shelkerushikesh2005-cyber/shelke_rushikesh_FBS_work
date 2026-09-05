int great(int,int,int);
void main()
{
	int a,b,c;
	printf("Enter the number");
	scanf("%d%d%d",&a,&b,&c);
	int x=great(a,b,c);
	if(x==0)
		printf("a is greater");
	else if(x==1)
		printf("b is greater");
	else
		printf("c is greater");
	
}
int great(int a,int b,int c)
{
	if(a>b && a>c)
		return 0;
	else if(b>c && b>a)
		return 1;
	else
		return 2;
}