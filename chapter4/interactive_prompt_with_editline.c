#include<stdio.h>
#include<stdlib.h>
#include<editline/readline.h>
#include<editline/history.h>

static char input[2048];

int main(int argc, char** argv){
    
    //print version and exit information
    puts("lispy version 100.0");//hey nobody uses that version
    puts("press ctrl+c to exit\n");
    //lets go in circles with loops
    while(1){
        //output our prompt
       char *input = readline("lispy>"); 
        // add input to history
        add_history(input);
        //here is what you orderd sir/madam
        printf("No you're a %s",input);
        //free this input if only the word free was free,emm or it is 
        //just a word that make you think you are free,later on this :)
        //took me three lines of comments to free input,who much does it take to free the world
        free(input);
    }
    return 0;
}
