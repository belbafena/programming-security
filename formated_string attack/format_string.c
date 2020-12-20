
#include<stdio.h> 

static char t[1024];

int main(int argc, char** argv) 
{ 
    char buffer[125]; 
    
    strncpy(buffer, argv[1], 100); 
    printf(buffer);
  	
   
    printf("\n");
  
    return 0; 
} 



