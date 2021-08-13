#include <stdio.h>

int main() {
	char input;
	scanf("%c", &input);
	switch(input)
	{
		case 'A' :
			printf("%s", "best!!!");
			break;
		case 'B' :
			printf("%s", "good!!");
			break;
		case 'C' :
			printf("%s", "run!");
			break;
		case 'D' :
			printf("%s", "slowly~");
			break;
		default  :
			printf("%s", "what?");
	}
}

