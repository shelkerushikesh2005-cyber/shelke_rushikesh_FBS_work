void main()
{
	char str1[20],str2[20];
	int n1,n2;
	printf("Enter First string");
	scanf("%s",str1);
	printf("Enter Second string");
	scanf("%s",str2);
	for(int i=0;str1[i]<'\0';i++)
	{
		n1++;
	}	
	for(int i=0;str2[i]<'\0';i++)
	{
		n2++;
	}
	if(n1>n2) printf("First String is greater");
	else if(n2>n1) printf("Second string is Greater");
	else printf("Both strings are equal");
}