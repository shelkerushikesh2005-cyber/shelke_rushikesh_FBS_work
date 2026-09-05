void Mystrrev(char str[]);

void main()
{
    char str[20];

    printf("Enter string: ");
    scanf("%s", str);

    Mystrrev(str);

    printf("Reverse string = %s", str);
}

void Mystrrev(char str[])
{
    int i, j;
    char temp;

    for(i = 0; str[i] != '\0'; i++)
    {
    }

    i = i - 1;

    for(j = 0; j < i; j++, i--)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
}