#include<stdio.h>
int main(){
    FILE *ptr;//FILE is a datatype
    ptr = fopen("abc.txt","w");//w:- opens a text file for writing; a new file is created if the file doesn't exist.
   if(ptr ==NULL)
   {
    printf("error opening file \n");
    return 1;
   }
    fprintf(ptr,"%s","hello! ,Good afternoon everyone Today is spacial day but also a bit sad.we are here to say goodbye. "); 
   //fprintf() function used to  write the text to the code
   //fclose()  function is use to close the file and releases the memory stream
    fclose(ptr);
    return 0;
}