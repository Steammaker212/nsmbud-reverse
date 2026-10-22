#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_606F1254(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_606F1254(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_606F1254(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_606F1254(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_606F1254(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_606F1254(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_606F1254(int a1);
/* line: 0, address: 0x606f1254 */ int __fastcall sub_606F1254(int a1)
/* line: 1 */ {
/* line: 2 */   int *v2; // r5
/* line: 3 */   float v3; // s0
/* line: 4 */   int v4; // r6
/* line: 5 */   float v5; // s16
/* line: 6 */   float v6; // s0
/* line: 7 */   int v7; // r0
/* line: 8 */   float v8; // s2
/* line: 9 */   float v9; // s4
/* line: 10 */   float v10; // s2
/* line: 11 */   int result; // r0
/* line: 12 */   float v12[3]; // [sp+Ch] [bp-Ch] BYREF
/* line: 13 */ 
/* line: 14, address: 0x606f1274 */   v2 = (int *)(a1 + 6104);
/* line: 15, address: 0x606f1280 */   if ( *(_DWORD *)(a1 + 6104) >= (int)*(unsigned __int8 *)(a1 + 20) )
/* line: 16 */   {
/* line: 17, address: 0x606f1388 */     *(_BYTE *)(a1 + 19) = 1;
/* line: 18, address: 0x606f1384 */     return 1;
/* line: 19 */   }
/* line: 20 */   else
/* line: 21 */   {
/* line: 22, address: 0x606f12a0 */     v3 = *(float *)(MEMORY[0xCC6484] + 124);
/* line: 23, address: 0x606f12a8 */     sub_60007178(MEMORY[0xC7B3F8]);
/* line: 24, address: 0x606f12b4 */     v12[1] = v3 + 16.0;
/* line: 25, address: 0x606f12b8 */     v12[2] = v3;
/* line: 26, address: 0x606f12c0 */     v4 = *v2;
/* line: 27, address: 0x606f12c8 */     v5 = *(float *)(MEMORY[0xCC6484] + 116);
/* line: 28, address: 0x606f1308 */     v6 = (float)(v5 + flt_60B093F4[v4 & 7])
/* line: 29 */        + flt_60B09418[(5
/* line: 30 */                      * (unsigned __int64)(unsigned int)sead::Random::getU32((struct sead_Random *)(MEMORY[0xC9CF0C] + 1340))) >> 32];
/* line: 31, address: 0x606f130c */     v12[0] = v6;
/* line: 32, address: 0x606f1310 */     v7 = *(_DWORD *)(a1 + 20);
/* line: 33, address: 0x606f1314 */     if ( (unsigned __int16)v7 >> 12 )
/* line: 34 */     {
/* line: 35, address: 0x606f1338 */       v8 = *(float *)(MEMORY[0xCC6484] + 104);
/* line: 36, address: 0x606f133c */       v9 = v8 * -0.5;
/* line: 37, address: 0x606f1340 */       v10 = v8 * 0.5;
/* line: 38, address: 0x606f1344 */       if ( (unsigned __int16)v7 >> 12 != 1 )
/* line: 39, address: 0x606f1344 */         v10 = v9;
/* line: 40, address: 0x606f134c */       v12[0] = v6 + v10;
/* line: 41 */     }
/* line: 42, address: 0x606f1354 */     if ( (v7 & 0xF00) != 0 )
/* line: 43, address: 0x606f137c */       sub_605839E8(MEMORY[0xCAF15C], v12, 1, 3, 0, 0);
/* line: 44 */     else
/* line: 45, address: 0x606f1394 */       sub_606F140C();
/* line: 46, address: 0x606f139c */     result = *v2 + 1;
/* line: 47, address: 0x606f13a0 */     *v2 = result;
/* line: 48 */   }
/* line: 49, address: 0x606f13ac */   return result;
/* line: 50 */ }