void Mystrupr(char[]);
void main()
{
    char arr[100] = "hello world";

    Mystrupr(arr);
    printf("String is %s", arr);
}
void Mystrupr(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}