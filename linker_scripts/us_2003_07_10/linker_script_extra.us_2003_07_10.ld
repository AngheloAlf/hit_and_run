_gp = sections_SCOMMON_START + 0x7FF0;

ENTRYPOINT = _start;
ENTRY(ENTRYPOINT);

_stack = 0x01FF0000;
_stack_size = 0x00010000;
_heap_size = 0xFFFFFFFF;

_codestart = sections_alloc_VRAM;

_fbss = sections_SCOMMON_START;

end = sections_noload_VRAM_END;
_end = end;


/* VU symbols */
/* TODO: Should they be part of its own linker script? Or maybe part of VU assembly files? */
VU_BASE = 0x00000000; //
vu0_SphereVSphere = 0x00000000; //
vu0_begin = 0x00000000; //
_VU_DMA_OFFSET_size = 0x00000010; //
vu0_SphereVAABox = 0x000000A8; //
VU_LOAD_CONTEXT = 0x000000B0; //
vu0_SphereVTBox = 0x000000B8; //
VU_CHECKSKINNING_LOADPRIMGROUP = 0x00000190; //
VU_LOADPRIMGROUP = 0x000001E8; //
VU_XGKICK = 0x00000260; //
vu0_sincos = 0x00000260; //
VU_UNLIT_PROGRAM = 0x00000280; //
vu0_unitmatrix = 0x00000338; //
vu0_mulmatrix = 0x00000350; //
vu0_rotateX = 0x000003D0; //
vu0_translate = 0x00000410; //
vclUnlit_CodeEnd = 0x00000420; //
vu0_transform = 0x00000428; //
VU_UNLIT_TRI = 0x00000430; //
vu0_quaternionmatrix = 0x00000448; //
vu0_quaternionmultiply = 0x000004C0; //
vu0_end = 0x00000500; //
VU_UNLITFOG_TRI = 0x00000508; //
vclLit_CodeStart = 0x00000528; //
VU_LIT_PROGRAM = 0x00000528; //
vclLit_CodeEnd = 0x00000630; //
VU_LIT_TRI = 0x00000640; //
VU_LITFOG_TRI = 0x00000738; //
VU_LITSPEC_TRI = 0x00000748; //
VU_LITSPECFOG_TRI = 0x00000BE0; //
VU_UNLIT_TRI_MT = 0x00000BF0; //
VU_REFRACT = 0x00000E98; //
VU_TOON = 0x00000FE8; //
VU_REFLECT = 0x00001270; //
VU_LINE = 0x00001688; //
VU_DONOTHING = 0x00001748; //
VU_SHADOW_VOL = 0x00001778; //
VU_SNOW = 0x00001970; //
VU_SKINBLEND_NT = 0x00003098; //
VU_SKINBLEND1B_NT = 0x000032E0; //
VU_SKINBLEND_CT = 0x00003438; //
VU_SKINBLEND1B_CT = 0x00003678; //
VU_END = 0x00003750; //
PDDI_VU1_code_end = 0x00003750; //
