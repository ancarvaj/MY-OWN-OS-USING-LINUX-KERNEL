#include <syscall.h>

unsigned long _syscall(int num, void *a0, void *a1, void *a2, void *a3, void *a4, void *a5);

unsigned long _strlen(char *s)
{
	if (!s)
		return (0);
	unsigned int count = 0;
	while (s[count])
		count ++;
	return (count);
}

void delay(int tick)
{
	if (tick <= 0)
		return ;
	int i = 0;
	while (i<tick)
		i++;
	return ;
}

void	_print_str(char *str)
{
	_syscall(1/*write syscall= SYS_write*/, 1/*stdout console*/,str, (void *)_strlen(str), 0, 0, 0 );
	return ;
}

int main(void)
{

	char *msg = "first try using my own os using the linux kernel";
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	_print_str(msg);
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	_print_str("\n");
	
	int i = -1;
	while (++i<2)
	{
		delay(1000000000);
		_print_str("tic\n");
		delay(1000000000);
		_print_str("tac\n");
	}
	_print_str("exiting from this os\n");
	return (0);
}
