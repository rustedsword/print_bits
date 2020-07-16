#include <misc_array.h>
#include <string.h>
#include <stdlib.h>

/* Creates a pointer to an array from null-terminated string */
#define make_arrview_strlen(_name_, _str_) typeof(*(_str_))(*_name_)[ strlen(_str_) + 1 ] = (void*)(_str_);

int main(int argc, char **argv) {
	const make_array_ptr(args, argv, argc);

	if(ARRAY_SIZE(args) < 2)
		return printerrln("Usage: print_bits 0x1020 0xaefd"), EXIT_FAILURE;

	make_arrview_cfront(numbers, 1, args);
	foreach_array_ref(numbers, ref) {
		make_arrview_strlen(s, *ref);

		const int base = (ARRAY_SIZE(s) > 3 && arr(s)[0] == '0' && (arr(s)[1] == 'x' || arr(s)[1] == 'X')) ? 16 : 10;
		const unsigned long long v[1] = { strtoull(*s, NULL, base) };

		print_array_bits(v);
	}

	return 0;
}
