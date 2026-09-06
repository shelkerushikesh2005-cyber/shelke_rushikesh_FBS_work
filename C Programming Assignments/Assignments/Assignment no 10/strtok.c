
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
	char*p=strtok(arr," ");
	 while(p != '\0')
    {
        printf("%s\n", p);
        p = strtok('\0', " ");
    }
}