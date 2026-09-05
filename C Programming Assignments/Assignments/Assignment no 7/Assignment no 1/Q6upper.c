int upper(char*);
void main()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	upper(&ch);

}
int upper(char *ch)
{
	
	if(*ch>='A' && *ch<='Z')
	{
		printf("The given character is uppercase");
	}
	else
	{
		printf("The given character is lowercase");
	}
}