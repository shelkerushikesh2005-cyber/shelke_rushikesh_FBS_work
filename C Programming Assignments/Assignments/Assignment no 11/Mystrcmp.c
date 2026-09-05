void main()
{
    char str1[20], str2[20];
    int i, result = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if(str1[i] != str2[i])
        {
            result = str1[i] - str2[i];
            break;
        }
    }

    if(result == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
}