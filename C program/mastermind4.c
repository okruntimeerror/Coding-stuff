#include <ctype.h>
#include <string.h>
// above added for mastermind 4
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
//Current new additions to mastermind
#define COLORS 8

// NEW GLOBAL CONSTANTS
#define FOUR 4
#define TEN 10
#define TRUE 1
#define FALSE 0
// mastermind 4 global constants
#define THREE 3

// below are the new functions added for mastermind 4

void initializeArray(int guesses[TEN][FOUR])
{
    int row;
    int col;


    for (row = 0; row < TEN; row++ )
    { //
        for (col = 0; col < FOUR; col++){
            // nested for loop to go through the 2d array guesses
            guesses[row][col]= -1;


        }

    }


    return;
}

int isValid(char colors[COLORS], char color)
{

int i;
int valid = FALSE;

for (i = 0; i < 8; i++)
{
   if (colors[i] == toupper(color))
   {
    valid = TRUE;
    return valid;
   }
}
valid = FALSE;
return valid;
}
void getGuess(int guesses[TEN][FOUR], char colors[COLORS])
{
    static int row = 0;
    int col;
    int valid = FALSE;
    char guess[10];

    printf("\nPut four letters in no spaces\n");
    while (valid == FALSE)
    {

        scanf("%s", &guess);
        printf("\nYou entered: %s\n",guess);

        // end of the first stage of the big while loop

        if (strlen(guess) == 4) // stage two begins here with 4 characters being enter into guess
        {
            for (col = 0; col < 4; col++)
            {
                guess[col] = toupper(guess[col]);
                printf("%c",guess[col]);
            }
            printf("\n");
            for (col = 0; col < 4; col++)
            {
                if(isalpha(guess[col]))
                {

                    if( isValid(colors, guess[col]) == TRUE)
                       {
                        guesses[row][col] = guess[col];

                        if (col == 3)
                        {
                         valid = TRUE;
                        }
                       }
                    else // else statement for ISVALId
                    {
                    printf("\nERROR character inputted is not a color choice\n");
                    valid = FALSE;
                    break;
                    }
                }
                else // else statement for loop of is alpha
                {
                 printf("error integer inputted\n");
                 valid = FALSE;
                 break;
                }
            }

        }
        else if (strlen(guess) < 4) // else statement for the strlen guess
        {
        printf("getGuess: You did not enter enough characters\n");
        valid = FALSE;
        }
        else if (strlen(guess) > 4)
        {
        printf("getGuessYou entered too many characters\n");
        valid = FALSE;
        }

    row++; // I. increment static variable row by one
    }


    return;
}



//Beginning of the mastermind 3 shanaynays
void populateColorArray(char colors[]){

int i;

for(i = 0; i < 8; ++i){

if ( i == 0 )
{
 colors[0] = 'B';
}
if ( i == 1)
{
 colors[1] = 'G';
}
if ( i == 2 )
{
 colors[2] = 'N';
}
if ( i == 3 )
{
 colors[3] = 'O';
}
if ( i == 4 )
{
 colors[4] = 'P';
}
if ( i == 5 )
{
 colors[5] = 'R';
}
if ( i == 6 )
{
 colors[6] = 'V';
}
if ( i == 7 )
{
 colors[7] = 'W';
}
}

// the decision making part where it assigns a single letter for each color
for(i = 0; i < 8; ++i){
    printf("%c, ", colors[i]);
}
// the actual printing of the single color letters
return;
}



enum Colors {Black, Green, Navy, Orange, Pink, Red, Violet, White};

void setCode(int codeArray[]){

int code;
// this is the color code generator
for(code = 0; code < 4; code++){
    codeArray[code] = getColor(code);
}

// the print to screen loop
printf("Integer secret code\n");
for(code = 0; code < 4; code++){
  printf("%d, ",codeArray[code]);
}
// convert color using code array to what the integers actually represent
printf("\nColor secret code \n");
for(code = 0; code < 4; code++){
 convertColor(codeArray[code]);
}
return;
}

int getColor(){

int color;

color = rand() % 8;


return color;
}

void convertColor(color){

if (color == 0 ) {
    printf("Black, ");
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

void WelcomeScreen(){
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

void ClearScreen(){
printf("\n###################################################\n");

printf( "\n            <Hit enter to continue>            \n \n");

char userButton;

scanf("%c", &userButton);

//system("clear");
system("cls");

return;
};

void Displayboard(){
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
char colors[COLORS] = {};
// stores the single character representation of the colors defined in enumeration color

int secretCode[FOUR] = {};
//  stores the Code Breaker secret code

int guesses[TEN][FOUR] = {};
// stores the Code Breaker’s guesses for each of 10 turns

int clues[TEN][FOUR] = {};
// stores the Code Maker’s clues after the Code Breaker’s guess for each of 10 turns


  srand(time(NULL));

  WelcomeScreen();
  // stage 1 + stage 2
  ClearScreen();

  setCode(secretCode);

  ClearScreen();

  Displayboard();

  populateColorArray(colors);

  initializeArray(guesses);

  getGuess(guesses, colors);

return 0;
}
