#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL)); // same number dis
	
    // valuable setting
    int Exp = 0, LVL = 0;
    int Random, players;
    int game_1_lvl, game_2_lvl, game_3_lvl, game_4_lvl;
    int Game_type;
  
    // testgame file
	FILE* fp = fopen("testgame.txt", "r");
    
    for (int escape = 0; escape != 1;) {
    	Random = 0;
    	
    	//game selete menu
    	printf("pick a game\n");
    	printf("1 >>> mary go around (with a bomb)\n");
    	printf("2 >>> still working on it\'s name\n");
	    printf("3 >>> grow or not?\n");
    	printf("4 >>> casino\n");
    	printf("choose a game number >>> ");
    	scanf("%d", &Game_type);
    	
    	system("cls");
    	
    	//game playing menu
    	switch (Game_type) {
    		case 1:
				players = rand()%(9-4+1)+4;
				//printf("%d", players);
				Random = rand()%(50-10+1)+10;
				//printf("%d", Random);
				
				Sleep(1000);
				break;
			case 2:
				//working on it.
				break;
			case 3:
				//this too.
				break;
			case 4:
				//this too.
				break;
		}
		system("cls");
	}
    
    
    //Sleep(1000); <--- wait 1 second
	//system("cls"); <--- clear
  
    return 0;
}
