char* Mystrchr(char[], char);
void main()
{
    char arr[100] = "hello world";

    char*p=Mystrchr(arr, 'l');
    printf("Find character is: %s",p);
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
