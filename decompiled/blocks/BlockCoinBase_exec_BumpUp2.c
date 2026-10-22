#include "nsmbudx_prelude.h"

// ---- addr: 0x605b68e0 */ int __fastcall BlockCoinBase_executeState_BumpUp2(_BYTE *a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   _DWORD *v3; // r5
/* line: 4 */   int v4; // r0
/* line: 5 */   float v5; // r1
/* line: 6 */   int v6; // r2
/* line: 7 */   int v7; // r0
/* line: 8 */   float *v8; // r6
/* line: 9 */   int v9; // r2
/* line: 10 */   float v10; // r0
/* line: 11 */   int v11; // r2
/* line: 12 */   float v12; // s0
/* line: 13 */   float v13; // s0
/* line: 14 */   float v14; // s16
/* line: 15 */   int v16; // [sp+0h] [bp-10h] BYREF
/* line: 16 */   float v17; // [sp+4h] [bp-Ch]
/* line: 17 */   int v18; // [sp+8h] [bp-8h]
/* line: 18 */ 
/* line: 19, address: 0x605b68f4 */   if ( *((_DWORD *)a1 + 1724) )
/* line: 20 */   {
/* line: 21, address: 0x605b6908 */     v3 = a1 + 6964;
/* line: 22, address: 0x605b6908 */     v2 = *((_DWORD *)a1 + 1741);
/* line: 23, address: 0x605b691c */     if ( !v2 || (v4 = v2 - 1, (*v3 = v4) == 0) )
/* line: 24 */     {
/* line: 25, address: 0x605b6958 */       if ( sub_605B4CC4(a1) == 1
/* line: 26 */         && *((int *)a1 + 1723) >= 8
/* line: 27 */         && (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 236))(a1) != 3 )
/* line: 28 */       {
/* line: 29, address: 0x605b6974 */         *((_DWORD *)a1 + 1723) = dword_60AF4C90[*((_DWORD *)a1 + 1723) - 8];
/* line: 30, address: 0x605b6978 */         v5 = *((float *)a1 + 28);
/* line: 31, address: 0x605b6978 */         v6 = *((_DWORD *)a1 + 29);
/* line: 32, address: 0x605b697c */         v16 = *((_DWORD *)a1 + 27);
/* line: 33, address: 0x605b697c */         v17 = v5;
/* line: 34, address: 0x605b697c */         v18 = v6;
/* line: 35, address: 0x605b69a0 */         v17 = *((float *)a1 + 1699) + v5;
/* line: 36, address: 0x605b69b4 */         ((void (__fastcall *)(_DWORD, int *, int, _DWORD))sub_60582B14)(MEMORY[0xCAF15C], &v16, 2, (char)a1[6850]);
/* line: 37, address: 0x605b69c0 */         a1[6960] = 1;
/* line: 38, address: 0x605b69c8 */         *v3 = 8;
/* line: 39 */       }
/* line: 40 */     }
/* line: 41, address: 0x605b69d8 */     v7 = *((_DWORD *)a1 + 1723);
/* line: 42, address: 0x605b69dc */     v8 = (float *)(a1 + 6796);
/* line: 43, address: 0x605b69e4 */     v9 = v7 + 1;
/* line: 44, address: 0x605b69f0 */     if ( v7 > 13 )
/* line: 45, address: 0x605b69f0 */       v9 = 14;
/* line: 46, address: 0x605b69f4 */     *((_DWORD *)a1 + 1723) = v9;
/* line: 47, address: 0x605b69fc */     v10 = flt_60B05370[v9];
/* line: 48, address: 0x605b6a00 */     v11 = dword_60B053AC[v9];
/* line: 49, address: 0x605b6a0c */     *((float *)a1 + 1699) = v10;
/* line: 50, address: 0x605b6a10 */     *((_DWORD *)a1 + 36) = v11;
/* line: 51, address: 0x605b6a18 */     v12 = v10;
/* line: 52, address: 0x605b6a20 */     *((_DWORD *)a1 + 37) = v11;
/* line: 53 */   }
/* line: 54 */   else
/* line: 55 */   {
/* line: 56, address: 0x605b6a3c */     v13 = *((float *)a1 + 31) + -0.281;
/* line: 57, address: 0x605b6a48 */     if ( v13 <= -2.0 )
/* line: 58, address: 0x605b6a48 */       v13 = 2.0;
/* line: 59, address: 0x605b6a4c */     *((float *)a1 + 31) = v13;
/* line: 60, address: 0x605b6a5c */     (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 232))(a1, 1);
/* line: 61, address: 0x605b6a68 */     v8 = (float *)(a1 + 6796);
/* line: 62, address: 0x605b6a70 */     v12 = *((float *)a1 + 31) + *((float *)a1 + 1699);
/* line: 63, address: 0x605b6a74 */     *((float *)a1 + 1699) = v12;
/* line: 64 */   }
/* line: 65, address: 0x605b6a78 */   v14 = *((float *)a1 + 28);
/* line: 66, address: 0x605b6a88 */   *((float *)a1 + 28) = v14 + v12;
/* line: 67, address: 0x605b6a8c */   CollisionMgr_process(a1 + 648);
/* line: 68, address: 0x605b6a90 */   *((float *)a1 + 28) = v14;
/* line: 69, address: 0x605b6aa0 */   if ( *v8 <= 0.0 )
/* line: 70 */   {
/* line: 71, address: 0x605b6abc */     *((_DWORD *)a1 + 1564) &= ~0x400u;
/* line: 72, address: 0x605b6ac8 */     CollisionMgr_setSensor(a1 + 648, 0, 2);
/* line: 73, address: 0x605b6ad0 */     *v8 = 0.0;
/* line: 74, address: 0x605b6ad4 */     *((_DWORD *)a1 + 1725) = 0;
/* line: 75, address: 0x605b6ae4 */     (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 212))(a1);
/* line: 76, address: 0x605b6af4 */     if ( *(_BYTE *)(MEMORY[0xCC6D8C] + 17) )
/* line: 77, address: 0x605b6b00 */       a1[6879] = 0;
/* line: 78 */   }
/* line: 79, address: 0x605b6b1c */   return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 244))(a1);
/* line: 80 */ }