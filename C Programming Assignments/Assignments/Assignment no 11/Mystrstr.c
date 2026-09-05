char* Mystrstr(char[], char[]);
void main()
{
    char arr[100] = "hello world";

    char*p=Mystrstr(arr, "world");
    if(p!='\0')
    {
    	printf("Substring is found");
	}
	else
	{
		printf("Substring is not found");
	}

}

char* Mystrchr(char str[], char ch)
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            return &str[i];
        }
    }

    return '\0';
}
