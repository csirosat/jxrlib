#include <stddef.h>
#include "tools/JXRGlobals.h"
#include "tools/mem_dbg.h"

void* g_jxr_enc_mem_ptr[NUM_ENC_MEM_BUFFS];

void InitMemoryHack(void)
{
	memset(g_jxr_enc_mem_ptr, 0, sizeof(g_jxr_enc_mem_ptr));
}

void ReleaseMemoryHack(void)
{
	int idx;
	for (idx=0; idx<NUM_ENC_MEM_BUFFS; idx++)
	{
		if (g_jxr_enc_mem_ptr[idx])
		{
			free_dbg(g_jxr_enc_mem_ptr[idx]);
			g_jxr_enc_mem_ptr[idx] = NULL;
		}
	}
}
