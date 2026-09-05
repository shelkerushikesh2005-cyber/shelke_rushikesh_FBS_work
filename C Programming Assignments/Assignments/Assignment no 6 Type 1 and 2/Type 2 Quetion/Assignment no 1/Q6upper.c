int upper();
void main()
{
	int x=upper();
	if(x==0)
	{
		printf("The given character is uppercase");
	}
	else
	{
		printf("The given character is lowercase");
	}
}
int upper()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}