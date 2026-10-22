#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EE98(int *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EE98(int *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EE98(int *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EE98(int *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EE98(int *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EE98(int *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EE98(int *a1);
/* line: 0, address: 0x6079ee98 */ int __fastcall sub_6079EE98(int *a1)
/* line: 1 */ {
/* line: 2 */   float32x2_t v1; // d0
/* line: 3 */   float32x2_t v2; // d1
/* line: 4 */   int *v4; // r5
/* line: 5 */   int v5; // r0
/* line: 6 */   int v6; // r0
/* line: 7 */   int result; // r0
/* line: 8 */   int v8; // r1
/* line: 9 */   _DWORD v9[4]; // [sp+0h] [bp-20h] BYREF
/* line: 10 */   _DWORD v10[4]; // [sp+10h] [bp-10h] BYREF
/* line: 11 */ 
/* line: 12, address: 0x6079eeb8 */   v4 = a1 + 3041;
/* line: 13, address: 0x6079eebc */   v5 = a1[3041] + 1;
/* line: 14, address: 0x6079eec8 */   v1.n64_u32[0] = 1.0;
/* line: 15, address: 0x6079eecc */   *v4 = v5;
/* line: 16, address: 0x6079eed4 */   v2.n64_f32[0] = (float)v5 / 30.0;
/* line: 17, address: 0x6079eedc */   *(v4 - 2) = vmin_f32_v2(v2, v1).n64_u32[0];
/* line: 18, address: 0x6079eee0 */   v10[0] = 0;
/* line: 19, address: 0x6079eee8 */   v9[0] = 16384000;
/* line: 20, address: 0x6079eef0 */   sub_6083224C(v4 - 16, v10, v9);
/* line: 21, address: 0x6079eef4 */   v6 = *(v4 - 16);
/* line: 22, address: 0x6079eefc */   if ( v6 )
/* line: 23, address: 0x6079ef08 */     a1[40] += v6;
/* line: 24 */   else
/* line: 25, address: 0x6079ef14 */     sub_60773F4C(a1);
/* line: 26, address: 0x6079ef1c */   sub_6079F31C(a1);
/* line: 27, address: 0x6079ef24 */   sub_607712D4(a1);
/* line: 28, address: 0x6079ef34 */   (*(void (__fastcall **)(int *))(*a1 + 1104))(a1);
/* line: 29, address: 0x6079ef40 */   if ( *v4 <= 18 )
/* line: 30 */   {
/* line: 31, address: 0x6079ef48 */     a1[23] = 0;
/* line: 32, address: 0x6079ef50 */     sub_607711C8(a1);
/* line: 33, address: 0x6079ef50 */     goto LABEL_6;
/* line: 34 */   }
/* line: 35, address: 0x6079ef88 */   sub_60771D8C(a1);
/* line: 36, address: 0x6079ef90 */   sub_607711C8(a1);
/* line: 37, address: 0x6079efa4 */   if ( sub_607C16A0(a1, 0) == 1 )
/* line: 38 */   {
/* line: 39, address: 0x6079efb0 */     result = sub_607868D4((int)(a1 + 172), v10);
/* line: 40, address: 0x6079efb8 */     if ( result == 1 )
/* line: 41 */     {
/* line: 42, address: 0x6079efbc */       v8 = v10[0];
/* line: 43, address: 0x6079efc4 */       a1[20] = v10[0];
/* line: 44, address: 0x6079efc8 */       result = sub_60773F3C((int)a1, v8);
/* line: 45, address: 0x6079efcc */       a1[40] = result;
/* line: 46 */     }
/* line: 47 */   }
/* line: 48 */   else
/* line: 49 */   {
/* line: 50, address: 0x6079efe4 */     if ( !sub_6075FC38((int)a1) )
/* line: 51 */     {
/* line: 52 */ LABEL_6:
/* line: 53, address: 0x6079ef54 */       result = sub_60793CA8(a1[2840]);
/* line: 54, address: 0x6079ef64 */       if ( result == 1 )
/* line: 55, address: 0x6079ef78 */         return Player_changeState((int)a1, 13388732, 1);
/* line: 56, address: 0x6079ef80 */       return result;
/* line: 57 */     }
/* line: 58, address: 0x6079f004 */     v10[2] = a1[1724];
/* line: 59, address: 0x6079f010 */     v10[1] = a1[1723];
/* line: 60, address: 0x6079f01c */     v10[0] = a1[1722];
/* line: 61, address: 0x6079f028 */     v9[2] = a1[1718];
/* line: 62, address: 0x6079f034 */     v9[1] = a1[1717];
/* line: 63, address: 0x6079f040 */     v9[0] = a1[1716];
/* line: 64, address: 0x6079f048 */     ((void (__fastcall *)(int *, _DWORD *, _DWORD *, int))sub_6079AE3C)(a1, v10, v9, 1);
/* line: 65, address: 0x6079f058 */     result = sub_6079AFAC(a1, v10, v9);
/* line: 66, address: 0x6079f060 */     if ( result == 2 )
/* line: 67 */     {
/* line: 68, address: 0x6079f088 */       result = a1[3040] & 0xFFFFFFFE;
/* line: 69, address: 0x6079f090 */       if ( result != 2 )
/* line: 70, address: 0x6079f094 */         return sub_6079E724((int)a1);
/* line: 71 */     }
/* line: 72, address: 0x6079f068 */     else if ( result == 1 )
/* line: 73 */     {
/* line: 74, address: 0x6079f070 */       result = a1[304] | 0x10000;
/* line: 75, address: 0x6079f074 */       a1[304] = result;
/* line: 76 */     }
/* line: 77 */   }
/* line: 78, address: 0x6079ef80 */   return result;
/* line: 79 */ }