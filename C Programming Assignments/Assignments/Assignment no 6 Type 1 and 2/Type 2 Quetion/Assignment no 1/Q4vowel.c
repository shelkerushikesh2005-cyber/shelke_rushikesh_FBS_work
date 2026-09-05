int vowel();
void main()
{
	int x=vowel();
	if(x==0)
	{
		printf("The given character is vowel");
	}
	else
	{
		printf("Given character is consonant");
	}
}
int vowel()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		return 0;
			
	}
	else
	{
		return 1;
	}
}