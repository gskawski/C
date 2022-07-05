#include <stddef.h>
#include <criterion/criterion.h>

#define ARR_LEN(array) (sizeof(array) / sizeof *(array))

extern void do_test (size_t length, const int input[length], int user_array[length], size_t exp_len, const int expected[length]);

#define sample_test(array, expected) do_test(ARR_LEN(array), array, array, ARR_LEN(expected), expected)

Test(tests_suite, sample_tests)
{
	sample_test(((int[])
		{1}
	), ((const int[])
		{1}
	));
  
