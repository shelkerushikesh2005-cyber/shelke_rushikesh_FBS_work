void main()
{
	char str[20];
	int n,temp;
	printf("Enter string");
	scanf("%s",str);
	n=strlen(str);
	for(int i=0;i<n;i++)
	{
		temp=str[0];
		str[0]=str[n-1];
		str[n-1]=temp;
	}
	printf("The string is %s",str);
}