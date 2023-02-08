#include <stdio.h>


int main(void)
{
	auto val = 0;
	printf(" -- MAIN -- \n\n");
	for(auto i = 0; i<1;++i)
	{
		printf(" Output is pre ++: %d\n",i);
	}
	printf("\n");
	for(auto i = 0; i<1;i++)
        {
                printf(" Output is post ++: %d\n",i);
        }

	printf("\n The value of val in post-increment is: %d\n",val++);

	printf("\n The value of val in pre-increment is: %d\n",++val);

	return 0;
}
