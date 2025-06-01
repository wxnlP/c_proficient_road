#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int *ptr1 = (int *)malloc(sizeof(int));
    free(ptr1);
    // ptr1 = NULL;
    if (NULL != ptr1) {
        *ptr1 = 100; 
    }

	int *ptr2 = (int *)malloc(sizeof(int));
	printf("[INFO] %p\n", ptr1);	
	printf("[INFO] %d\n", *ptr1);
	printf("[INFO] %p\n", ptr2);	
	printf("[INFO] %d\n", *ptr2);
    return 0;
}
