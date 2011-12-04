#include <stdio.h>
#include <linux/unistd.h>

#define __NR_get_slob_amt_claimed 337
#define __NR_get_slob_amt_free 338


int main(void)
{
  	long claimed = syscall(__NR_get_slob_amt_claimed);
	printf("Amount claimed: %ld\n", claimed);
	long free = syscall(__NR_get_slob_amt_free);
	printf("Amount free: %ld\n", free);
  	return 0;
}

