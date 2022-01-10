#include <stdio.h>
#include <ctype.h>

#define MIN(ett,två)(ett<två?ett:två)   // 14.1 macro

void prog1415(){
printf("Program 14.1\n");

int x,y;
printf("Type in 2 values\n");
scanf("%i",&x);
scanf("%i",&y);
printf("The lower value is: %i\n\n",MIN(x,y));


//////////////////////////////////////////////////////////////////////////////////

printf("Program 15.1\n");

FILE *ogfile = fopen("filebefore.txt", "r");
FILE *newfile = fopen("fileafter.txt","w");

int i;
while (EOF != (i = fgetc(ogfile))){
  fputc(toupper(i), newfile);
}

fclose(ogfile);
fclose(newfile);
printf("textfile has been converted to uppercase!\n\n");


///////////////////////////////////////////////////////////////////////////////////

printf("Program 15.2\n");     
    FILE *fileone = fopen("fileone.txt", "r");   
    FILE *filetwo = fopen("filetwo.txt","r");   
    FILE *output = fopen("output.txt", "w+");  
    int a,b;  
  

    fseek(fileone, 0, SEEK_END); 
    fseek(filetwo, 0, SEEK_END);

    int c = ftell(fileone);  
    int d = ftell(filetwo);  
    

    fseek(fileone, 0, SEEK_SET); 
    fseek(filetwo, 0, SEEK_SET);

    if(c > d) {   
        while (EOF != (a=fgetc(fileone))){     
                  
            if ((b=fgetc(filetwo)) == EOF){     
                fputc( a ,output);   
            } else {   
                    fputc( a ,output);   
                    fputc( b ,output);   
            }  
        } 
    } else if (c < d){  
        while (EOF != (b=fgetc(filetwo))){   
            if ((a=fgetc(fileone)) == EOF){ 
                fputc( b ,output); 
            } else{ 
                fputc( a ,output); 
                fputc( b ,output); 
            } 
        }
    } else { 
        while ((EOF != (a=fgetc(fileone)))  &&  (EOF != (b=fgetc(filetwo)))){  
            fputc( a ,output); 
            fputc( b ,output);  
        }  
        
    }
    printf("output.txt has been edited!\n\n");
    char buffer[100];
    fseek(output, 0, SEEK_SET);
    fread(buffer, c+d, 1, output);

    printf("The output file contains this: ");
    printf("%s\n",buffer);

    fclose(fileone); 
    fclose(filetwo); 
    fclose(output);
}