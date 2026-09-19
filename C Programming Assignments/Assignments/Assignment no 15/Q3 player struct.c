typedef struct Player
{
	char name[20];
	int matchesPlayed;
	int runs;
	int wickets;
}player;

void storePlayers(player p1[]);
void displayPlayers(player p1[]);
void main()
{
	player p1[10];
	printf("Enter player's details");
	storePlayers(p1);
	printf("Display player's Details");
	displayPlayers(p1);
}

void storePlayers(player p1[])
{
	for(int i=0;i<10;i++)
	{
	printf("\nPlayer=%d",i+1);
	printf("\n Enter Player name");
	scanf("%[^\n]",p1[i].name);
	printf("\n Enter No. of matches played");
	scanf("%d",&p1[i].matchesPlayed);
	printf("\n Enter player's runs");
	scanf("%d",&p1[i].runs);
	printf("\n Enter Wickets");
	scanf("%d",&p1[i].wickets);
	getchar();
	}
}

void displayPlayers(player p1[])
{
	for(int i=0;i<10;i++)
	{
	printf("\nPlayer=%d",i+1);
	printf("\nName=%s",p1[i].name);
	printf("\nNo.Of.Matches played=%d",p1[i].matchesPlayed);
	printf("\nPlayer's runs=%d",p1[i].runs);
	printf("\nWicket=%d",p1[i].wickets);
	}
	
	int maxrun=p1[0].runs;
	int maxwicket=p1[0].wickets;
	for(int i=1;i<10;i++)
	{
		if(maxrun<p1[i].runs)
		{
			maxrun=p1[i].runs;
		}
	}
	
	for(int i=1;i<10;i++)
	{
		if(maxwicket<p1[i].wickets)
		{
			maxwicket=p1[i].wickets;
		}
	}
	printf("\n Show player's who have max runs");
	for(int i=0;i<10;i++)
	{
		if(maxrun==p1[i].runs)
		{
			printf("\nName=%s",p1[i].name);
			printf("\nNo.Of.Matches played=%d",p1[i].matchesPlayed);
			printf("\nPlayer's runs=%d",p1[i].runs);
			printf("\nWicket=%d",p1[i].wickets);
		}
	}
	
	printf("\n Show Player's who took max wicket");
	for(int i=0;i<10;i++)
	{
		if(maxwicket==p1[i].wickets)
		{
		
			printf("\nName=%s",p1[i].name);
			printf("\nNo.Of.Matches played=%d",p1[i].matchesPlayed);
			printf("\nPlayer's runs=%d",p1[i].runs);
			printf("\nWicket=%d",p1[i].wickets);
		}
	}
}
