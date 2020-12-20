#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>



#define bufs 20
struct fp {
  int (*fp)();
};
void noaccess(){
	printf("no win\n");
}
void haveaccess(){
	printf("win\n");
}
int main(int argc, char const **argv)
{
	struct fp *func;
	char *buf;

	buf = (char *)malloc(sizeof(char)*bufs);
	func = (int *)malloc(sizeof(struct fp));
	
	printf("buf %p ,func %p\n",buf , func);
	func->fp = noaccess;
	strcpy(buf, argv[1]);
    
    	func->fp();
}
