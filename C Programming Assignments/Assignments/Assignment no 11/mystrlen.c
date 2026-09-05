int Mystrlen(char[]);
void main()
{
    char arr[100] = "HELLO WORLD";

    printf("The length of string:\n");
    int x = Mystrlen(arr);
    printf("String is %d", x);
}
int Mystrlen(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}