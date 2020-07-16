#include <misc_array.h>
#include <string.h>
#include <stdlib.h>

#define make_strarr(name, str) typeof(*(str))(*name)[ strlen(str) + 1 ] = (void*)str;

int main(int argc, char **argv) {
	const make_array_ptr(args, argv, argc);

	if(ARRAY_SIZE(args) != 2)
		return printerrln("Usage: print_bits 0x1020"), EXIT_FAILURE;

	make_strarr(s, arr(args)[1]);

	const int base = (ARRAY_SIZE(s) > 3 && arr(s)[0] == '0' && (arr(s)[1] == 'x' || arr(s)[1] == 'X')) ? 16 : 10;
	const unsigned long long v[1] = { strtoull(*s, NULL, base) };
	print_array_bits(v);

	return 0;
}
