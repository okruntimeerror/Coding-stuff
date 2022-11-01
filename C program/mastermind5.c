#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define COLORS 8
#define FOUR 4
#define TEN 10
#define TRUE 1
#define FALSE 0
#define THREE 3

// mastermind 5 global constants
#define NINE 9
#define ZERO 0
#define INVALID -1


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
    char guess[TEN];

    printf("\nPut four letters in no spaces and no duplicates \n");
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

                    if( isValid(colors, guess[col]) == TRUE  && !isDuplicate(guess) == TRUE )
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
void populateColorArray(char colors[COLORS]){

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
printf("\n");
// the actual printing of the single color letters
return;
}

enum Colors {Black, Green, Navy, Orange, Pink, Red, Violet, White};

void convertColor(int color){

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

int getColor(){

int color;

color = rand() % 8;


return color;
}

void setCode(int codeArray[FOUR] )
{
int i;
int code = 0;

int isUsed[COLORS] = {INVALID};

for(i = 0; i <4; i++)
{
    codeArray[i] = INVALID;
}

const int USED = 1;

for ( code = 0; code < 4; code++)
{

    int color = getColor();

    if (isUsed[code] = -1)
    {
        isUsed[code] = USED;
        codeArray[code] = color;
    }
}


// this is the color code generator
    /*for(code = 0; code < 4; code++)
    {
    codeArray[code] = getColor(code);
    }
    */

// the print to screen loop
printf("Integer secret code\n");
for(code = 0; code < 4; code++){
printf("%d, ",codeArray[code]);
}
// convert color using code array to what the integers actually represent
printf("\nColor secret code \n");
for(code = 0; code < 4; code++)
{
convertColor(codeArray[code]);
}
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

void Displayboard(int guesses[TEN][FOUR], int clues[TEN][FOUR])
{
int i;
int j;
printf("+----------------------------------------------------+\n");
printf("|                   SECRET CODE                      |\n");
printf("+----------------------------------------------------+\n");
printf("|                  ?    ?   ?   ?                    |\n");
printf("+----------------------------------------------------+\n");
printf("|      PLAYER GEUSS      |          CLUES            |\n");
printf("+----------------------------------------------------+\n");
// maintain the first 7 lines  while modifying the last to do stuff

for (i = NINE; i > -1; i--)
{
printf("|");
        for (j = 0; j < FOUR; j++)
        {
            guesses[i][j];
            if (guesses[i][j] == INVALID)
            {
               printf("    ? ");
            }
            if (guesses[i][j] != INVALID)
            {
               printf("   %c  ", guesses[i][j]);
            }
        }
printf("  |");
         for (j = 0; j < FOUR; j++)
        {
            clues[i][j];
            if (clues[i][j] == INVALID)
            {
               printf("   ?  ");
            }
            if (clues[i][j] != INVALID)
            {
               printf(" %c  ", clues[i][j]);
            }
        }
printf(" |");
printf("\n+----------------------------------------------------+\n");


}
// end of the biggest block of text

return;
};

void getClues(int guesses[TEN][FOUR], int clues[TEN][FOUR], int secretCode[FOUR] , char colors[] )
{
static int row = 0;
int redPegs = 0;
int whitePegs =0;
int idx;
int col;


for ( col = 0; col < 4; col++)
{

    idx = INVALID;


    ;
    idx = searchArray( guesses, colors[secretCode[col]] , row);


    if ( idx == col )
    {

        redPegs++;
    }
    else if ( idx != INVALID && idx != col)
    {

        whitePegs++;
    }


}
evaluatePegs(redPegs, whitePegs, clues);
    row++;
    whitePegs = 0;
    redPegs = 0;





return;
}

void evaluatePegs(int redPeg, int whitePeg, int clues[TEN][FOUR])
{
static int row = 0;
int col;

if ( redPeg > 0 )
{

    for ( col = 0; col < redPeg; col++)
    {
        clues[row][col] = 'R';
    }
}
if ( whitePeg > 0 )
{
    for ( col ; col < whitePeg + redPeg; col++)
    {
       clues[row][col] ='W';
    }

}
row++;

return;
}

int searchArray(int guesses[TEN][FOUR], int color, int row )
{
int idx = INVALID;
int col;

for ( col = 0; col < 4; col++)
{
    if (guesses[row][col] == color)
    {
        idx = col;
    }
}

return idx;
}

int checkWin(int clues[TEN][FOUR])
{
static int row = 0;
int count = 0 ;
int col;

for ( col = 0; col <= 3; col++)
{
    if ( clues[row][col] == 'R' )
    {
        count++;
    }

}
row++;


if ( count == 4 )
{

    return TRUE;
}
if ( count != 4 )
{
    return FALSE;
}

}

int isDuplicate(char guess[TEN])
{
int i;
int count = 0;
int j;
//loop through the array of guess
for (i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        if (guess[i] != guess[j+1])
        {
            count = count + 1;
        }
    }
}
// even I am confused at the math going on here, however duplicates dont add up to 7 internally
// so im keeping it like that
if (count != 7)
{

    return TRUE;

}
if (count = 7)
{
    return FALSE;
}


}
int main()
{
int i;
int win;


char colors[COLORS] = {};
// stores the single character representation of the colors defined in enumeration color

int secretCode[FOUR] = {};
//  stores the Code Breaker secret code

int guesses[TEN][FOUR] = {};
// stores the Code Breakerís guesses for each of 10 turns

int clues[TEN][FOUR] = {};
// stores the Code Makerís clues after the Code Breakerís guess for each of 10 turns


  srand(time(NULL));

  WelcomeScreen();
  // stage 1 + stage 2
  ClearScreen();

  setCode(secretCode);

  ClearScreen();

 // Displayboard()
  populateColorArray(colors);  // populate color array i shown twice so it shows the options before inputting choices

  initializeArray(guesses);

  initializeArray(clues);

  Displayboard(guesses, clues);


  for ( i = 0; i < TEN; i++)
  {
      populateColorArray(colors); // just so i can see all the color options

      getGuess(guesses, colors);

      getClues(guesses, clues, secretCode, colors);

      Displayboard(guesses,clues);
      win = checkWin(clues);

      if ( win == TRUE )
      {
          printf("you have guessed the secret code the secret code was ");
         for (i = 0; i < FOUR; i++)
         {
             printf("%c, ", colors[secretCode[i]]);
         }
         break;
      }
      if ( win == FALSE && i == 9 )
      {
          printf("you did not guess the correct code, the correct answer is ");
          for (i = 0; i < FOUR; i++)
         {
             printf("%c, ", colors[secretCode[i]]);
         }
         break;
      }
  }

 // getGuess(guesses, colors);

return 0;
}
