int Mystrcmp(char str1[], char str2[]);

void main()
{
    char str1[20], str2[20];
    int result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    result = Mystrcmp(str1, str2);

    if(result == 0)
        printf("Strings are equal");
    else if(result < 0)
        printf("First string is smaller");
    else
        printf("First string is greater");
}

int Mystrcmp(char str1[], char str2[])
{
    int i;

    for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if(str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
    }

    return 0;
}