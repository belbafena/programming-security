#include <stdio.h>

int main()
{
	int *poin_A;    //pointer for the first allocation 
	int *poin_B;    //pointer for the second allocation 
	

	poin_A = (int *)malloc(20);     //allocating 20-bytes and assign the adress to pointer A
	memset(poin_A, 'A', 20);

	printf("pointer A val %d\n", poin_A); // print pointer value
	free(poin_A);                  // free the memory 

	poin_B = (int *)malloc(60);    //allocating 17-bytes and assign the adress to pointer B
	memset(poin_B, 'B', 60);
	printf("pointer B val %d\n", poin_B); //print pointer value
	free(poin_B);                 // free the memory 
	

	

	return 0;
}