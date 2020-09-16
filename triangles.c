#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
		int a;
			int b;
				int c;
};

typedef struct triangle triangle;

void swap(triangle* a, triangle* b) {
	    triangle tmp = *a;
	        *a = *b;
		    *b = tmp;
}

double area(triangle* tr) {
	    double p = (tr->a + tr->b + tr->c) / 2;

	        return sqrt(p * (p - tr->a) * (p - tr->b) * (p - tr->c));
}

void sort_by_area(triangle* tr, int n) {
		/**
		 * 	* Sort an array a of the length n
		 * 		*/
	    int i, j;
	        for (i = 0; i < n; ++i) {
			        for (j = 0; j < n; ++j) {
					            if (area((tr + j)) > area((tr + j + 1))) {
							                    swap((tr + j), (tr + j + 1));
									                }
						            }
				    }

}

int main()
{
		int n;
			scanf("%d", &n);
				triangle *tr = malloc(n * sizeof(triangle));
					for (int i = 0; i < n; i++) {
								scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
									}
						sort_by_area(tr, n);
							for (int i = 0; i < n; i++) {
										printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
											}
								return 0;
}
