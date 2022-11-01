

#include <stdio.h>
#include <stdlib.h>

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

  WelcomeScreen();
  // stage 1 + stage 2
  ClearScreen();

  Displayboard();
  // end pf program


return 0;
}




