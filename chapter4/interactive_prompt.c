#include<stdio.h>

static char input[2048];

int main(int argc, char** argv){
    
    //print version and exit information
    puts("lispy version 100.0");//hey nobody uses that version
    puts("press ctrl+c to exit\n");
    puts(input);
    //lets go in circles with loops
    while(1){
        //output our prompt
        
        fputs("lispy>",stdout);
        //lets listen to the ppl cause they know it all or they know nothing
        fgets(input ,2048,stdin);

        //here is what you orderd sir/madam
        printf("No you're a %s",input);
    }
    return 0;
}
