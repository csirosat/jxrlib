#ifndef JXRGLUELIB_JXRGLOBALS_H_
#define JXRGLUELIB_JXRGLOBALS_H_

#define NUM_ENC_MEM_BUFFS	32
enum jxr_enc_mem_ptr_idx
{
	MEMPTR_PREDIFOMEM=0,
	MEMPTR_HUFFCBPCY=1,
	MEMPTR_HUFFCBPCY1=2,
	MEMPTR_VLCTABLES =3,
	MEMPTR_CODINGCTXT=24,
	MEMPTR_QUANTIZERDC=25,
	MEMPTR_QUANTIZERLP=26,
	MEMPTR_QUANTIZERHP=27,
	MEMPTR_STRENCTILE=28,
	MEMPTR_STRENCPB=29,
	MEMPTR_CREATEWSFILE =30,
	MEMPTR_PKIMAGEENCODECREATE =31
};

extern void* g_jxr_enc_mem_ptr[NUM_ENC_MEM_BUFFS];

void InitMemoryHack(void);
void ReleaseMemoryHack(void);

#endif /* JXRGLUELIB_JXRGLOBALS_H_ */