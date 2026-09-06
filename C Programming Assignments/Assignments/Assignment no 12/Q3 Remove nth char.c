void main()
{
	char str[20];
	char ch;
	printf("Enter string");
	scanf("%s",str);
	int n=strlen(str);
	printf("Enter Charcter");
	scanf(" %c", &ch);
	for(int i=0;i<n;i++)
	{
		if(str[i]==ch)
		{
			for(int j=i;j<n;j++)
			{
			str[j]=str[j+1];
			}
			n--;
			i--;
		}
		
	}
	str[n]='\0';
	printf("The string is %s",str);
}