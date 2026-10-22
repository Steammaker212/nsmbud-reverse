#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134EF4(_DWORD *a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134EF4(_DWORD *a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134EF4(_DWORD *a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134EF4(_DWORD *a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134EF4(_DWORD *a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134EF4(_DWORD *a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134EF4(_DWORD *a1, int a2);
/* line: 0, address: 0x60134ef4 */ int __fastcall sub_60134EF4(_DWORD *a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v3; // r0
/* line: 3 */   _BOOL4 v4; // r2
/* line: 4 */   int v5; // r1
/* line: 5 */   int v6; // r1
/* line: 6 */   int v7; // r5
/* line: 7 */   _DWORD v9[3]; // [sp+0h] [bp-28h] BYREF
/* line: 8 */   float v10[3]; // [sp+Ch] [bp-1Ch] BYREF
/* line: 9 */   _BYTE v11[8]; // [sp+18h] [bp-10h] BYREF
/* line: 10 */   _DWORD v12[2]; // [sp+20h] [bp-8h] BYREF
/* line: 11 */ 
/* line: 12, address: 0x60134f00 */   v3 = *(_DWORD *)(a2 + 64);
/* line: 13, address: 0x60134f24 */   v4 = *(float *)(v3 + 120) < 0.0;
/* line: 14, address: 0x60134f28 */   a1[1526] = v4;
/* line: 15, address: 0x60134f58 */   v10[0] = (float)((float)(fabsf(*(float *)(v3 + 120)) * 0.35) + 1.75) * *(float *)(4 * v4 + 0xAF6638);
/* line: 16, address: 0x60134f5c */   v10[1] = 2.75;
/* line: 17, address: 0x60134f60 */   v10[2] = 0.0;
/* line: 18, address: 0x60134f74 */   (*(void (__fastcall **)(_DWORD *, float *, int))(*a1 + 308))(a1, v10, 0x10000000);
/* line: 19, address: 0x60134f7c */   v5 = a1[69];
/* line: 20, address: 0x60134f88 */   v9[0] = a1[68];
/* line: 21, address: 0x60134f88 */   v9[1] = v5;
/* line: 22, address: 0x60134f98 */   v9[2] = 1166843904;
/* line: 23, address: 0x60134fa0 */   EffectData_create(21, v9, 0, 0);
/* line: 24, address: 0x60134fa8 */   v6 = a1[28];
/* line: 25, address: 0x60134fb4 */   v7 = MEMORY[0xC7F530];
/* line: 26, address: 0x60134fbc */   v12[0] = a1[27];
/* line: 27, address: 0x60134fc0 */   v12[1] = v6;
/* line: 28, address: 0x60134fcc */   mapPositionToScreen(v11, v12);
/* line: 29, address: 0x60134fe4 */   BasicSoundActor1_playSound(v7, "SE_EMY_DOWN_NO_SCORE", v11, 0);
/* line: 30, address: 0x60134ff0 */   a1[1527] = 3;
/* line: 31, address: 0x60134ffc */   return 1;
/* line: 32 */ }