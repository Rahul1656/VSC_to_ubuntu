#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define maxlen 200
int main()
{
   // declare variables
   char buffer[maxlen];
   int fd;
   int read_in;
   fd=open("sample.txt",O_RDONLY);
   // initialize count variables with zero
  
    int in_word = 0;
    int lines = 0;
    int words = 0;
    int chs=0;
    char c;
    while (read(fd, &c, 1) == 1) {
        chs++; 

        if(c == ' ' || c == '\t' || c == '\0' || c == '\n') {
            if (in_word) {
                in_word = 0;
                words++;
        }

        if(c = '\0' || c == '\n') lines++;

        } 
        else {
        in_word = 1;
        }
    }
        
   // display count values
   printf("\nCharacter counts = %d\n", chs);
   printf("Word counts = %d\n", words+1);
   printf("Line counts = %d\n", lines+1);
  
   return 0;
}