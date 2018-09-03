#include <stdio.h>

int main(){

	int c;
	int num;

    while ((c = getchar()) != EOF) {
    	num = 57 - c;
        if (!(num >= 0 && num <=9)) {
            putchar(c);
        } 
    }

	return 0;
}