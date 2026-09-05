int vowel(char);
void main()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	vowel(ch);
	
}
int vowel(char ch)
{
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("The given character is vowel");
			
	}
	else
	{
		printf("The given character is consonant");
	}
}