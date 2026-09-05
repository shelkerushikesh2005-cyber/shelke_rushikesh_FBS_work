void Mystrcat(char str1[], char str2[]);

void main()
{
    char str1[50], str2[20];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    Mystrcat(str1, str2);

    printf("Concatenated string = %s", str1);
}

void Mystrcat(char str1[], char str2[])
{
    int i, j;

    for(i = 0; str1[i] != '\0'; i++)
    {
    }

    for(j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }

    str1[i] = '\0';
}