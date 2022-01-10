#include <stdio.h>
#include <string.h>
int findstring(char fullstring[], char searchstring[]){


int  i=0, j=0;
    char *nw;
    char *fw = fullstring;
    char *sw = searchstring;

    for(i = 0; i<strlen(fullstring); i++){
        if(*fw == *sw){
            nw = fw;
            for(j = 0;j<strlen(searchstring);j++){
                if(*nw == *sw){
                    nw++;
                    sw++;
                }else{
                  break;
                }
            }
            sw = searchstring;
            if(j == strlen(searchstring)){
                return i;
            }
        }
        fw++;
    }
  return -1;
}