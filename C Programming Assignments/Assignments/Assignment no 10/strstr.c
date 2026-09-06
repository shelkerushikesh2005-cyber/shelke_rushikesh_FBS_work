void main()
{
	int i;
	char arr[20]={"Hello World"};
	printf("Display the string\n");
	for(i=0;arr[i]!='\0';i++)
	{
		printf("%c",arr[i]);
		
	}
	printf("\n");
	char*p=strstr(arr,"World");
	printf("The upper case string is: %s",p);
}