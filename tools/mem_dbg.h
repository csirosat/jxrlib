#ifndef TOOLS_MEM_DBG_H_
#define TOOLS_MEM_DBG_H_

#ifdef MEM_DEBUG
	#define realloc_dbg(ptr, newsize) realloc_debug(ptr, newsize, __FUNCTION__, __FILE__, __LINE__)
	void* realloc_debug(void *ptr, size_t newsize, const char* func_name, const char* file_name, const int linenr);

	#define malloc_dbg(size) malloc_debug(size, __FUNCTION__, __FILE__, __LINE__)
	void* malloc_debug(size_t size, const char* func_name, const char* file_name, const int linenr);

	#define calloc_dbg(count, eltsize) calloc_debug(count, eltsize, __FUNCTION__, __FILE__, __LINE__)
	void* calloc_debug(size_t count, size_t eltsize, const char* func_name, const char* file_name, const int linenr);

	#define free_dbg(ptr) free_debug(ptr, __FUNCTION__, __FILE__, __LINE__)
	void free_debug(void *ptr, const char* func_name, const char* file_name, const int linenr);
#else
	#define realloc_dbg(ptr, newsize) realloc(ptr, newsize)
	#define malloc_dbg(size) malloc(size)
	#define calloc_dbg(count, eltsize) calloc(count, eltsize)
	#define free_dbg(ptr) free(ptr)
#endif

#endif /* TOOLS_MEM_DBG_H_ */
