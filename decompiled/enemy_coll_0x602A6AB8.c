#include "nsmbudx_prelude.h"
/* line: 0, address: 0x602a6ab8 */ int __fastcall Enemy_collisionFireball(float *a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v4; // r0
/* line: 3 */   float v5; // s16
/* line: 4 */   char v6; // r6
/* line: 5 */   int v7; // r3
/* line: 6 */   char v8; // r5
/* line: 7 */   char v9; // r12
/* line: 8 */   float *v10; // r0
/* line: 9 */   float v11; // r1
/* line: 10 */   float v13; // [sp+0h] [bp-20h] BYREF
/* line: 11 */   float v14; // [sp+4h] [bp-1Ch]
/* line: 12 */   float v15; // [sp+8h] [bp-18h]
/* line: 13 */   int v16; // [sp+Ch] [bp-14h]
/* line: 14 */   int v17; // [sp+10h] [bp-10h]
/* line: 15 */   char v18; // [sp+14h] [bp-Ch]
/* line: 16 */   char v19; // [sp+15h] [bp-Bh]
/* line: 17 */   char v20; // [sp+16h] [bp-Ah]
/* line: 18 */   _BOOL4 v21; // [sp+18h] [bp-8h]
/* line: 19 */   char v22; // [sp+1Ch] [bp-4h]
/* line: 20 */ 
/* line: 21, address: 0x602a6ac8 */   v4 = *(_DWORD *)(a3 + 64);
/* line: 22, address: 0x602a6ad0 */   v5 = *(float *)(v4 + 120);
/* line: 23, address: 0x602a6ad4 */   v6 = *(_BYTE *)(v4 + 84);
/* line: 24, address: 0x602a6ae0 */   (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 364))(a1);
/* line: 25, address: 0x602a6b08 */   v13 = a1[27] + a1[143];
/* line: 26, address: 0x602a6b18 */   v14 = a1[28] + a1[144];
/* line: 27, address: 0x602a6b28 */   v15 = a1[29] + a1[145];
/* line: 28, address: 0x602a6b2c */   v16 = v5 < 0.0;
/* line: 29, address: 0x602a6b30 */   v17 = 1;
/* line: 30, address: 0x602a6b40 */   v18 = 0;
/* line: 31, address: 0x602a6b48 */   v20 = 0;
/* line: 32, address: 0x602a6b4c */   v19 = 0;
/* line: 33, address: 0x602a6b64 */   ((void (__fastcall *)(_DWORD, float *, int, int))sub_60583000)(MEMORY[0xCAF15C], &v13, 3, v7);
/* line: 34, address: 0x602a6b74 */   v8 = sub_602856C4(a1 + 1573);
/* line: 35, address: 0x602a6b9c */   if ( ((unsigned int)&unk_60C907F4 & ~(1613392780 << v9) & 1) == 0 && _cxa_guard_acquire_0(&unk_60C907F4) )
/* line: 36 */   {
/* line: 37, address: 0x602a6bc8 */     dword_60C9081C = MEMORY[0xAFE3F8];
/* line: 38, address: 0x602a6bcc */     dword_60C90820 = 1081711002;
/* line: 39, address: 0x602a6bd0 */     dword_60C90824 = MEMORY[0xAFE3FC];
/* line: 40, address: 0x602a6bd8 */     dword_60C90828 = 1081711002;
/* line: 41, address: 0x602a6bdc */     _cxa_guard_release_0(&unk_60C907F4);
/* line: 42 */   }
/* line: 43, address: 0x602a6be8 */   v10 = (float *)((char *)&unk_60C907F0 + 8 * (v5 < 0.0));
/* line: 44, address: 0x602a6bec */   v11 = v10[11];
/* line: 45, address: 0x602a6bf4 */   v14 = v10[12];
/* line: 46, address: 0x602a6bfc */   v13 = v11;
/* line: 47, address: 0x602a6c08 */   v15 = -4.0;
/* line: 48, address: 0x602a6c18 */   v16 = MEMORY[0xC906E8];
/* line: 49, address: 0x602a6c24 */   v17 = 13174544;
/* line: 50, address: 0x602a6c2c */   v18 = v8;
/* line: 51, address: 0x602a6c30 */   v21 = v5 < 0.0;
/* line: 52, address: 0x602a6c34 */   v22 = v6;
/* line: 53, address: 0x602a6c3c */   sub_602A852C(a1 + 1526, &v13);
/* line: 54, address: 0x602a6c4c */   return 1;
/* line: 55 */ }