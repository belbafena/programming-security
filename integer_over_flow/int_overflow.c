#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main(int argc, char *argv[]){
	int i,x,value;
	
	char *fun;
	
    if(argc <3) return -1;	
	
	i = atoi(argv[1]);
 	value = i*sizeof(char*);



	fun = (char *)malloc(value);
	printf("%p\n",fun );
	
	if (fun == NULL){
		
		return 01;
	}
	for(x = 0; x < i; x++){
		fun[x]= argv[2][x];
	}
	
	printf("%s\n",fun );

free(fun);

}
