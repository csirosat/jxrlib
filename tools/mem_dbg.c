#ifdef MEM_DEBUG
#include <stddef.h>

void* realloc_debug(void *ptr, size_t newsize, const char* func_name, const char* file_name, const int linenr)
{
	void *new_ptr;
	printf ("realloc called from function <%s>, file \"%s\", line %d", func_name, file_name, linenr);
	new_ptr = realloc(ptr, newsize);
	printf(" - paddr_in=0x%08x, paddr_out=0x%08x, size=%ld\n", ptr, new_ptr, newsize);

	return new_ptr;
}

void* malloc_debug(size_t size, const char* func_name, const char* file_name, const int linenr)
{
	void *ptr;
	printf ("malloc called from function <%s>, file \"%s\", line %d", func_name, file_name, linenr);
	ptr = malloc(size);
	printf(" - paddr_out=0x%08x, size=%ld\n", ptr, size);

	return ptr;
}

void* calloc_debug(size_t count, size_t eltsize, const char* func_name, const char* file_name, const int linenr)
{
	void *ptr;
	printf ("calloc called from function <%s>, file \"%s\", line %d", func_name, file_name, linenr);
	ptr = calloc(count, eltsize);
	printf(" - paddr_out=0x%08x, size=%ld\n", ptr, count * eltsize);

	return ptr;
}

void free_debug(void *ptr, const char* func_name, const char* file_name, const int linenr)
{
	printf ("free called from function <%s>, file \"%s\", line %d for paddr=0x%08x", func_name, file_name, linenr, ptr);
	free(ptr);
	printf(" - completed\n");
}

#endif
