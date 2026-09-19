void main(){
	char userid[20];
	char password[30];
	int randomNumber;
	int num;
	
	printf("Enter userid");
	scanf("%s",userid);
	printf("\nEnter password");
	scanf("%s",password);
	
	if(strcmp(userid,"rushi123")==0 && strcmp(password,"12345")==0){
		srand(time(0));
		randomNumber=1000+rand()%9000;
		printf("For verifing userid and password enter the number %d\n",randomNumber);
		scanf("%d",&num);
		if(num==randomNumber){
			printf("\nYour verification successful verified");
		}
		else{
			printf("\nYour verification failed");
		}
	}
	else
	printf("\n Please enter valid userid and password");
}