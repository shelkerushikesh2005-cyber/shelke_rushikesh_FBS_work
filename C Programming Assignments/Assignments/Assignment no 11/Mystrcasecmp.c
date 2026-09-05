int Mystrcasecmp(char str1[], char str2[]);

void main()
{
    char str1[20], str2[20];
    int result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    result = Mystrcasecmp(str1, str2);

    if(result == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
}

int Mystrcasecmp(char str1[], char str2[])
{
    int i;

    for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] = str1[i] + 32;

        if(str2[i] >= 'A' && str2[i] <= 'Z')
            str2[i] = str2[i] + 32;

        if(str1[i] != str2[i])
            return str1[i] - str2[i];
    }

    return 0;
}