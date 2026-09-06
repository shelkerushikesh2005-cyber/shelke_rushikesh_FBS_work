void main()
{
	int i;
	char arr[20]={"Hello World"};
	char arr1[20];
	printf("Display the string\n");
	for(i=0;arr[i]!='\0';i++)
	{
		printf("%c",arr[i]);
		
	}
	printf("\n");
	strcpy(arr1,arr);
	printf("The copy string is %s",arr1);
}