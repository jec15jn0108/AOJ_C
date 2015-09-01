#include    <stdio.h>

int main(void)
{
	int indat[10];
	int max;
	int i, j;

	for (i = 0; i < 10; i++){
		scanf("%d", &indat[i]);
	}

	for (i = 0; i < 3; i++){
		max = 0;
		for (j = 0; j < 10; j++){
			if (indat[j] > indat[max]){
				max = j;
			}
		}
		printf("%d\n", indat[max]);
		indat[max] = 0;
	}

	return 0;
}