/* this program will reverse the sequesnce of the words in a given sentence 

e.g:- input :- this is the string to be reversed
      output :-reversed be to string the is this

*/

#include <stdio.h>

void reverse(char *start , char *end){
    char temp;

    if(start == NULL || end == NULL)
    return;

    while(end > start ){
    temp   = *start;
    *start = *end;
    *end   =  temp;
    start++;
    end--;
    }
}

void token_rev(char str[]){

    char *start = str;
    char *end = str;

    //parse the whole string
    while(*start != '\0'){

        if(*end == ' ' || *end == '\0'){
        reverse(start,end -1);
        start = end+1;
        end++;
        }
        else{
        end++;
        }

    }

}

int main(void)
{

char str[] = "this is the string to be reversed";

char *start = str;   /* start of the string */
char *end   = str ;  /* end of the string */

    while(*end != '\0'){
    end ++;
    }
    end--; /* last character of the string */
    
    /* reverse each character of the sentence */
    reverse(start,end);
    /* reverse each word of the string */
    token_rev(str);
    printf("%s \n",str);
    return 1;
}
