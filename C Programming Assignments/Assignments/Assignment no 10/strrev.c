
void main()
{
	int i;
	char arr[30]={"Hello"};
	char arr1[20]="firstbit";
	printf("Display the string 1\n");
	for(i=0;arr[i]!='\0';i++)
	{
		printf("%c",arr[i]);
		
	}
	printf("\nDisplay the string 2\n");
	for(i=0;arr1[i]!='\0';i++)
	{
		printf("%c",arr1[i]);
		
	}

	strrev(arr);
	printf("\nThe compare string is %s",arr);
}