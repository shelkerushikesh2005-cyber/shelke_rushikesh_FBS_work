void Mystrncat(char str1[], char str2[], int n);

void main()
{
    char str1[50], str2[20];
    int n;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    Mystrncat(str1, str2, n);

    printf("Concatenated string = %s", str1);
}

void Mystrncat(char str1[], char str2[], int n)
{
    int i, j;

    for(i = 0; str1[i] != '\0'; i++)
    {
    }

    for(j = 0; j < n && str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }

    str1[i] = '\0';
}