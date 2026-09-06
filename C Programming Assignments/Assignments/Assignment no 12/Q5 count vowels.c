void main()
{
	char str[20];
	int n,count=0;
	printf("Enter the string");
	scanf("%s",str);
	n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		str[i]=='A'||str[i]=='I'||str[i]=='O'||str[i]=='E'||str[i]=='U')
		{
			count++;
		}
	}
	printf("The total number of vowels is %d",count);
}