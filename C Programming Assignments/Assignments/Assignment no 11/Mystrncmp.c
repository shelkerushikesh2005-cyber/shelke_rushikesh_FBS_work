int Mystrncmp(char str1[], char str2[], int n);

void main()
{
    char str1[20], str2[20];
    int n, result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    result = Mystrncmp(str1, str2, n);

    if(result == 0)
        printf("Strings are equal");
    else if(result < 0)
        printf("First string is smaller");
    else
        printf("First string is greater");
}

int Mystrncmp(char str1[], char str2[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(str1[i] != str2[i])
            return str1[i] - str2[i];

        if(str1[i] == '\0')
            return 0;
    }

    return 0;
}