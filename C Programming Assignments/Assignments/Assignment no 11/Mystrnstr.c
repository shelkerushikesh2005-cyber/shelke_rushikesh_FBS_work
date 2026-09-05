char* Mystrnstr(char str1[], char str2[], int n);

void main()
{
    char str1[50], str2[20];
    char *p;
    int n;

    printf("Enter main string: ");
    scanf("%s", str1);

    printf("Enter substring: ");
    scanf("%s", str2);

    printf("Enter n: ");
    scanf("%d", &n);

    p = Mystrnstr(str1, str2, n);

    if(p != '\0')
        printf("Substring found = %s", p);
    else
        printf("Substring not found");
}

char* Mystrnstr(char str1[], char str2[], int n)
{
    int i, j;

    for(i = 0; i < n && str1[i] != '\0'; i++)
    {
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(i + j >= n || str1[i + j] != str2[j])
                break;
        }

        if(str2[j] == '\0')
            return &str1[i];
    }

    return '\0';
}