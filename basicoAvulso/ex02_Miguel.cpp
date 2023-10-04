#include <stdio.h>

int main(void) {
	
	int i;
	
	for(i = 0; i < 10; i++) {
		if(i % 2 == 0) {
			printf("%i\n", i);
			i++;
		}
	}
	return 0;
}
