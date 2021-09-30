#include <stdio.h>

int main()
{
	char c = 'a';
	int i = 1;
	long l = 70000;
	
	printf("char: %c\nhex: %x\ndecimal: %lu\n\n", c, &c, &c);
	printf("int: %d\nhex: %x\ndecimal: %lu\n\n", i, &i, &i);
	printf("long: %lu\nhex: %x\ndecimal: %lu\n\n", l, &l, &l);

	char *pc = &c;
	int *pi = &i;
	long *pl = &l;

	printf("char pointer: %p\n", pc);
	printf("int pointer: %p\n", pi);
	printf("long pointer: %p\n\n", pl);

	*pc = 'b';
	*pi = 2;
	*pl = 80;

	printf("Altered values using pointer: \n");
	printf("char: %c\n", c);
	printf("int: %d\n", i);
	printf("long: %lu\n\n", l);
	
	unsigned int ui = 700000000;
	int *rightPointer = &ui;
	char *wrongPointer = &ui;
	
	printf("unsigned int: \n%x\n%u\n\n", ui, ui);
	
	printf("bytes of unsigned int: \n%p\n%p\n%p\n%p\n\n", wrongPointer, 
	++wrongPointer, ++wrongPointer, ++wrongPointer);
	return 0;
}
