void main()
{
	char str[20];
	int n;
	printf("Enter string");
	scanf("%[^\n]",str);
	n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(str[i]==' ')
		{
			str[i]='$';
		}
	}
	printf("The string is %s",str);
}