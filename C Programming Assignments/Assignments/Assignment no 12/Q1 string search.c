void main()
{
	char str[10],ch;
	int n,flag=0;
	printf("Enter string:");
	scanf("%s",str);	
	printf("Enter character");
	scanf(" %c", &ch);
	n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(str[i]==ch)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Character is found");
	}
	else
	{
		printf("Character is not found");
	}
}