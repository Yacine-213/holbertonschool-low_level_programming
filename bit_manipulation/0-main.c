#include <stdio.h>
#include "main.h"

int main(void)
{
	unsigned int n;

	n = binary_to_uint("1");
	printf("%u\n", n);  /* Expected: 1 */
	n = binary_to_uint("101");
	printf("%u\n", n);  /* Expected: 5 */
	n = binary_to_uint("1e01");
	printf("%u\n", n);  /* Expected: 0 (invalid input) */
	n = binary_to_uint("1100010");
	printf("%u\n", n);  /* Expected: 98 */
	n = binary_to_uint("0000000000000000000110010010");
	printf("%u\n", n);  /* Expected: 402 */
	return (0);
}
