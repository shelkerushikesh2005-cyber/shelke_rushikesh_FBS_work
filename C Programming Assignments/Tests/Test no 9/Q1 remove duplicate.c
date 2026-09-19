void main(){
	char str[50];
	
	printf("Enter string");
	scanf("%s",&str);
	int size=strlen(str);
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(str[i]==str[j]){
				for(int k=j;k<size-1;k++){
					str[k]=str[k+1];
				}
				size--;
				j--;
			}
		}
	}
str[size]='\0';
	printf("\nAfter removing duplicate elements string is: %s",str);
}