#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // valuable setting
    int Exp = 0, LVL = 0;
    int Random;
    int game_1_lvl, game_2_lvl, game_3_lvl, game_4_lvl;
    int Game_type;
  
    // testgame file
	FILE* fp = fopen("testgame.txt", "r");
    
    printf("pick a game\n");
    printf("1 >>> mary go around (with a bomb)\n");
    printf("2 >>> still working on it\n");
    printf("3 >>> grow or not?\n");
    printf("4 >>> casino\n");
    printf("choose a game number >>> ");
    
    //Sleep(1000);
	//system("cls");
  
    return 0;
}
