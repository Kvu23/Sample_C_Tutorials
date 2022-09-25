#include <stdio.h>
#include <assert.h>


struct Customers{
	int order_id;
	char customer_name[20];
	float amount;

};

static_assert((sizeof(struct Customers) == 28), "The structure is consuming unexpected number of bytes");

int main(int argc, char const *argv[])
{
	/* code */
	printf("Hello world from kali linux\n\n");
	printf("sizeof(struct Customers ) = %lu\n\n", sizeof(struct Customers));

	return 0;
}
