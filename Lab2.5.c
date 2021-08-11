#include <stdio.h>
#define MAX 20	  /* size of array	*/
int main()
{
	int table[MAX];
	int i,index=0;	 /* index for the array */
    char ch;
    printf("Enter your characters (. to end): \n");
	while (index < MAX) // signalled by a Control-Z
      {  
	      scanf(" %c",&ch);
          if(ch == '.'){
          	break;
		  }else      /* valid entry */{			
            table[index] = ch;
            index++;
          }
    } //end while
    int numVowel = 0;
    printf("Print out characters: \n");
    for (i=0; i<=index; i++){
       printf(" %c\n",table[i]);
       char vowel=table[i];
       
	   switch(vowel){
        case 'a':
        	numVowel=numVowel + 1;
        	break;
		case 'e':
			numVowel=numVowel + 1;
			break;
		case 'i':
			numVowel=numVowel + 1;	
			break;
		case 'o':
			numVowel=numVowel + 1;	
			break;
		case 'u':
			numVowel=numVowel + 1;	
			break;
		case 'A':
			numVowel=numVowel + 1;	
			break;
		case 'E':
			numVowel=numVowel + 1;	
			break;
		case 'I':
			numVowel=numVowel + 1;	
			break;
		case 'O':
			numVowel=numVowel + 1;	
			break;
		case 'U':
			numVowel=numVowel + 1;	
			break;
		defualt:
			numVowel=numVowel;	
			break;
		}
	}
	printf("Number of vowels: %d\n", numVowel);
    return 0;
}
