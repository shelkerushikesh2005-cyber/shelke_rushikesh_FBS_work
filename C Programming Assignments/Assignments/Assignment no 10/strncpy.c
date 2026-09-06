void main()
{
	int i;
	char arr[20]="Hello";
	char arr1[20]="firstbit";
	printf("Display the string\n");
	for(i=0;arr[i]!='\0';i++)
	{
		printf("%c",arr[i]);
		
	}
	printf("\n");
	strncpy(arr,arr1,3);
	printf("The copy string is %s",arr);
}