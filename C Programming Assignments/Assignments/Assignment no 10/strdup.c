
void main()
{
	int i;
	char arr[30]="Hello ";
	char *arr1;
	printf("Display the string 1\n");
	for(i=0;arr[i]!='\0';i++)
	{
		printf("%c",arr[i]);
		
	}

	
	arr1=strdup(arr);
	printf("\nThe string is %s",arr1);
	free(arr1);
}