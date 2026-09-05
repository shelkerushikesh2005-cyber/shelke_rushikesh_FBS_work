char* Mystrrchr(char[], char);
void main()
{
	char arr[100] = "HELLO_WORLD";
	printf("Find character is: %s", Mystrrchr(arr, 'L'));
}
char* Mystrrchr(char str[], char ch)
{
    int i;
    char *last = '\0';

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            last = &str[i];
        }
    }

    return last;
}