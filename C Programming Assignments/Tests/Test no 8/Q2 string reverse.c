void stringReverse(char str[]);
void main(){
	char str[50];
	
	printf("Enter string string");
	scanf("%s",&str);
	stringReverse(str);	
}
void stringReverse(char str[]){
	int i,j;
	char temp;
	i=0;
	j=strlen(str)-1;
	while(i<j){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		
		i++;
		j--;
	}
	printf("\n The reverse string is: %s",str);
}