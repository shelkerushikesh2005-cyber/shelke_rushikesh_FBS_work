void upper();
void main()
{
	upper();
}
upper()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("The given character is uppercase");
	}
	else
	{
		printf("The given character is lowercase");
	}
}