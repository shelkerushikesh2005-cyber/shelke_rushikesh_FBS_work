void main()
{
	char str[10],ch='a';
	int n;
	
	printf("Enter string");
	scanf("%s", str);
	n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(str[i]==ch)
		{
			str[i]='$';
		}
	}
	printf("After replacing string %s",str);
}