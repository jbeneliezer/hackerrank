#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, i, j, l;
        scanf("%d", &n);
	l = 2*n - 1;
        int *arr = (int*) malloc(l*l*sizeof(int));
			    
	for (int i = 0; i < l; ++i) {
		for (int j = i; j < l - i; ++j) {
			*(arr + i*l + j) = n;
			*(arr + j*l + i) = n;
			*(arr + (l-1-i)*l + j) = n;
			*(arr + j*l + (l-1-i)) = n;
		}
		--n;
	}

	for (i = 0; i < l; ++i) {
		for (j = 0; j < l; ++j) {
			printf("%d ", *(arr + i*l + j));
		}
		printf("\n");
	}
				    
	free(arr);
	return 0;
}
