#include <stdio.h>

int main()
{
	int *poin_A;    //pointer for the first allocation 
	int *poin_B;    //pointer for the second allocation 
	

	poin_A = (int *)malloc(20);     //allocating 20-bytes and assign the adress to pointer A
	printf("pointer A val %d\n", poin_A); // print pointer value
	free(poin_A);                  // free the memory 

	poin_B = (int *)malloc(60);    //allocating 60-bytes and assign the adress to pointer B
	printf("pointer B val %d\n", poin_B); //print pointer value
	free(poin_B);                 // free the memory 
	

	

	return 0;
}