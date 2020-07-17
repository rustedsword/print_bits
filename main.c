#include <misc_array.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	const make_array_ptr(args, argv, argc);

	if(ARRAY_SIZE(args) < 2)
		return printerrln("Usage: print_bits 0x1020 0xaefd"), EXIT_FAILURE;

	make_arrview_cfront(numbers, 1, args);
	foreach_array_ref(numbers, ref) {
		const unsigned long long v[1] = { strtoull(*ref, NULL, 0) };
		print_array_bits(v);
	}

	return 0;
}
