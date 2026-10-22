#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall Enemy_collisionHammer(float *a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall Enemy_collisionHammer(float *a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall Enemy_collisionHammer(float *a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall Enemy_collisionHammer(float *a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall Enemy_collisionHammer(float *a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall Enemy_collisionHammer(float *a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall Enemy_collisionHammer(float *a1, int a2, int a3);
/* line: 0, address: 0x602a6df4 */ int __fastcall Enemy_collisionHammer(float *a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v4; // r0
/* line: 3 */   int v5; // r1
/* line: 4 */   int v7; // r6
/* line: 5 */   int v8; // r5
/* line: 6 */   char v9; // r8
/* line: 7 */   char v10; // r6
/* line: 8 */   char v11; // r12
/* line: 9 */   char *v12; // r0
/* line: 10 */   int v13; // r1
/* line: 11 */   float v15[4]; // [sp+0h] [bp-38h] BYREF
/* line: 12 */   char v16; // [sp+10h] [bp-28h]
/* line: 13 */   char v17; // [sp+11h] [bp-27h]
/* line: 14 */   char v18; // [sp+12h] [bp-26h]
/* line: 15 */   char v19; // [sp+13h] [bp-25h]
/* line: 16 */   char v20; // [sp+14h] [bp-24h]
/* line: 17 */   char v21; // [sp+15h] [bp-23h]
/* line: 18 */   char v22; // [sp+16h] [bp-22h]
/* line: 19 */   int v23; // [sp+18h] [bp-20h] BYREF
/* line: 20 */   int v24; // [sp+1Ch] [bp-1Ch]
/* line: 21 */   int v25; // [sp+20h] [bp-18h]
/* line: 22 */   int v26; // [sp+24h] [bp-14h]
/* line: 23 */   int v27; // [sp+28h] [bp-10h]
/* line: 24 */   char v28; // [sp+2Ch] [bp-Ch]
/* line: 25 */   int v29; // [sp+30h] [bp-8h]
/* line: 26 */   char v30; // [sp+34h] [bp-4h]
/* line: 27 */ 
/* line: 28, address: 0x602a6e00 */   v4 = *(_DWORD *)(a2 + 84);
/* line: 29, address: 0x602a6e04 */   v5 = *(_DWORD *)(a2 + 88);
/* line: 30, address: 0x602a6e10 */   v23 = v4;
/* line: 31, address: 0x602a6e14 */   v24 = v5;
/* line: 32, address: 0x602a6e20 */   v25 = 0;
/* line: 33, address: 0x602a6e24 */   sub_602A38A4(a1, &v23);
/* line: 34, address: 0x602a6e28 */   v7 = *(_DWORD *)(a3 + 64);
/* line: 35, address: 0x602a6e38 */   v8 = sub_6000ADDC(a1, v7);
/* line: 36, address: 0x602a6e40 */   v9 = *(_BYTE *)(v7 + 84);
/* line: 37, address: 0x602a6e4c */   (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 364))(a1);
/* line: 38, address: 0x602a6e68 */   v15[0] = a1[27] + a1[143];
/* line: 39, address: 0x602a6e78 */   v15[1] = a1[28] + a1[144];
/* line: 40, address: 0x602a6e88 */   v15[2] = a1[29] + a1[145];
/* line: 41, address: 0x602a6e8c */   LODWORD(v15[3]) = v8;
/* line: 42, address: 0x602a6e90 */   v16 = 1;
/* line: 43, address: 0x602a6e98 */   v17 = 0;
/* line: 44, address: 0x602a6e9c */   v20 = 0;
/* line: 45, address: 0x602a6ea0 */   v19 = 0;
/* line: 46, address: 0x602a6ea8 */   v22 = 0;
/* line: 47, address: 0x602a6eac */   v21 = 0;
/* line: 48, address: 0x602a6eb0 */   v18 = 0;
/* line: 49, address: 0x602a6ebc */   ((void (__fastcall *)(_DWORD, float *, int))sub_60583000)(MEMORY[0xCAF15C], v15, 3);
/* line: 50, address: 0x602a6ecc */   v10 = sub_602856C4(a1 + 1573);
/* line: 51, address: 0x602a6ef4 */   if ( ((unsigned int)&unk_60C907F4 & ~(1613393636 << v11) & 1) == 0 && _cxa_guard_acquire_0(&unk_60C907F4) )
/* line: 52 */   {
/* line: 53, address: 0x602a6f20 */     dword_60C9081C = MEMORY[0xAFE3F8];
/* line: 54, address: 0x602a6f24 */     dword_60C90820 = 1081711002;
/* line: 55, address: 0x602a6f28 */     dword_60C90824 = MEMORY[0xAFE3FC];
/* line: 56, address: 0x602a6f30 */     dword_60C90828 = 1081711002;
/* line: 57, address: 0x602a6f34 */     _cxa_guard_release_0(&unk_60C907F4);
/* line: 58 */   }
/* line: 59, address: 0x602a6f40 */   v12 = (char *)&unk_60C907F0 + 8 * v8;
/* line: 60, address: 0x602a6f44 */   v13 = *((_DWORD *)v12 + 11);
/* line: 61, address: 0x602a6f4c */   v24 = *((_DWORD *)v12 + 12);
/* line: 62, address: 0x602a6f54 */   v23 = v13;
/* line: 63, address: 0x602a6f60 */   v25 = -1065353216;
/* line: 64, address: 0x602a6f70 */   v26 = MEMORY[0xC906E8];
/* line: 65, address: 0x602a6f7c */   v27 = 13174544;
/* line: 66, address: 0x602a6f84 */   v28 = v10;
/* line: 67, address: 0x602a6f88 */   v29 = v8;
/* line: 68, address: 0x602a6f8c */   v30 = v9;
/* line: 69, address: 0x602a6f94 */   sub_602A852C(a1 + 1526, &v23);
/* line: 70, address: 0x602a6fa0 */   return 1;
/* line: 71 */ }