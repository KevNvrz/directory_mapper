#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	std::cout << " -------- TEST -------- " << std::endl;
	struct flock lock;
	lock.l_type = F_WRLCK;    /* read/write (exclusive versus shared) lock */
	lock.l_whence = SEEK_SET; /* base for seek offsets */
	lock.l_start = 0;         /* 1st byte in file */
	lock.l_len = 0;           /* 0 here means 'until EOF' */
	lock.l_pid = getpid();    /* process id */

	return 0;
}
