/* PROGRAM TO LEFT SHIFT STRING
   e.g. INPUT :- ABCDEFGH ,LEFT SHIFT VALUE =2 
        OUTPUT :- CDEFGHAB
*/

#include <stdio.h>

void rev_string(char *start ,char *end){

    while(end > start){
    char temp;
    /* swap */
    temp = *start;
    *start = *end;
    *end = temp;
    end --;
    start ++;
    }

}
int main(void)
{
    char *str,ch ;
    char *start ,*end,*end_copy;
    int i = 0 , j = 1, n = 0;
    printf("enter the string: ");

    /* GET THE STRING ALLOCATE THE MEMMORY */
    str = (char*) malloc(sizeof(char)); //to get thge first character
    while(ch != '\n'){
    ch = getchar();
    str = (char*) realloc(str,j*sizeof(char));
    str[i] = ch;
    i++; j++;
    }
    str[i] = '\0';

    printf("enter the value string must be left shift by :");
    scanf("%d",&n);

    /* REVERSE THE STRING*/
    start = str;
    end = str;
    while(*(end+1)!= '\n'){
    end++;
    }
    rev_string(start ,end);
    start = str;
    rev_string(start ,end-n);
    rev_string(end-(n-1) ,end);
    printf("%s",str);
}
