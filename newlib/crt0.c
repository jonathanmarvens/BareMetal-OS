extern int main(int argc, char **argv, char **environ);

extern char __bss_start, _end; // BSS should be the last think before _end

// XXX: environment
char *__env[1] = { 0 };
char **environ = __env;

_start()
{
	char *i;

	write(1, "trololo\n", 8);

	// zero BSS
	for(i = &__bss_start; i < &_end; i++)
	{
		*i = 0; 
	} 

	// XXX: get argc and argv

	main(0,0, __env);

	return 0;
}
