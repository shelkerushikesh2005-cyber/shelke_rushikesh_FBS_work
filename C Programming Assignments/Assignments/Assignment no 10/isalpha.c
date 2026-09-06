void main()
{
	int i,flag=1;;
	char arr[20]="hello";
	
	for(int i=0;arr[i]!='\0';i++)
	{
		if(isalpha(arr[i])==0)
		{
			flag=0;
			break;
		}
	}
	printf("The string only alphabets or not: %d",flag);
}