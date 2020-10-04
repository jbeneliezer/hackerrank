#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
	return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
	return -strcmp(a, b);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
	int a_count = 0, b_count = 0, i, j;
    int appears;
    for (i = 0; i < strlen(a); ++i) {
		appears = 0;
		for (j = 0; j < i; ++j) {
			if (a[i] == a[j]) {
				appears = 1;
				break;
			}
		}
        if (appears == 0) {
            ++a_count;
        }
    }
    for (i = 0; i < strlen(b); ++i) {
		appears = 0;
	    for (j = 0; j < i; ++j) {
			if (b[i] == b[j]) {
				appears = 1;
				break;
			}
		}

        if (appears == 0) {
               ++b_count;
        }
    }		
}

int sort_by_length(const char* a, const char* b) {
	return strlen(a) == strlen(b) ? lexicographic_sort(a, b): (strlen(a) > strlen(b)) ? 1: -1;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
	int i, j;
    for (i = 0; i < len-1; i++) {
		for (j = 0; j < len-i-1; j++) {
			if (cmp_func(*(arr + j), *(arr + j + 1)) > 0) {
				char* tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
			}
		}
	}
}


int main() 
{
	    int n;
	        scanf("%d", &n);
		  
		char** arr;
		arr = (char**)malloc(n * sizeof(char*));
			  
		for(int i = 0; i < n; i++){
			*(arr + i) = malloc(1024 * sizeof(char));
			scanf("%s", *(arr + i));
			*(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
							        }
			      
			string_sort(arr, n, lexicographic_sort);

		for(int i = 0; i < n; i++)
			printf("%s\n", arr[i]);
			printf("\n");

			string_sort(arr, n, lexicographic_sort_reverse);

		for(int i = 0; i < n; i++)
			printf("%s\n", arr[i]); 
			printf("\n");

			string_sort(arr, n, sort_by_length);

		for(int i = 0; i < n; i++)
			printf("%s\n", arr[i]);    
			printf("\n");

			string_sort(arr, n, sort_by_number_of_distinct_characters);

		for(int i = 0; i < n; i++)
			printf("%s\n", arr[i]); 
			printf("\n");

		return 0;
}
