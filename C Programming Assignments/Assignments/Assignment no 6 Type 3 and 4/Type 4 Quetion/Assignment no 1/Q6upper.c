int upper(char);
void main()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	int x=upper(ch);
	if(x==0)
	{
		printf("The given character is uppercase");
	}
	else
	{
		printf("The given character is lowercase");
	}

}
int upper(char ch)
{
	
	if(ch>='A' && ch<='Z')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}