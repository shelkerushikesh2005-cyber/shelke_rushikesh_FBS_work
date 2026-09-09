void main(){
	int start,end,sum=0;
	
	printf("Enter number");
	scanf("%d%d",&start,&end);
	
	for(int i=start;i<=end;i+=2){
		sum=sum+i;
	}
	printf("Sum is %d",sum);
}