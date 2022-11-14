#include <stdio.h>

int main(void){
	int i;
	int grade[5];
	
	for (i=0;i<5;i++){
		printf("input value (%i): ", i);
		scanf("%d", &grade[i]);
	}

	int *pointer = grade ;
	int temp = 0;
	for (i=0;i<5;i++){
		printf("grade[%i] = %i \n", i, *(pointer + i));
		temp += *(pointer + i);
	}

	printf("average: %i", temp/ 5);

	return 0;
}
