void main()
{
	char str[20];
	int n,count=1;
	printf("Enter string");
	scanf("%[^\n]",str);
	n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("The total words are %d",count);
}