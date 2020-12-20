#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>

int copying(char *buf, int len){
	char *newbuf[200];
	int x = sizeof(newbuf);

	if(len > x){
		return -1;
	}
	
	return memcpy(newbuf,buf,len);
}


int main(int argc, char *argv[]){

	int input;
	int *buf;
	
	if (argc<3)
		return -1;
    
	input = atoi(argv[1]);
  	buf = malloc(sizeof(char*));

  	buf= copying(argv[2] , input);
  printf("hi%p\n",buf );

}