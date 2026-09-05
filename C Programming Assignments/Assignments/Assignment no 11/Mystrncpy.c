#include <stdio.h>

void Mystrncpy(char str1[], char str2[], int n);

void main()
{
    char str1[20], str2[20];
    int n;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    Mystrncpy(str2, str1, n);

    printf("Copied string = %s", str2);
}

void Mystrncpy(char str2[], char str1[], int n)
{
    int i;

    for(i = 0; i < n && str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';
}