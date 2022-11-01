
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
//Current new additions to mastermind
int colors = 8;

enum Colors {Black, Green, Navy, Orange, Pink, Red, Violet, White};

int setCode(){

int Color1 = getColor();
int Color2 = getColor();
int Color3 = getColor();
int Color4 = getColor();

printf("Integer secret code \n%d, %d, %d, %d,\n" ,Color1, Color2, Color3, Color4);


printf("Color secret code \n", Color1, Color2, Color3, Color4);

convertColor(Color1);
convertColor(Color2);
convertColor(Color3);
convertColor(Color4);

return;
}

int getColor(){

int color;

color = rand() % 8;


return color;
}

int convertColor(color){

if (color == 0 ) {
    printf("black, ");
}
if (color == 1 ) {
    printf("Green, ");
}
if (color == 2 ) {
    printf("Navy, ");
}
if (color == 3 ) {
    printf("Orange, ");
}
if (color == 4 ) {
    printf("Pink, ");
}
if (color == 5 ) {
    printf("Red, ");
}
 if (color == 6 ) {
    printf("Violet, ");
 }
 if (color == 7) {
    printf("White, ");
 }
// the big if mess that this looks like however it has every enum represented

return;
}
// An attempt to contain the new additions to the code

int WelcomeScreen(){
printf("####################################################\n");
printf("##########                                ##########\n");
printf("##########           MASTERMIND           ##########\n");
printf("##########                                ##########\n");
printf("####################################################\n\n");

printf("Rules: \n1. The Codemaker sets a secret code. \n");
printf("2. The Codebreaker tries to match the code using logic and deduction.\n");
printf("3. After each move, the Codemaker gives clues to the Codebreaker\n");
printf("4. The Codebreaker has 10 attempts to guess the secret code\n");

// the big block of text at the beginning explaining the game

return;
};

//Placing the screens in order of how the user would view it

int ClearScreen(){
printf("\n###################################################\n");

printf( "\n            <Hit enter to continue>            \n \n");

char userButton;

scanf("%c", &userButton);

//system("clear");
system("cls");

return;
};

int Displayboard(){
printf("+----------------------------------------------------+\n");
printf("|                   SECRET CODE                      |\n");
printf("+----------------------------------------------------+\n");
// separation for easy copy and past of the same 3 printf's
printf("+----------------------------------------------------+\n");
printf("|                  ?    ?   ?   ?                    |\n");
printf("+----------------------------------------------------+\n");

printf("+----------------------------------------------------+\n");
printf("|      PLAYER GEUSS      |          CLUES            |\n");
printf("+----------------------------------------------------+\n");

printf("+----------------------------------------------------+\n");
printf("|       ?      ?     ?     ?        |   ?  ?  ?  ?   |\n");
printf("+----------------------------------------------------+\n");

printf("+----------------------------------------------------+\n");
printf("|       ?      ?     ?     ?        |   ?  ?  ?  ?   |\n");
printf("+----------------------------------------------------+\n");

printf("+----------------------------------------------------+\n");
printf("|       ?      ?     ?     ?        |   ?  ?  ?  ?   |\n");
printf("+----------------------------------------------------+\n");

printf("+----------------------------------------------------+\n");
printf("|       ?      ?     ?     ?        |   ?  ?  ?  ?   |\n");
printf("+----------------------------------------------------+\n");

printf("+----------------------------------------------------+\n");
printf("|       ?      ?     ?     ?        |   ?  ?  ?  ?   |\n");
printf("+----------------------------------------------------+\n");

printf("+----------------------------------------------------+\n");
printf("|       ?      ?     ?     ?        |   ?  ?  ?  ?   |\n");
printf("+----------------------------------------------------+\n");

printf("+----------------------------------------------------+\n");
printf("|       ?      ?     ?     ?        |   ?  ?  ?  ?   |\n");
printf("+----------------------------------------------------+\n");

printf("+----------------------------------------------------+\n");
printf("|       ?      ?     ?     ?        |   ?  ?  ?  ?   |\n");
printf("+----------------------------------------------------+\n");

printf("+----------------------------------------------------+\n");
printf("|       ?      ?     ?     ?        |   ?  ?  ?  ?   |\n");
printf("+----------------------------------------------------+\n");

printf("+----------------------------------------------------+\n");
printf("|       ?      ?     ?     ?        |   ?  ?  ?  ?   |\n");
printf("+----------------------------------------------------+\n");

// end of the biggest block of text

return;
};


int main()
{

  srand(time(NULL));

  WelcomeScreen();
  // stage 1 + stage 2
  ClearScreen();

  setCode();

  ClearScreen();

  Displayboard();
  // end pf program


return 0;
}




