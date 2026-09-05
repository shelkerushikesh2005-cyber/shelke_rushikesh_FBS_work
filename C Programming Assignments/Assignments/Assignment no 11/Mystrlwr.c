void Mystrlwr(char[]);
void main()
{
    char arr[100] = "HELLO WORLD";

    printf("The length of string:\n");
    Mystrlwr(arr);
    printf("String is %s", arr);
}
void Mystrlwr(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}
