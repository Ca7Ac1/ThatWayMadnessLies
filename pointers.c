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

	printf("unsigned int:\nint ptr: %p %u\nchar ptr: %p %u\n\n", rightPointer, *rightPointer, wrongPointer, *wrongPointer);
	printf("unsigned int: \n%x\n%u\n\n", ui, ui);

	printf("bytes of unsigned int: \n%hhu\n%hhu\n%hhu\n%hhu\n\n", *wrongPointer,
		   wrongPointer[1], wrongPointer[2], wrongPointer[3]);

	wrongPointer[0]++;
	wrongPointer[1]++;
	wrongPointer[2]++;
	wrongPointer[3]++;

	printf("unsigned int after modification: \n%x\n%u\n\n", ui, ui);

	wrongPointer[0] += 16;
	wrongPointer[1] += 16;
	wrongPointer[2] += 16;
	wrongPointer[3] += 16;

	return 0;
}
