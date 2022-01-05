#include <stdio.h>
#include <libsecret.h>

int main(int argc, const char *argv[])
{
    printf("What is the answer to the ultimate question of "
	   "life, the universe, and everything?\n");
    printf("The answer is: %d\n", get_meaning_of_life());
    return 0;
}
