void main()
{
	char str[20];
	char original[20];
	printf("Enter string");
	scanf("%s",str);
	strcpy(original,str);
	char *rev=strrev(str);
	printf("%s",rev);
	if(strcmp(original,rev)==0)
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not palindrome");
	}
}