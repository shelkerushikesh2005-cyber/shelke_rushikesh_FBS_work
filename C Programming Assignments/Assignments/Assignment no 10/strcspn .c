
void main()
{
	int i;
	char arr[30]="Hello World";
	char arr1[20]=" ";
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

	int p=strcspn(arr, arr1);
	printf("\nThe string is %d",p);
}