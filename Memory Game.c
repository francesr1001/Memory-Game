#include<stdio.h>
#include<stdlib.h>
#include<string.h>          
#include<ctype.h>	
#include<windows.h>
#include<conio.h>
#include<time.h>
char n[20];
int sec=0, flag=0;

void theintro(){
	
	
	int start=2;
	
    while(start!=0){
		zoom1();
		zoom2();	
		zoom1();
		zoom2();
		zoom1();
		zoom2();	
		zoom1();
		zoom2();
		zoom1();
		zoom2();
		mmg1();
		mmg2();
		mmg3();
		mmg1();
		mmg2();
		mmg3();
		mmg1();
		mmg2();
		mmg3();
		mmg1();
		mmg2();
		mmg3();
		mmg1();
		mmg2();
		mmg3();		
		
		start--;
	}
	
}

void intro(){
int  move=0;
		move=getch();
	switch(move){
			case 8:
			mainmenu();	
			break;
			default:
				break;					
	}
}
void backoptionup(int theoption,int nowoption){
	if (theoption==nowoption){
		printf("\t _____\n        |");
	}else{
		printf("\t      \n         ");
	}
}
void backoptiondown(int theoption,int nowoption){
	if (theoption==nowoption){
		printf(" |\n\t|_____|");
	}else{
		printf("  \n\t       ");
	}
}


void INST(){
		int  move=0,qq=1;
while(qq){
	system("cls");
	printf("\t __________\n        |BACKSPACE |\n\t|__________|");
	printf("\n\n\n\t\t\t\t\t\t\4 M E M O R Y  G A M E \4\n\n\t\t\t\t\t\t\4\4\4\4\4 INSTRUCTIONS \4\4\4\4\4");
	intro();
	system("cls");
	printf("\t __________\n        |BACKSPACE |\n\t|__________|");
	printf("\n\n\n\t\t\t\t\t\t\4 M E M O R Y  G A M E \4");
	printf("\n\n\t\t\t\t\t\tMODE 1: NUMBERS EDITION ");
	printf("\n\n\t\t\t\5 In this mode of the game, players are given a sequence \n\t\t\tof numbers in a certain amount of time to memorize depending on the level.\n\n\t\t\t\5 The same numbers shall be entered after the given time ends.");
	printf("\n\n\n\t\t\tLevel 1: The Players have 5 seconds to memorize 5 numbers.");printf("\n\n\t\t\tLevel 2: The Players have 7 seconds to memorize 8 numbers.");printf("\n\n\t\t\tLevel 3: The Players have 8 seconds to memorize 10 numbers.");
	intro();
	system("cls");
	printf("\t __________\n        |BACKSPACE |\n\t|__________|");
	printf("\n\n\n\t\t\t\t\t\t\4 M E M O R Y  G A M E \4");
	printf("\n\n\t\t\t\t\t\tMODE 2: LETTERS EDITION ");
	printf("\n\n\t\t\t\5 In this mode of the game, players are given a sequence \n\t\t\tof letters in a certain amount of time to memorize depending on the level.\n\n\t\t\t\5 The same letters shall be entered after the given time ends.");
	printf("\n\n\n\t\t\tLevel 1: The Players have 5 seconds to memorize 5 letters.");printf("\n\n\t\t\tLevel 1: The Players have 7 seconds to memorize 8 letters.");printf("\n\n\t\t\tLevel 1: The Players have 8 seconds to memorize 10 letters.");	
	intro();
	system("cls");
	printf("\t __________\n        |BACKSPACE |\n\t|__________|");
	printf("\n\n\n\t\t\t\t\t\t\4 M E M O R Y  G A M E \4");
	printf("\n\n\n\t\t\tThe players can keep playing as much as they please. \n\n\n\t\t\tOptions are given every time the player answers correctly.\n\n\n\t\t\t\t   [Q] - to exit game\n\n\t\t\t\t   [S] - to view summary");
	printf("\n\n\n\t\t\tIf the player's answer is incorrect, an option will appear to \n\t\t\tlet you view again.\n\n\n\t\t\t\t   [H] - to view again");
	intro();
	system("cls");
	printf("\t __________\n        |BACKSPACE |\n\t|__________|");
	printf("\n\n\n\t\t\t\t\t\t\4 M E M O R Y  G A M E \4");
	printf("\n\n\n\t\t\t\tThe 'SUMMARY' will consist the following:\n");
	printf("\n\n\t\t\t\t\3 Total no. of tries\n\n\t\t\t\t\3 Total no. of correct answers\n\n\t\t\t\t\3 Total no. of incorrect answers\n\n\t\t\t\t\3 Total no. of time consumed\n\n\t\t\t\t\3 Average time per problem");
	intro();
	printf("\n\n\t\t\t\tEnjoy Playing!");
	qq-=1;
	}
}

void entry(void){
	system("cls");
	printf("\n\n\n\t\t\t\t\t\t\4 M E M O R Y  G A M E \4");
	printf("\n\n\n\t\t\t\t\tYOU ARE PLAYING NUMBERS MEMORIZATION");
	printf("\n\n\n\n\t\t\t\t\t\tEnter Player Name:\n\n\t\t\t\t\t\t--> ");
	scanf("%s",&n);
}
void entrynew(void){
	system("cls");
	printf("\n\n\n\t\t\t\t\t\t\4 M E M O R Y  G A M E \4");
	printf("\n\n\n\t\t\t\t\tYOU ARE PLAYING LETTERS MEMORIZATION");
	printf("\n\n\n\n\t\t\t\t\t\tEnter Player Name:\n\n\t\t\t\t\t\t--> ");
	scanf("%s",&n);
}
void game(int level, int mem, int cnt){
	system("cls");
	printf("\n\n\n\t\t\t\t\t\t\4 M E M O R Y  G A M E \4");
	printf("\n");
	printf("\n\t\t\t%s",n);	printf("\t\t\t\t\t\t");
	printf("\n\t\t\tLevel %d \n\t\t\t\3 \3 \3",level); printf("\t\t\t\t\t\t[Q]- Quit");
	printf("\n\n\t\t\t\t\t\t\t\t\t%d characters / %d seconds",mem,cnt);
}
void setTimeout(int milliseconds){
    int milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;
    int end = milliseconds_since + milliseconds;
	    do {
	        milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;
	    } while (milliseconds_since<=end);
}
void numberslevel1(){
	entry();
	game(1,5,5);
	int numC=0,numI=0,xx=1;
	int wrong=0;
	char sumOp;	
do{
	printf("\n\n\t\t\t");
	srand(time(NULL));
	long r;
	r=(rand() % 99999 + 10000);
	printf("Number : %ld ", r);
	int timer=5;
    printf("\t\t\t\tTimer starts now: ");
    while(timer!=0){
    	printf("%d",timer);
    	timer--;
    	sleep(1);
    }
    printf("\n");
    char rocket[5] = "-->";
    char *rocket_trace = (char *) malloc(100 * sizeof(char));
    int i;
    char passed_way[100] = "";
    for (i = 0; i <= 50; i++){
        setTimeout(15);
        sprintf(rocket_trace, "%s%s", passed_way, rocket);
        passed_way[i] = '       ';
        printf("\033[A");
        printf("| %s\n", rocket_trace);
    }
    printf("\033[A");
    printf("\033[2K");
    puts("\t\t\t\t\t\t * * * * *");
	printf("\n\t\t\t\t\t");
	system("cls");
	game(1,5,5);
	printf("\n\n\t\t\t");
		
	clock_t t;
    t = clock();
    /*long ans;
    printf("\n\t  Ans:  ");
    scanf("%ld",&ans);
    fflush(stdin);*/
    
    //if (ans!=r){	}
		    long ans;
		    while (ans!=r){
		    		//system("cls");
		    	 //game();      
			     //printf("\n\n\t\t\t  Ans:  ");
			     printf("\n\t\t\t\t  Ans:  ");
			     scanf("%ld",&ans);
			     fflush(stdin);
			    if (ans!=r){
				    char op;
				    printf("\n\t\t\tNEED HELP?\n\t\t\tPRESS 'H' if you do. \n\t\t\tPress any other key otherwise.\n\t\t\t==> ");
				    op=getche();
				    system("cls");
				    game(1,5,5);
				    if(op=='h'||op=='H'){
				    printf("\n\n\n\t\t\t");	
				        printf("Number : %ld ", r);
				        int timer=5;
				    printf("\t\t\t\tTimer starts now: ");
				    while(timer!=0){
				        printf("%d",timer);
				        timer--;
				        sleep(1);
				    }
				    printf("\n");
				    char rocket[5] = "-->";
				    char *rocket_trace = (char *) malloc(100 * sizeof(char));
				    int i;
				    char passed_way[100] = "";
				    for (i = 0; i <= 50; i++){
				        setTimeout(15);
				        sprintf(rocket_trace, "%s%s", passed_way, rocket);
				        passed_way[i] = '       ';
				        printf("\033[A");
				        printf("| %s\n", rocket_trace);
				    }
				    printf("\033[A");
				    printf("\033[2K");
				    puts("\t\t\t\t\t\t * * * * *");
				    printf("\n\t\t\t\t\t");
				    	system("cls");
						game(1,5,5);
						printf("\n\n\t\t\t");
	    
				    } if(op=='Q'||op=='q'){
				    	t = clock() - t;
  						double time= ((double)t)/CLOCKS_PER_SEC;
				    	break;
					}      
			    wrong++;}
			    
		    }
	if(ans==r){
    	printf("\t\t\t\t\t\t  CORRECT!");
    	numC++;
	}
	t = clock() - t;
  	double time= ((double)t)/CLOCKS_PER_SEC;
  	char op;
    printf("\n\t\t\t\t\t[Q]= Quit\t [S] = Summary \n\t\t\t\t\tPress any other key to continue.\n\t\t\t\t\t\t= = > ");
    op=getche();
    if(op=='Q'||op=='q'){
    	break;
	}
	else if(op=='S'||op=='s'){
		getch();
		system("cls");
		float aveT=time/(numC+wrong);
		printf("\n\n\n\t\t\t\t\t\tS U M M A R Y");
		printf("\n");
		printf("\n\t\t\t%s",n);
		printf("\n\t\t\tLevel 1 \n\t\t\t\3 \3 \3");
		printf("\n\n\t\t\t\tNo. of plays : %d",numC+wrong);
		printf("\n\n\t\t\t\tCorrect Answers : %d",numC);
		printf("\n\n\t\t\t\tIncorrect Answers : %d",wrong);
		printf("\n\n\t\t\t\tTime consumed : %.3f",time);
		printf("\n\n\t\t\t\tAverage time per problem : %.3f seconds",aveT);
		getch();
		printf("\n\n\t\t\t\tWould you like to continue?\n\n\t\t\t\t");
		printf("[Q]==Exit game\t [R]==Return to main menu \n\t\t\t\tPress any other key to continue game.\n\n\t\t\t\t-----> ");
		sumOp=getche();
		if(sumOp=='Q'||sumOp=='q'){
			getch();
			EXIT();
			return 0;
			xx-=1;
			break;
		}if(sumOp=='R'||sumOp=='r'){
			//getch();
			//system("cls");
			//break;
			main();
		}else{
			system("cls");
						game(1,5,5);
						printf("\n\n\t\t\t");
			continue;
		}
	}else{
		system("cls");
						game(1,5,5);
						printf("\n\n\t\t\t");	
		continue;
	}
}while(xx);
getch();		
}
void numberslevel2(){
	entry();
	game(2,8,7);
	int numC=0,numI=0,xx=1;
	int wrong=0;
	char sumOp;	
do{
	printf("\n\n\t\t\t");
	srand(time(NULL));
	long r;
	r=(rand() % 99999999 + 10000000);
	printf("Number : %ld ", r);
	int timer=7;
    printf("\t\t\t\tTimer starts now: ");
    while(timer!=0){
    	printf("%d",timer);
    	timer--;
    	sleep(1);
    }
    printf("\n");
    char rocket[5] = "-->";
    char *rocket_trace = (char *) malloc(100 * sizeof(char));
    int i;
    char passed_way[100] = "";
    for (i = 0; i <= 50; i++){
        setTimeout(15);
        sprintf(rocket_trace, "%s%s", passed_way, rocket);
        passed_way[i] = '       ';
        printf("\033[A");
        printf("| %s\n", rocket_trace);
    }
    printf("\033[A");
    printf("\033[2K");
    puts("\t\t\t\t\t\t * * * * *");
	printf("\n\t\t\t\t\t");
	system("cls");
	game(2,8,7);
	printf("\n\n\t\t\t");
	
	clock_t t;
    t = clock();
    
    
		    long ans;
		    while (ans!=r){
			     printf("\n\t\t\t\t  Ans:  ");
			     scanf("%ld",&ans);
			     fflush(stdin);
			    if (ans!=r){
				    char op;
				    printf("\n\t\t\tNEED HELP?\n\t\t\tPRESS 'H' if you do. \n\t\t\tPress any other key otherwise.\n\t\t\t==> ");
				    op=getche();
				    system("cls");
				    game(2,8,7);
				    if(op=='h'||op=='H'){
				    printf("\n\n\n\t\t\t");	
				        printf("Number : %ld ", r);
				        int timer=7;
				    printf("\t\t\t\tTimer starts now: ");
				    while(timer!=0){
				        printf("%d",timer);
				        timer--;
				        sleep(1);
				    }
				    printf("\n");
				    char rocket[5] = "-->";
				    char *rocket_trace = (char *) malloc(100 * sizeof(char));
				    int i;
				    char passed_way[100] = "";
				    for (i = 0; i <= 50; i++){
				        setTimeout(15);
				        sprintf(rocket_trace, "%s%s", passed_way, rocket);
				        passed_way[i] = '       ';
				        printf("\033[A");
				        printf("| %s\n", rocket_trace);
				    }
				    printf("\033[A");
				    printf("\033[2K");
				    puts("\t\t\t\t\t\t * * * * *");
				    printf("\n\t\t\t\t\t");
				    	system("cls");
						game(2,8,7);
						printf("\n\n\t\t\t");
						
				        
				    } if(op=='Q'||op=='q'){
				    	t = clock() - t;
  						double time= ((double)t)/CLOCKS_PER_SEC;
				    	break;
					}      
			    wrong++;}
			    
		    }
	if(ans==r){
    	printf("\t\t\t\t\t\t  CORRECT!");
    	numC++;
	}
	t = clock() - t;
  	double time= ((double)t)/CLOCKS_PER_SEC;
  	char op;
    printf("\n\t\t\t\t\t[Q]= Quit\t [S] = Summary \n\t\t\t\t\tPress any other key to continue.\n\t\t\t\t\t\t= = > ");
    op=getche();
    if(op=='Q'||op=='q'){
    	break;
	}
	else if(op=='S'||op=='s'){
		getch();
		system("cls");
		float aveT=time/(numC+wrong);
		printf("\n\n\n\t\t\t\t\t\tS U M M A R Y");
		printf("\n");
		printf("\n\t\t\t%s",n);
		printf("\n\t\t\tLevel 1 \n\t\t\t\3 \3 \3");
		printf("\n\n\t\t\t\tNo. of plays : %d",numC+wrong);
		printf("\n\n\t\t\t\tCorrect Answers : %d",numC);
		printf("\n\n\t\t\t\tIncorrect Answers : %d",wrong);
		printf("\n\n\t\t\t\tTime consumed : %.3f",time);
		printf("\n\n\t\t\t\tAverage time per problem : %.3f seconds",aveT);
		getch();
		printf("\n\n\t\t\t\tWould you like to continue?\n\n\t\t\t\t");
		printf("[Q]==Exit game\t [R]==Return to main menu \n\t\t\t\tPress any other key to continue game.\n\n\t\t\t\t-----> ");
		sumOp=getche();
		if(sumOp=='Q'||sumOp=='q'){
			getch();
			EXIT();
			return 0;
			xx-=1;
			break;
		}if(sumOp=='R'||sumOp=='r'){
			//getch();
			//system("cls");
			//break;
			main();
		}else{
			system("cls");
						game(2,8,7);
						printf("\n\n\t\t\t");
			continue;
		}
	}else{
		system("cls");
						game(2,8,7);
						printf("\n\n\t\t\t");
		continue;
	}
}while(xx);
	getch();	
	
}
void numberslevel3(){
	entry();
	game(3,8,10);
	int numC=0,numI=0,xx=1;
	int wrong=0;
	char sumOp;	
do{
	printf("\n\n\t\t\t");
	srand(time(NULL));
	long r;
	r=(rand() % 9999999999 + 1000000000);
	printf("Number : %ld ", r);
	int timer=8;
    printf("\t\t\t\tTimer starts now: ");
    while(timer!=0){
    	printf("%d",timer);
    	timer--;
    	sleep(1);
    }
    printf("\n");
    char rocket[5] = "-->";
    char *rocket_trace = (char *) malloc(100 * sizeof(char));
    int i;
    char passed_way[100] = "";
    for (i = 0; i <= 50; i++){
        setTimeout(15);
        sprintf(rocket_trace, "%s%s", passed_way, rocket);
        passed_way[i] = '       ';
        printf("\033[A");
        printf("| %s\n", rocket_trace);
    }
    printf("\033[A");
    printf("\033[2K");
    puts("\t\t\t\t\t\t * * * * *");
	printf("\n\t\t\t\t\t");
	system("cls");
	game(3,10,8);
	printf("\n\n\t\t\t");
	
	clock_t t;
    t = clock();
    
    
		    long ans;
		    while (ans!=r){
			     printf("\n\t\t\t\t  Ans:  ");
			     scanf("%ld",&ans);
			     fflush(stdin);
			    if (ans!=r){
				    char op;
				    printf("\n\t\t\tNEED HELP?\n\t\t\tPRESS 'H' if you do. \n\t\t\tPress any other key otherwise.\n\t\t\t==> ");
				    op=getche();
				    system("cls");
				    game(3,10,8);
				    if(op=='h'||op=='H'){
				    printf("\n\n\n\t\t\t");	
				        printf("Number : %ld ", r);
				        int timer=8;
				    printf("\t\t\t\tTimer starts now: ");
				    while(timer!=0){
				        printf("%d",timer);
				        timer--;
				        sleep(1);
				    }
				    printf("\n");
				    char rocket[5] = "-->";
				    char *rocket_trace = (char *) malloc(100 * sizeof(char));
				    int i;
				    char passed_way[100] = "";
				    for (i = 0; i <= 50; i++){
				        setTimeout(15);
				        sprintf(rocket_trace, "%s%s", passed_way, rocket);
				        passed_way[i] = '       ';
				        printf("\033[A");
				        printf("| %s\n", rocket_trace);
				    }
				    printf("\033[A");
				    printf("\033[2K");
				    puts("\t\t\t\t\t\t * * * * *");
				    printf("\n\t\t\t\t\t");
				     	system("cls");
						game(3,10,8);
						printf("\n\n\t\t\t");
							   
				    } if(op=='Q'||op=='q'){
				    	t = clock() - t;
  						double time= ((double)t)/CLOCKS_PER_SEC;
				    	break;
					}      
			    wrong++;}
			    
		    }
	if(ans==r){
    	printf("\t\t\t\t\t\t  CORRECT!");
    	numC++;
	}
	t = clock() - t;
  	double time= ((double)t)/CLOCKS_PER_SEC;
  	char op;
    printf("\n\t\t\t\t\t[Q]= Quit\t [S] = Summary \n\t\t\t\t\tPress any other key to continue.\n\t\t\t\t\t\t= = > ");
    op=getche();
    if(op=='Q'||op=='q'){
    	break;
	}
	else if(op=='S'||op=='s'){
		getch();
		system("cls");
		float aveT=time/(numC+wrong);
		printf("\n\n\n\t\t\t\t\t\tS U M M A R Y");
		printf("\n");
		printf("\n\t\t\t%s",n);
		printf("\n\t\t\tLevel 1 \n\t\t\t\3 \3 \3");
		printf("\n\n\t\t\t\tNo. of plays : %d",numC+wrong);
		printf("\n\n\t\t\t\tCorrect Answers : %d",numC);
		printf("\n\n\t\t\t\tIncorrect Answers : %d",wrong);
		printf("\n\n\t\t\t\tTime consumed : %.3f",time);
		printf("\n\n\t\t\t\tAverage time per problem : %.3f seconds",aveT);
		getch();
		printf("\n\n\t\t\t\tWould you like to continue?\n\n\t\t\t\t");
		printf("[Q]==Exit game\t [R]==Return to main menu \n\t\t\t\tPress any other key to continue game.\n\n\t\t\t\t-----> ");
		sumOp=getche();
		if(sumOp=='Q'||sumOp=='q'){
			getch();
			EXIT();
			return 0;
			xx-=1;
			break;
		}if(sumOp=='R'||sumOp=='r'){
		
			main();
		}else{
						system("cls");
						game(3,10,8);
						printf("\n\n\t\t\t");
			continue;
		}
	}else{
						system("cls");
						game(3,10,8);
						printf("\n\n\t\t\t");
		continue;
	}
}while(xx);
	getch();	
}
void letterslevel1(){
	entrynew();
	int trial=0;
	int wrong=0;
	printf("Small Letters ONLY!\n\n You can type test now (don't capslock your key!)\nclick enter when done:");	
	while(trial!=13){
		trial=getche();
	}
	int numC=0,numI=0,xx=1;
	char sumOp;	
do{
	char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char therandom[5];
	char guess[5];
	
	game(1,5,5);
		printf("\n\n\t\t\t");
		srand(time(NULL));

	int i=0;
	int initial=1;
	while(i<5) {
		int temp = rand() % 26;
		therandom[i] = alphabets[temp];
		printf("%d: %c   ",initial++,therandom[i]);
		i++;
	}
	int timer=5;
    	printf("\t\tTimer starts now: ");
    while(timer!=0){
    	printf("%d",timer);
    	timer--;
    	sleep(1);
    }
    	printf("\n");
    int k=0;
    char rocket[3] = "-->";
    char *rocket_trace = (char *) malloc(100 * sizeof(char));
    char passed_way[100] = "";
    for (k = 0; k <= 50; k++){
        setTimeout(15);
        sprintf(rocket_trace, "%s%s", passed_way, rocket);
        passed_way[k] = '       ';
        printf("\033[A");
        printf("| %s\n", rocket_trace);
    }
    printf("\033[A");
    printf("\033[2K");
    puts("\t\t\t\t\t\t * * * * *");
	printf("\n\t\t\t\t\t");
	system("cls");
	game(1,5,5);
	printf("\n\n\t\t\t");
		
	clock_t t;
   	t = clock();
   	
   		int d=0;
		    while (guess[0]!=therandom[0] && guess[1]!=therandom[1] && guess[2]!=therandom[2] && guess[3]!=therandom[3] && guess[4]!=therandom[4]){
		    	
			   printf("\n\t\t\t\t  Ans:  ");
			     
			   
			   		for (d=0;d<5;d++){
						guess[d]=getche();		
					} 
				
											
			    if (guess[0]!=therandom[0] && guess[1]!=therandom[1] && guess[2]!=therandom[2] && guess[3]!=therandom[3] && guess[4]!=therandom[4]){
				    char op;
				    printf("\n\t\t\tNEED HELP?\n\t\t\tPRESS 'H' if you do. \n\t\t\tPress any other key otherwise.\n\t\t\t==> ");
				    op=getche();
				    system("cls");
				    game(1,5,5);
				    if(op=='h'||op=='H'){
				    printf("\n\n\n\t\t\t");	
				       // printf("Number : %ld ", r);
				       int initialnew=1;
				       	for(i=0; i<5; i++){
							printf("%d: %c   ",initialnew++,therandom[i]);
						}
				    int timer=5;
				    printf("\t\t\tTimer starts now: ");
				    while(timer!=0){
				        printf("%d",timer);
				        timer--;
				        sleep(1);
				    }
				    printf("\n");
				    char rocket[5] = "-->";
				    char *rocket_trace = (char *) malloc(100 * sizeof(char));
				    int i;
				    char passed_way[100] = "";
				    for (i = 0; i <= 50; i++){
				        setTimeout(15);
				        sprintf(rocket_trace, "%s%s", passed_way, rocket);
				        passed_way[i] = '       ';
				        printf("\033[A");
				        printf("| %s\n", rocket_trace);
				    }
				    printf("\033[A");
				    printf("\033[2K");
				    puts("\t\t\t\t\t\t * * * * *");
				    printf("\n\t\t\t\t\t");
				    	system("cls");
						game(1,5,5);
						printf("\n\n\t\t\t");
				    }  if(op=='Q'||op=='q'){
				    	t = clock() - t;
  						double time= ((double)t)/CLOCKS_PER_SEC;
				    	break;
					}     
			    wrong++;}
			    
		    }
		if (guess[0]==therandom[0] && guess[1]==therandom[1] && guess[2]==therandom[2] && guess[3]==therandom[3] && guess[4]==therandom[4]){
					printf("\n\t\t\t\t\t\t  CORRECT!");
						numC++;
		} /*else {
					printf("\n\t\t\t\t\t\t  INCORRECT!");
						numI++;
							
				}*/	
	t = clock() - t;
  	double time= ((double)t)/CLOCKS_PER_SEC;
  	char op;
    printf("\n\t\t\t\t\t[Q]= Quit\t [S] = Summary \n\t\t\t\t\tPress any other key to continue.\n\t\t\t\t\t\t= = > ");
    op=getche();
    if(op=='Q'||op=='q'){
    	break;
	}
	else if(op=='S'||op=='s'){
		getch();
		system("cls");
		float aveT=time/(numC+wrong);
		printf("\n\n\n\t\t\t\t\t\tS U M M A R Y");
		printf("\n");
		printf("\n\t\t\t%s",n);
		printf("\n\t\t\tLevel 1 \n\t\t\t\3 \3 \3");
		//printf("\n\n\t\t\t\tIncorrect Answers : %d",wrong);
		printf("\n\n\t\t\t\tNo. of plays : %d",numC+wrong);
		printf("\n\n\t\t\t\tCorrect Answers : %d",numC);
		printf("\n\n\t\t\t\tIncorrect Answers : %d",wrong);
		printf("\n\n\t\t\t\tTime consumed : %.3f",time);
		printf("\n\n\t\t\t\tAverage time per problem : %.3f seconds",aveT);
		getch();
		printf("\n\n\t\t\t\tWould you like to continue?\n\n\t\t\t\t");
		printf("[Q]==Exit game\t [R]==Return to main menu \n\t\t\t\tPress any other key to continue game.\n\n\t\t\t\t-----> ");
		sumOp=getche();
		if(sumOp=='Q'||sumOp=='q'){
			getch();
			EXIT();
			return 0;
			xx-=1;
			break;
		}if(sumOp=='R'||sumOp=='r'){
			//getch();
			//system("cls");
			//break;
			main();
		}else{
						system("cls");
						game(1,5,5);
						printf("\n\n\t\t\t");
			continue;
		}
	}else{
						system("cls");
						game(1,5,5);
						printf("\n\n\t\t\t");
		continue;
	}
}while(xx);

getch();						
}
void letterslevel2(){
	int wrong=0;
	entrynew();
	int trial=0;
	
	printf("Small Letters ONLY!\n\n You can type test now (don't capslock your key!)\nclick enter when done:");	
	while(trial!=13){
		trial=getche();
	}
	int numC=0,numI=0,xx=1;
	char sumOp;	
do{
	
	
	char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char therandom[8];
	char guess[8];
	
		game(2,8,7);
		printf("\n\n\t\t\t");
		srand(time(NULL));

	int i=0;
	int initial=1;
	while(i<8) {
		int temp = rand() % 26;
		therandom[i] = alphabets[temp];
		printf("%d: %c   ",initial++,therandom[i]);
		i++;
	}
	int timer=7;
    	printf("\tTimer starts now: ");
    while(timer!=0){
    	printf("%d",timer);
    	timer--;
    	sleep(1);
    }
    	printf("\n");
    int k=0;
    char rocket[3] = "-->";
    char *rocket_trace = (char *) malloc(100 * sizeof(char));
    char passed_way[100] = "";
    for (k = 0; k <= 80; k++){
        setTimeout(15);
        sprintf(rocket_trace, "%s%s", passed_way, rocket);
        passed_way[k] = '       ';
        printf("\033[A");
        printf("| %s\n", rocket_trace);
    }
    printf("\033[A");
    printf("\033[2K");
    puts("\t\t\t\t\t\t * * * * *");
	printf("\n\t\t\t\t\t");
	system("cls");
	game(2,8,7);
	printf("\n\n\t\t\t");
	
	clock_t t;
   	t = clock();
   	
   	int d=0;
		    while (guess[0]!=therandom[0] && guess[1]!=therandom[1] && guess[2]!=therandom[2] && guess[3]!=therandom[3] && guess[4]!=therandom[4] && guess[5]!=therandom[5] && guess[6]!=therandom[6] && guess[7]!=therandom[7]){
		    		//system("cls");
		    	 //game();      
			     //printf("\n\n\t\t\t  Ans:  ");
			   printf("\n\t\t\t\t  Ans:  ");
			     /*  scanf("%ld",&ans);
			     fflush(stdin);
			   */  	for (d=0;d<8;d++){
						guess[d]=getche();		
					}
			    if (guess[0]!=therandom[0] && guess[1]!=therandom[1] && guess[2]!=therandom[2] && guess[3]!=therandom[3] && guess[4]!=therandom[4] && guess[5]!=therandom[5] && guess[6]!=therandom[6] && guess[7]!=therandom[7]){
				    char op;
				    printf("\n\t\t\tNEED HELP?\n\t\t\tPRESS 'H' if you do. \n\t\t\tPress any other key otherwise.\n\t\t\t==> ");
				    op=getche();
				    system("cls");
				    game(2,8,7);
				    if(op=='h'||op=='H'){
				    printf("\n\n\n\t\t\t");	
				    int initialnew=1;
				       	for(i=0; i<8; i++){
							printf("%d: %c   ",initialnew++,therandom[i]);
						}
				
				        int timer=7;
				    printf("\tTimer starts now: ");
				    while(timer!=0){
				        printf("%d",timer);
				        timer--;
				        sleep(1);
				    }
				    printf("\n");
				    char rocket[5] = "-->";
				    char *rocket_trace = (char *) malloc(100 * sizeof(char));
				    int i;
				    char passed_way[100] = "";
				    for (i = 0; i <= 80; i++){
				        setTimeout(15);
				        sprintf(rocket_trace, "%s%s", passed_way, rocket);
				        passed_way[i] = '       ';
				        printf("\033[A");
				        printf("| %s\n", rocket_trace);
				    }
				    printf("\033[A");
				    printf("\033[2K");
				    puts("\t\t\t\t\t\t * * * * *");
				    printf("\n\t\t\t\t\t");
					system("cls");
					game(2,8,7);
					printf("\n\n\t\t\t");				        
				    }  if(op=='Q'||op=='q'){
				    	t = clock() - t;
  						double time= ((double)t)/CLOCKS_PER_SEC;
				    	break;
					}     
			    wrong++;}
			    
		    }
			if (guess[0]==therandom[0] && guess[1]==therandom[1] && guess[2]==therandom[2] && guess[3]==therandom[3] && guess[4]==therandom[4] && guess[5]==therandom[5] && guess[6]==therandom[6] && guess[7]==therandom[7] ){
					printf("\n\t\t\t\t\t\t  CORRECT!");
						numC++;
		}
	t = clock() - t;
  	double time= ((double)t)/CLOCKS_PER_SEC;
  	char op;
    printf("\n\t\t\t\t\t[Q]= Quit\t [S] = Summary \n\t\t\t\t\tPress any other key to continue.\n\t\t\t\t\t\t= = > ");
    op=getche();
    if(op=='Q'||op=='q'){
    	break;
	}
	else if(op=='S'||op=='s'){
		getch();
		system("cls");
		float aveT=time/(numC+wrong);
		printf("\n\n\n\t\t\t\t\t\tS U M M A R Y");
		printf("\n");
		printf("\n\t\t\t%s",n);
		printf("\n\t\t\tLevel 1 \n\t\t\t\3 \3 \3");
		printf("\n\n\t\t\t\tNo. of plays : %d",numC+wrong);
		printf("\n\n\t\t\t\tCorrect Answers : %d",numC);
		printf("\n\n\t\t\t\tIncorrect Answers : %d",wrong);
		printf("\n\n\t\t\t\tTime consumed : %.3f",time);
		printf("\n\n\t\t\t\tAverage time per problem : %.3f seconds",aveT);
		getch();
		printf("\n\n\t\t\t\tWould you like to continue?\n\n\t\t\t\t");
		printf("[Q]==Exit game\t [R]==Return to main menu \n\t\t\t\tPress any other key to continue game.\n\n\t\t\t\t-----> ");
		sumOp=getche();
		if(sumOp=='Q'||sumOp=='q'){
			getch();
			EXIT();
			return 0;
			xx-=1;
			break;
		}if(sumOp=='R'||sumOp=='r'){
			//getch();
			//system("cls");
			//break;
			main();
		}else{
			
						system("cls");
						game(2,8,7);
						printf("\n\n\t\t\t");
			continue;
		}
	}else{
						system("cls");
						game(2,8,7);
						printf("\n\n\t\t\t");
		continue;
	}
}while(xx);
getch();
}
void letterslevel3(){
	int wrong=0;
	entrynew();
	int trial=0;
	
	printf("Small Letters ONLY!\n\n You can type test now (don't capslock your key!)\nclick enter when done:");	
	while(trial!=13){
		trial=getche();
	}
	int numC=0,numI=0,xx=1;
	char sumOp;	
do{
	
	
	char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char therandom[10];
	char guess[10];
	
		game(3,10,8);
		printf("\n\n\t\t\t");
		srand(time(NULL));

	int i=0;
	int initial=1;
	while(i<10) {
		int temp = rand() % 26;
		therandom[i] = alphabets[temp];
		printf("%d: %c   ",initial++,therandom[i]);
		i++;
	}
	int timer=8;
    	printf("\tTimer starts now: ");
    while(timer!=0){
    	printf("%d",timer);
    	timer--;
    	sleep(1);
    }
    	printf("\n");
    int k=0;
    char rocket[3] = "-->";
    char *rocket_trace = (char *) malloc(100 * sizeof(char));
    char passed_way[100] = "";
    for (k = 0; k <= 100; k++){
        setTimeout(15);
        sprintf(rocket_trace, "%s%s", passed_way, rocket);
        passed_way[k] = '       ';
        printf("\033[A");
        printf("| %s\n", rocket_trace);
    }
    printf("\033[A");
    printf("\033[2K");
    puts("\t\t\t\t\t\t * * * * *");
	printf("\n\t\t\t\t\t");
	system("cls");
	game(3,10,8);
	printf("\n\n\t\t\t");
	
	clock_t t;
   	t = clock();
   	
   	int d=0;
		    while (guess[0]!=therandom[0] && guess[1]!=therandom[1] && guess[2]!=therandom[2] && guess[3]!=therandom[3] && guess[4]!=therandom[4] && guess[5]!=therandom[5] && guess[6]!=therandom[6] && guess[7]!=therandom[7]&& guess[8]!=therandom[8]&& guess[9]!=therandom[9] ){
		    	 printf("\n\t\t\t\t  Ans:  ");
			   	for (d=0;d<10;d++){
						guess[d]=getche();		
					}
			    if (guess[0]!=therandom[0] && guess[1]!=therandom[1] && guess[2]!=therandom[2] && guess[3]!=therandom[3] && guess[4]!=therandom[4] && guess[5]!=therandom[5] && guess[6]!=therandom[6] && guess[7]!=therandom[7]&& guess[8]!=therandom[8]&& guess[9]!=therandom[9]){
				    char op;
				    printf("\n\t\t\tWRONG INPUT, NEED HELP?\n\t\t\tPRESS 'H' if you do. \n\t\t\tPress any other key otherwise.\n\t\t\t==> ");
				    op=getche();
				    system("cls");
				    game(3,10,8);
				    if(op=='h'||op=='H'){
				    printf("\n\n\n\t\t\t");	
				       // printf("Number : %ld ", r);
				       int initialnew=1;
				       	for(i=0; i<10; i++){
							printf("%d: %c   ",initialnew++,therandom[i]);
						}
				       
				        int timer=8;
				    printf("\t\t\t\tTimer starts now: ");
				    while(timer!=0){
				        printf("%d",timer);
				        timer--;
				        sleep(1);
				    }
				    printf("\n");
				    char rocket[5] = "-->";
				    char *rocket_trace = (char *) malloc(100 * sizeof(char));
				    int i;
				    char passed_way[100] = "";
				    for (i = 0; i <= 100; i++){
				        setTimeout(15);
				        sprintf(rocket_trace, "%s%s", passed_way, rocket);
				        passed_way[i] = '       ';
				        printf("\033[A");
				        printf("| %s\n", rocket_trace);
				    }
				    printf("\033[A");
				    printf("\033[2K");
				    puts("\t\t\t\t\t\t * * * * *");
				    printf("\n\t\t\t\t\t");
				    	system("cls");
						game(3,10,8);
						printf("\n\n\t\t\t");  
						  
				    }  if(op=='Q'||op=='q'){
				    	t = clock() - t;
  						double time= ((double)t)/CLOCKS_PER_SEC;
				    	break;
					}     
			    wrong++;}
			    
		    }
			if (guess[0]==therandom[0] && guess[1]==therandom[1] && guess[2]==therandom[2] && guess[3]==therandom[3] && guess[4]==therandom[4] && guess[5]==therandom[5] && guess[6]==therandom[6] && guess[7]==therandom[7]&& guess[8]==therandom[8]&& guess[9]==therandom[9] ){
					printf("\n\t\t\t\t\t\t  CORRECT!");
						numC++;
		}
	t = clock() - t;
  	double time= ((double)t)/CLOCKS_PER_SEC;
  	char op;
    printf("\n\t\t\t\t\t[Q]= Quit\t [S] = Summary \n\t\t\t\t\tPress any other key to continue.\n\t\t\t\t\t\t= = > ");
    op=getche();
    if(op=='Q'||op=='q'){
    	break;
	}
	else if(op=='S'||op=='s'){
		getch();
		system("cls");
		float aveT=time/(numC+wrong);
		printf("\n\n\n\t\t\t\t\t\tS U M M A R Y");
		printf("\n");
		printf("\n\t\t\t%s",n);
		printf("\n\t\t\tLevel 1 \n\t\t\t\3 \3 \3");
		printf("\n\n\t\t\t\tNo. of plays : %d",numC+wrong);
		printf("\n\n\t\t\t\tCorrect Answers : %d",numC);
		printf("\n\n\t\t\t\tIncorrect Answers : %d",wrong);
		printf("\n\n\t\t\t\tTime consumed : %.3f",time);
		printf("\n\n\t\t\t\tAverage time per problem : %.3f seconds",aveT);
		getch();
		printf("\n\n\t\t\t\tWould you like to continue?\n\n\t\t\t\t");
		printf("[Q]==Exit game\t [R]==Return to main menu \n\t\t\t\tPress any other key to continue game.\n\n\t\t\t\t----->");
		sumOp=getche();
		if(sumOp=='Q'||sumOp=='q'){ 
			getch();
			EXIT();
			return 0;
			xx-=1;
			break;
		}if(sumOp=='R'||sumOp=='r'){
			//getch();
			//system("cls");
			//break;
			main();
		}else{
						system("cls");
						game(3,10,8);
						printf("\n\n\t\t\t");
			continue;
		}
	}else{
		
						system("cls");
						game(3,10,8);
						printf("\n\n\t\t\t");
		continue;
	}
}while(xx);
getch();
}
void singline(){
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); 
}
void mainmenu (){
	
//	system("COLOR 07");	
	while(1){

system("cls");
	 
int option = 1;
int dside = 0;
	while(dside !=13){
		system("cls");
		printf("\n");	
		print1stline();printf("\n");print1stline();
		printf("\n\n\t\t\t\t\t    \4\4\4 M E M O R Y  G A M E \4\4\4");printf("\n\n\n\n");
		printf("\t\t\t\t\t\t  ");nowchoosing(1,option); printf(" GAMES ");			jjj(1,option);printf("\n\n");
		printf("\t\t\t\t\t\t  ");nowchoosing(2,option); printf(" INSTRUCTIONS ");	jjj(2,option);printf("\n\n");	
		printf("\t\t\t\t\t\t  ");nowchoosing(3,option); printf(" AUTHOR ");		jjj(3,option);printf("\n\n");
		printf("\t\t\t\t\t\t  ");nowchoosing(4,option); printf(" EXIT ");			jjj(4,option);	printf("\n      /\\\n     /  \\\n    /    \\\n   /      \\\n  /        \\\n /          \\\n/____________\\\n|            |\n|  ESC/HOME  |");
			printf("\n|____________|___________________________________________________________________________________________________"); 
			printf("\n\n");print1stline();
			//dside=getch();
			
		dside=getch();
		if (dside==0 || dside==0b11100000) dside=getch();	
			
	
			if (dside==80 && option !=4){
				option++;
			}else if(dside==72 && option !=1){
				option--;
			}else if(dside==71 || dside==27){
				EXIT();
				return 0;
			}else{
				option=option;	
			}
	}
		switch(option){
			case 1: 
					system("cls");
					int gc = 1;
					int dside = 0;
					while(dside !=13){
						system("cls");
						
	printf("\n");
	print1stline();printf("\n\n");
	printf("\t __________\n        |BACKSPACE |\n\t|__________|");
				printf("\n\n\n");

						//printf("\n");printf("\n");printf("\n");
									
							printf("\t");			kkknew(1,gc);	printf("\t\t\t\t\t      ");	kkk2new(4,gc);	printf("\t          ");	kkk2new(7,gc);
								
					printf("\n\t");	nowchoosingnew(1,gc);	 printf("\tMODE 1:NUMBERS-MEMORY GAME: LEVEL 1  ");	nowchoosingnew(1,gc);	printf("\tLEVEL 2\t ");nowchoosingnew(4,gc);printf("  LEVEL 3  ");nowchoosingnew(7,gc);		
					printf("\n\t");	kkknew(1,gc);			printf("\t\t\t\t\t      ");	kkk2new(4,gc);printf("\t\t  ");kkk2new(7,gc);	printf("\t\t   ");		printf("\n\t");kkknew(2,gc);printf("\t\t\t\t\t      ");	kkk2new(5,gc);	printf("\t          ");	kkk2new(8,gc);
					
					
					printf("\t\n\t");	nowchoosingnew(2,gc);printf("\tMODE 2:LETTERS-MEMORY GAME: LEVEL 1  ");nowchoosingnew(2,gc); printf("\tLEVEL 2\t ");nowchoosingnew(5,gc);  printf("  LEVEL 3  ");nowchoosingnew(8,gc);   
					printf("\n\t");			kkknew(2,gc);	printf("\t\t\t\t\t      ");	kkk2new(5,gc);printf("\t\t  ");kkk2new(8,gc);
					
					printf("\n\t");kkk2new(3,gc);kkk2new(3,gc);
					printf("\n\t");	nowchoosingnew(3,gc); printf("\tBACK\t       ");nowchoosingnew(3,gc);printf("\n\t");kkk2new(3,gc);kkk2new(3,gc);
									printf("\n\n\n\n\n\n\n\n");
					printlastline();		
																			
							dside=getch();
						switch(dside){
							case 8:
								mainmenu();	
					            break;
								
						}
								if (dside==80 && gc !=3 && gc !=5 && gc !=8){	//down
									gc++;
								}else if(dside==72 && gc !=1 && gc !=4 && gc !=7){		//up
									gc--;
								}else if(dside==75 && gc==1 && gc==2 && gc==3){		//LEFT
									gc=gc;
								}else if(dside==75 && gc !=1 && gc !=2 && gc !=3 ){		//LEFT
									gc=gc-3;
								}else if(dside==77 && gc !=3 && gc!=7 && gc!=8){		//RIGHT
									gc=gc+3;
								}else{
									gc=gc;
								}		
					}
						switch(gc){
					                   case 1:
					                   	  //printf("\n\n\n1");
					                   	 
					                      numberslevel1();
					                      //int y;
										//	tt();
										//	getch();
										/*	printf("Total time: ");
											printf("%d",sec-1);
					                      */
					                      break;             
					                   case 2:
					                   	  //printf("\n\n\n2");
					                     letterslevel1();
					                      break;
										case 3:
										//	printf("\n\n\n3");
					                   	  //	mainmenu();	
					                   	  	break;
					                   	case 4:
					                   		//printf("\n\n\n4");
					                   		numberslevel2();
					                   	  	break; 
										case 5:
											//printf("\n\n\n5");
											letterslevel2();
					                   	  	break;
										case 7:
											//printf("\n\n\n7");
											numberslevel3();
					                   	  	break;
										case 8:
											//printf("\n\n\n8");
											letterslevel3();
					                   	  	break; 		 
												  	
						}
		    		break;	
			case 2:
					//INST5();
					INST();	
					break;
			case 3:
			
					AUTHOR();
					
					break;
			case 4:
					EXIT();
					return 0;
					break;			
		}
	getch();
		}
}	
void nowchoosing(int theoption,int nowoption){
	if (theoption==nowoption){
		printf(">>");
	}else{
		printf(" ");
	}
}
void kkk(int theoption,int nowoption){
	if (theoption==nowoption){
		printf("V");
	}else{
		printf(" ");
	}
}
void jjj(int theoption,int nowoption){
	if (theoption==nowoption){
		printf("<<");
	}else{
		printf(" ");
	}
}
void nowchoosingnew(int theoption,int nowoption){
	if (theoption==nowoption){
		printf("|");
	}else{
		printf(" ");
	}
}
void kkknew(int theoption,int nowoption){
	if (theoption==nowoption){
		printf("|\\/\\/\\/\\/\\/\\/\\/\\/\\\\/\\/\\/\\/\\/\\\\/\\/\\/\\/\\/\\\\/\\\\/|");
	}else{
		printf(" ");
	}
}
void kkk2new(int theoption,int nowoption){
	if (theoption==nowoption){
		printf("|\\/\\/\\/\\/\\/|");
	}else{
		printf(" ");
	}
}
void print1stline() {
	printf("_________________________________________________________________________________________________________________\n");
}

void printlastline() {
	printf("\n|_______________________________________________________________________________________________________________|"); 
}

void midline() {
		printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
				printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
					printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
						printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
							printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
}

void singleline() {
	printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
}

void singlelineupperpart() {
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
}

void design1() {
		printf("|\t\t\t\t\t\t\t\4\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\4\t\t\t\t\t\t|");
			 singleline();
				printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
					printf("\n|\t\t\4\t\t\t\t\t\t\t\t\t\t\t\(\t|");		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t )\t|");
						printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
							printf("\n|\t\t\t\t\t\4\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\4\t\t|");
							
}

void design2() {
		singlelineupperpart();
			printf("\n|\t\t\t\t\t\t\4\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\4\t\t\t\t\t|");
				printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
					printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|");		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t )\t|");
						printf("\n|\t\t\4\t\t\t\t\t\t\t\t\t\t\t\(\t|");		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
							printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
}

void design3() {
		singlelineupperpart();
			singleline();
				printf("\n|\t\t\t\t\t\t\t\t\4\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\4\t\t\t\t\t\t\t|");
					printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|");		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t )\t|");
						printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|");		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
							printf("\n|\t\t\t\t\4\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
}

void design4() {
		singlelineupperpart();
			singleline();
				singleline();
					printf("\n|\t\t\t\t\t\t\t\t\t\t\4\t\t\t\t|");		printf("\n|\t\t\t\t\t\t\4\t\t\t\t\t\t\t )\t|");
						printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|");		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
							printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
							
}

void design11() {
							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
						printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t )\t\t\t\t\t\t\t\t\t\t\t|");
					printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t )\t\t\t\t\t\t\t\t\t\t\t|");
				printf("\n|\t\t\4\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\4\t\t\t|");
	    	singleline();
		 singleline();
							
}

void design22() {
							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
						printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t )\t\t\t\t\t\t\t\t\t\t\t|");
					printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t )\t\t\t\t\t\t\t\t\t\t\t|");
				printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
			printf("\n|\t\4\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\4\t\t\t\t\t|");
		singleline();
							
}

void design33() {
							printf("|\t\t\t\t\t\t\4\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\4\t\t\t\t|");
						printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
					printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t )\t\t\t\t\t\t\t\t\t\t\t|");
				printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t )\t\t\t\t\t\t\t\t\t\t\t|");
			singleline();
		printf("\n|\4\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\4\t\t\t\t|");
							
}

void design44() {
			printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
						printf("\n|\t\t\t\t\t\t\t\t\4\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\4\t\t|");
					printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t )\t\t\t\t\t\t\t\t\t\t\t|");
				printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t )\t\t\t\t\t\t\t\t\t\t\t|");
			printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
		singleline();
							
}

void zoom1(){
				print1stline();
			printf("|\t\t\t\t\t\t\t\4\t\t\t\t\t\t\t|"); 		
			printf("\n|\t\t\t\t\t\t\t\t\4\t\t\t\t\t\t|");
	     	singleline();
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|"); 		
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
			printf("\n|\t\t\4\t\t\t\t\t\t\t\t\t\t\t\(\t|");	
				printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
			printf("\n|\t\t\4\t\t\t\t\t\t\t\t\t\t\t\(\t|");		
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t )\t|");
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");			
			printf("\n|\t\t\t\t\t______\t\t______\t\t______\t\t\t\t\t|");
			printf("\n|\t\t\t\t\t     /\t\t|    |\t\t|    |\t|\\    /|\t\t\t|"); 	
			printf("\n|\t\t\t\t\t    /\t\t|    |\t\t|    |\t| \\  / |\t\t\4\t|");
			printf("\n|\t\t\t\t\t   /\t\t|    |\t\t|    |\t|  \\/  |\t\t\t|"); 	
			printf("\n|\t\t\t\t\t  /\t\t|    |\t\t|    |  |      |\t\t\t|\n");
			printf("|\t\t\t\t\t /______\t|____|\t\t|____|\t|      |\t\t\t|"); 	
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
			printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 		
			printf("\n|\t\t\t )\t\t\t\t\t\t\t\t\t\t\t|");
			printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 
				printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
			printf("\n|\t\t\4\t\t\t\t\t\t\t\t\t\t\t\(\t|");			
			printf("\n|\t\t\t )\t\t\t\t\t\t\t\t\t\t\t|");
			printf("\n|\t\t\4\t\t\t\t\t\t\t\t\t\t\t\t|"); 		
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\4\t\t\t|");
		    singleline();
			singleline();
			printlastline();
			system("COLOR 04");	
			system("cls");
	
	
}
void zoom2(){
					print1stline();
				printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 
					printf("\n|\t\t\t\t\t\t\t\t\t\t\4\t\t\t\t|");
							printf("\n|\t\t\t\t\t\t\t\t\t\t\4\t\t\t\t|");			
			printf("\n|\t\t\t\t\t\t\t\t\t\t\4\t\t\t\t|");	
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|");	
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t )\t|");
			printf("\n|\t\t\4\t\t\t\t\t\t\t\t\t\t\t\(\t|");
			printf("\n|\t\t\4\t\t\t\t\t\t\t\t\t\t\t\(\t|");		
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t )\t|");
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");			
			printf("\n|\t\t\t\t\t______\t\t______\t\t______\t\t\t\t\t|");
			printf("\n|\t\t\t\t\t     /\t\t|    |\t\t|    |\t|\\    /|\t\t\t|"); 	
			printf("\n|\t\t\t\t\t    /\t\t|    |\t\t|    |\t| \\  / |\t\t\4\t|");
			printf("\n|\t\t\t\t\t   /\t\t|    |\t\t|    |\t|  \\/  |\t\t\t|"); 	
			printf("\n|\t\t\t\t\t  /\t\t|    |\t\t|    |  |      |\t\t\t|\n");
			printf("|\t\t\t\t\t /______\t|____|\t\t|____|\t|      |\t\t\t|"); 	
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
			printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 		
				printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|"); 		
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
			printf("\n|\t\t\4\t\t\t\t\t\t\t\t\t\t\t\(\t|");	
				printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
			printf("\n|\t\t\4\t\t\t\t\t\t\t\t\t\t\t\(\t|");		
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t )\t|");
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t )\t|");
		    singleline();
			singleline();
			printlastline();
			system("COLOR 04");	
			system("cls");
}
void mmg1 (){
								print1stline();
			singlelineupperpart();
			printf("\n|\t\t\t\t\t\t\4\t\t\t\t\t\t\t\t|"); 		
			printf("\n|\t\t\t\t\t\t\t\t\t\4\t\t\t\t\t|");
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 
					printf("\n|\t\t\t\t\t\t\t\t\t\t\4\t\t\t\t|");
							printf("\n|\t\t\t\t\t\t\t\t\t\t\4\t\t\t\t|");			
			printf("\n|\t\t\t\t\t\t\t\t\t\t\4\t\t\t\t|");	
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|");	
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t )\t|");
			printf("\n|\t\t\4\t\t\t\t\t\t\t\t\t\t\t\(\t|");		
			printf("\n|\t\t\t\t_____\t\t    ______  ______\t \t\t\t\t\t|");
			printf("\n|\t\t|\\        /|  |       |\\        /|  |    |  |    |  \\    /\t\t\t\t\t|"); 		
			printf("\n|\t\t| \\      / |  |       | \\      / |  |    |  |    |   \\  /\t\t\t\t\t|");
			printf("\n|\t\t|  \\    /  |  |______ |  \\    /  |  |    |  |____|    \\/\t\t\t\t\t|"); 		
			printf("\n|\t\t|   \\  /   |  |       |   \\  /   |  |    |  |\\\t       |\t\t\t\4\t\t|\n");
		 	  printf("|\t\t|    \\/    |  |       |    \\/    |  |    |  | \\\t       |\t\t\t\t\t|"); 		
			printf("\n|\t\t|          |  |______ |          |  |____|  |  \\       |\t\t\t\t\t|");
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		
			printf("\n|\t\t\t )\t\t______\t\t\t\t  ______\t\t\t\t|");
			printf("\n|\t\t\t\(\t\t|           /\\     |\\        /|  |\t\t\t\t\t|"); 		
			printf("\n|\t\t\t )\t\t|          /  \\    | \\      / |  |     \t\t\t\t\t|");
		   printf("\n|\t\t\t\(\t\t|______\   /____\\   |  \\    /  |  |______\t\t\t\t|"); 		
		   	  printf("\n|\t\t\t\t\t|      | /      \\  |   \\  /   |  |     \t\t\t\t\t|");
			printf("\n|\t\4\t\t\t\t|______|/        \\ |    \\/    |  |______\t\t\t\t|"); 		
			printf("\n|\t\t\t\t\t\t\t\t\t\4\t\t\t\t\t|");
					printf("\n|\t\t\t\t\t\t\t\t\t\t\4\t\t\t\t|");
			singleline();
			printlastline();
				system("COLOR 04");	
			system("cls");	
	
}
void mmg2(){
	
							print1stline();
				singlelineupperpart();
				singleline();
				printf("\n|\t\t\t\t\t\t\t\t\4\t\t\t\t\t\t|"); 		
				printf("\n|\t\t\t\t\t\t\t\4\t\t\t\t\t\t\t|");
				printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|");		
				printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t )\t|");
				printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|");		
				printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
				printf("\n|\t\t\t\t\4\t\t\t\t\t\t\t\t\t\t|"); 		
						printf("\n|\t\t\t\t_____\t\t    ______  ______\t \t\t\t\t\t|");
			printf("\n|\t\t|\\        /|  |       |\\        /|  |    |  |    |  \\    /\t\t\t\t\t|"); 		
			printf("\n|\t\t| \\      / |  |       | \\      / |  |    |  |    |   \\  /\t\t\t\t\t|");
			printf("\n|\t\t|  \\    /  |  |______ |  \\    /  |  |    |  |____|    \\/\t\t\t\t\t|"); 		
			printf("\n|\t\t|   \\  /   |  |       |   \\  /   |  |    |  |\\\t       |\t\t\t\4\t\t|\n");
		 	  printf("|\t\t|    \\/    |  |       |    \\/    |  |    |  | \\\t       |\t\t\t\t\t|"); 		
			printf("\n|\t\t|          |  |______ |          |  |____|  |  \\       |\t\t\t\t\t|");
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		
			printf("\n|\t\t\t )\t\t______\t\t\t\t  ______\t\t\t\t|");
			printf("\n|\t\t\t\(\t\t|           /\\     |\\        /|  |\t\t\t\t\t|"); 		
			printf("\n|\t\t\t )\t\t|          /  \\    | \\      / |  |     \t\t\t\t\t|");
		   printf("\n|\t\t\t\(\t\t|______\   /____\\   |  \\    /  |  |______\t\t\t\t|"); 		
		   	  printf("\n|\t\t\t\t\t|      | /      \\  |   \\  /   |  |     \t\t\t\t\t|");
			printf("\n|\t\4\t\t\t\t|______|/        \\ |    \\/    |  |______\t\t\t\t|");
				printf("\n|\t\t\t )\t\t\t\t\t\t\t\t\t\t\t|");
				singleline();
			printf("\n|\4\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		
			printf("\n|\t\t\t\t\t\t\t\t\t\t\4\t\t\t\t|");			
		printlastline();
		system("COLOR 04");	
			system("cls");
}
void mmg3(){
	print1stline();
		singlelineupperpart();
		singleline();
		singleline();
		printf("\n|\t\t\t\t\t\t\t\t\t\t\4\t\t\t\t|");		
		printf("\n|\t\t\t\t\t\t\4\t\t\t\t\t\t\t )\t|");
		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|");		
		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\ )\t|");
		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\(\t|"); 		
							printf("\n|\t\t\t\t_____\t\t    ______  ______\t \t\t\t\t\t|");
			printf("\n|\t\t|\\        /|  |       |\\        /|  |    |  |    |  \\    /\t\t\t\t\t|"); 		
			printf("\n|\t\t| \\      / |  |       | \\      / |  |    |  |    |   \\  /\t\t\t\t\t|");
			printf("\n|\t\t|  \\    /  |  |______ |  \\    /  |  |    |  |____|    \\/\t\t\t\t\t|"); 		
			printf("\n|\t\t|   \\  /   |  |       |   \\  /   |  |    |  |\\\t       |\t\t\t\4\t\t|\n");
		 	  printf("|\t\t|    \\/    |  |       |    \\/    |  |    |  | \\\t       |\t\t\t\t\t|"); 		
			printf("\n|\t\t|          |  |______ |          |  |____|  |  \\       |\t\t\t\t\t|");
			printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"); 		
			printf("\n|\t\t\t )\t\t______\t\t\t\t  ______\t\t\t\t|");
			printf("\n|\t\t\t\(\t\t|           /\\     |\\        /|  |\t\t\t\t\t|"); 		
			printf("\n|\t\t\t )\t\t|          /  \\    | \\      / |  |     \t\t\t\t\t|");
		   printf("\n|\t\t\t\(\t\t|______\   /____\\   |  \\    /  |  |______\t\t\t\t|"); 		
		   	  printf("\n|\t\t\t\t\t|      | /      \\  |   \\  /   |  |     \t\t\t\t\t|");
			printf("\n|\t\4\t\t\t\t|______|/        \\ |    \\/    |  |______\t\t\t\t|");
		printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 
		printf("\n|\t\t\t\(\t\t\t\t\t\t\t\t\t\t\t|"); 		
		printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
		singleline();
						
		printf("\n|______\4___________________________________________________________________\4____________________________________|"); 
			system("COLOR 04");	
			system("cls");
}

void AUTHOR(){
		system("cls");
		print1stline();
				printf("\n");

	printf("\n\n\n\t\t\t\t\t\t\4 M E M O R Y  G A M E \4");
	printf("\n\n\n\t\t\t\t\t       This game was created by:");
	printf("\n\n\t\t\t\t\t\t  T E A M N A P A Y");
	printf("\n\n\t\t\t\tFrances Aneth Rosales\t\tCristel Kaye Billones");
	printf("\n\n\t\t\t\t\tBS Applied Mathematics with Data Science\n\n\t\t\t\t\t\t   (AMDS) Student\n\n\n\t\t\t\t\t\tFar Eastern Univesity");
	printf("\n\n\n\n\n\n\n");
					printlastline();	
}
void EXIT(){
	
	system("cls");
		print1stline();
				printf("\n\n\n\n\n\n\n\n\n");
	system("COLOR 57");
	printf("\n\n\n\t\t\t\t\t\tT H A N K  Y O U\n\n\t\t\t\t\t      F O R  P L A Y I N G\n\n\n\t\t\t\t\t    \4 M E M O R Y  G A M E \4\n\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n");
					printlastline();	
	exit(0);
}	

int main(){
	theintro();

	mainmenu();	
}












