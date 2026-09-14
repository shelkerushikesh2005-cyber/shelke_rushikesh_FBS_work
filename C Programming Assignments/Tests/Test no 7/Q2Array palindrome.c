void palindromeArray(int arr[],int);
void main(){
	int arr[50];
	int size;
	int flag=1;
	printf("\nEnter Size of Array");
	scanf("%d",&size);
	printf("\nEnter element in array");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	palindromeArray(arr,size);
}
void palindromeArray(int arr[],int size){
	int flag=1;
	for(int i=0;i<size/2;i++){
		if(arr[i]!=arr[size-1-i]){
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("\nThe Array is palindrome");
	}
	else{
		printf("\nThe Array is not palindrome");
	}
}