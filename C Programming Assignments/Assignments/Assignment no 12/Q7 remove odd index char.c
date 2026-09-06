void main()
{
	char str[20];
	int n,j=0;
	printf("Enter string");
	scanf("%s",str);
	n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			str[j]=str[i];
			j++;
		}
		str[j]='\0';
	}
	printf("The string is %s",str);
}