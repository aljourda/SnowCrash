#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;
	if(argc > 0){
		do {
			argv[1][i] -= i;
			i++;
		} while (i < strlen(argv[1]));
		puts(argv[1]);
	}
	return 0;
}