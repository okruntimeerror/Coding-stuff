
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LIMIT 20
char ** doubleIt(char **arr, int *maxsize);
char ** populate(char ** words, FILE *fptr, int *currentsize, int *maxsize);
char* generateSentence(char ** noun, char ** verb, char ** adjective, char **
preposition, char ** article, int nounsize, int verbsize, int adjsize, int
prepositionsize, int articlesize); //write sentence to console window
void generateStory(char ** noun, char ** verb, char ** adjective, char **
preposition, char ** article, int nounsize, int verbsize, int adjsize, int
prepositionsize, int articlesize, FILE *fptr); //write story to txt file
void displaySentence(char * sentence);
void cleanUp(char ** nouns, char ** verbs, char ** adjectives, char **
prepositions, char ** articles, int nounsize, int verbsize, int adjsize, int
prepositionsize, int articlesize);

char ** doubleIt(char **arr, int *maxsize)
{
  // allocates memory inside the rows of doubled_arr
  char ** doubled_arr = (char **)malloc(sizeof(char *) * (*maxsize) * 2);

    if(doubled_arr == NULL)
    {
       "error inside doubleit function";
        exit(1);
    }
    // declare i for while loop
    int i = 0;
    //allocates double memory inside of the columns of doubled_arr
    while(i < *maxsize)
    {
        doubled_arr[i] = (char *)malloc(sizeof(char) * (*maxsize) * 2);
        i++;
    }

    for(int x = 0; x < *maxsize; x++)
    {
        for (int y = 0; y < *maxsize; y++)
        {
            doubled_arr[x][y] = arr[x][y];
        }
    }

    free(arr);

    return doubled_arr;
}

char ** populate(char ** words, FILE *fptr, int *currentsize, int *maxsize)
{

  //declaring the variables
  char  c;
  int x = 0, y = 0;

// defensive programming for if the file gives NULL.
  if (fptr == NULL)
  {
    printf("erm what the deuce.\n");
    exit (1);
  }
  // goes and reads till the end of the file
  while ((c = fgetc(fptr)) != EOF)
  {
    // We are getting values from file into print statement
    // Don't know how to store it into words                    ////// 0 1 2 3 4 5 6 7 8 9
                                                                //0//// t i m e \0 \n
                                                                //1///  p e r s o n \0 \n
                                                                //2///  y e a r \0 \n
                                                                //3///  w a y
                                                                //4///  d a y
                                                                //5///  t h i n g
                                                                //6///  m a n
                                                                //7///  w o r l d
                                                                //8///  l i f e
                                                                //9///  h a n d
                                                                //10///  p a r t
                                                                //11///  c h i l d
                                                                //12///  e y e
                                                                //13///  w o m a n
                                                                //14///  p l a c e
                                                                //15///  w o r k
                                                                //16///  w e e k
                                                                //17///  c a s e
                                                                //18///  p o i n t
                                                                //19///  g o v e r n m e n t
                                                                //20///  c o m p a n y
                                                                //21///  n u m b e r
                                                                //22///  g r o u p
                                                               //23///  p r o b l e m
                                                                //24///  f a c t

    printf("yuh\n");
     if (c == '\n')
     {
       words[x++][y];
       printf("y = %d\n",y);
     }
     else if(c == ' ')
     {
        y = 0;

       x++;
        printf("x = %d\n",x);
     }

  }

printf("boobs\n");

printf("x = %d\n",x);
  printf("%c",words[1][1]);

  int j = 0;
  for (int i = 0; i < x; i++)
  {
    printf("-_____-\n");
    while (1)
    {
        if(words[i][j] == '\0')
        {
          break;
        }
        j++;
      printf("%c", words[i][j]);
    }
    printf("\n");
  }


}
/*
char* generateSentence(char ** noun, char ** verb, char ** adjective, char **
preposition, char ** article, int nounsize, int verbsize, int adjsize, int
prepositionsize, int articlesize)
{


}

void generateStory(char ** noun, char ** verb, char ** adjective, char **
preposition, char ** article, int nounsize, int verbsize, int adjsize, int
prepositionsize, int articlesize, FILE *fptr)
{

}

void displaySentence(char * sentence)
{

}

void cleanUp(char ** nouns, char ** verbs, char ** adjectives, char **
prepositions, char ** articles, int nounsize, int verbsize, int adjsize, int
prepositionsize, int articlesize)
{

}
*/
int main()
{
//setup randomness
int x;
printf("Enter seed: ");
scanf("%d", &x);
srand(x); //set seed
//declare necessary variables
int nounsize = 0;
int verbsize = 0;
int adjsize = 0;
int prepositionsize = 0;
int nounmaxsize = 5;
int verbmaxsize = 5;
int adjmaxsize = 5;
int prepositionmaxsize = 5;
const int articlemaxsize = 3; //there are only 3 articles in the english
//language a, an, and the. that is why const is applied
printf("poobis\n");
printf("Welcome to the random sentence generator.\n");

//double pointers
char ** nouns = NULL;
char ** verbs = NULL;

char ** adjectives = NULL;
char ** preposition = NULL;
char ** articles = NULL;
nouns = (char **) malloc(sizeof(char *) * nounmaxsize);

verbs = (char **) malloc(sizeof(char *) * verbmaxsize);
adjectives = (char **) malloc(sizeof(char *) * adjmaxsize);
preposition = (char **) malloc(sizeof(char *) * prepositionmaxsize);
articles = (char **) malloc(sizeof(char *) * articlemaxsize);
//make sure malloc was able to allocate memory
if(nouns == NULL || verbs == NULL || adjectives == NULL || preposition ==
NULL || articles == NULL)
{
printf("malloc was not successful\n");
printf("Program will now terminate.\n");
exit(1);
}

//populate articles using strcpy. numbers represent how many characters are
//needed. this includes \0 character
articles[0] = (char *) malloc(sizeof(char) * 2);
strcpy(articles[0], "A");

articles[1] = (char *) malloc(sizeof(char) * 3);
strcpy(articles[1], "An");
articles[2] = (char *) malloc(sizeof(char) * 4);
strcpy(articles[2], "The");
//open the file of words
FILE *fptr = fopen("nouns.txt", "r");
FILE *fptr2 = fopen("verbs.txt", "r");
FILE *fptr3 = fopen("adjectives.txt", "r");
FILE *fptr4 = fopen("preposition.txt", "r");

//make sure the files were opened properly
if(fptr == NULL || fptr2 == NULL || fptr3 == NULL || fptr4 == NULL)
{
printf("file was not successful in opening.");
printf("Program will now terminate.\n");
exit(1);
}

//populate the dynamic array
nouns = populate(nouns, fptr, &nounsize, &nounmaxsize); //populate nouns
//verbs = populate(verbs, fptr2, &verbsize, &verbmaxsize); //populate verbs
//adjectives = populate(adjectives, fptr3, &adjsize, &adjmaxsize); //populate
//adjectives
//preposition = populate(preposition, fptr4, &prepositionsize,
//&prepositionmaxsize); //populate prepositions

//close the files
fclose(fptr);
fclose(fptr2);
fclose(fptr3);
fclose(fptr4);
/*now lets generate 5 sentences and write them to the console window
 printf("Let's generate some random sentences that don't make sense.\n");
for(int x = 0; x < 5; ++x)
{
//char * sentence = generateSentence(nouns, verbs, adjectives,
preposition, articles, nounsize, verbsize, adjsize, prepositionsize,
articlemaxsize);
//displaySentence(sentence);
//free(sentence);
printf("Now let's create three stories that just don't make sense.\n");
fptr = fopen("story1.txt", "w");
//generateStory(nouns, verbs, adjectives, preposition, articles, nounsize,
verbsize, adjsize, prepositionsize, articlemaxsize, fptr); //story 1
fclose(fptr);
fptr = fopen("story2.txt", "w");
//generateStory(nouns, verbs, adjectives, preposition, articles, nounsize,
verbsize, adjsize, prepositionsize, articlemaxsize, fptr); //story 2
fclose(fptr);
fptr = fopen("story3.txt", "w");
//generateStory(nouns, verbs, adjectives, preposition, articles, nounsize,
verbsize, adjsize, prepositionsize, articlemaxsize, fptr); //story 3
fclose(fptr);
//cleanUp(nouns,verbs, adjectives, preposition, articles, nounmaxsize,
verbmaxsize, adjmaxsize, prepositionmaxsize, 3);
printf("The stories were generated successfully and stored in their
respective text files.\n");
printf("Check them out!\n");
*/
return 0;
}
