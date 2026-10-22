#include "nsmbudx_prelude.h"
/* line: 0, address: 0x600082cc */ int __fastcall sub_600082CC(int a1, int a2, char a3)
/* line: 1 */ {
/* line: 2 */   int v6; // r0
/* line: 3 */   bool v7; // zf
/* line: 4 */   int v8; // r2
/* line: 5 */   int v9; // r6
/* line: 6 */   int v10; // r5
/* line: 7 */   int v12; // [sp+8h] [bp-8h] BYREF
/* line: 8 */   const char *v13; // [sp+Ch] [bp-4h]
/* line: 9 */ 
/* line: 10, address: 0x600082ec */   v6 = *(_DWORD *)(*(_DWORD *)(a2 + 12) + 8);
/* line: 11, address: 0x600082f8 */   if ( MEMORY[0xAF3418] == v6 )
/* line: 12, address: 0x600082f8 */     goto LABEL_7;
/* line: 13, address: 0x60008308 */   v7 = MEMORY[0xAF3414] == v6;
/* line: 14, address: 0x6000830c */   if ( MEMORY[0xAF3414] != v6 )
/* line: 15, address: 0x60008318 */     v7 = MEMORY[0xAF3A84] == v6;
/* line: 16, address: 0x60008330 */   if ( v7 || MEMORY[0xAF3A88] == v6 )
/* line: 17 */   {
/* line: 18 */ LABEL_7:
/* line: 19, address: 0x60008364 */     v12 = 12321336;
/* line: 20, address: 0x60008370 */     v13 = "PlayerHeap";
/* line: 21, address: 0x60008374 */     v8 = *(_DWORD *)(a1 + 16);
/* line: 22 */   }
/* line: 23 */   else
/* line: 24 */   {
/* line: 25, address: 0x60008340 */     v12 = 12321336;
/* line: 26, address: 0x6000834c */     v13 = "ActorHeap";
/* line: 27, address: 0x60008350 */     v8 = *(_DWORD *)(a1 + 20);
/* line: 28 */   }
/* line: 29, address: 0x60008394 */   if ( !((int (__fastcall *)(_DWORD, int *, int, int, int, _DWORD))sub_608F882C)(0, &v12, v8, 4, 1, 0) )
/* line: 30, address: 0x60008420 */     return 0;
/* line: 31, address: 0x600083bc */   *(_DWORD *)(a1 + 27192) = *(_DWORD *)(a1 + 27184) | (*(_DWORD *)(a1 + 27176) << 22);
/* line: 32, address: 0x600083c4 */   *(_BYTE *)(a1 + 27196) = a3;
/* line: 33, address: 0x600083d8 */   v9 = sead::HeapMgr::setCurrentHeap_(MEMORY[0xCCEE90]);
/* line: 34, address: 0x600083ec */   v10 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 12) + 4))(a2);
/* line: 35, address: 0x600083fc */   sub_60008BC8(a1 + 27168, v10);
/* line: 36, address: 0x60008404 */   if ( v9 != 1 )
/* line: 37, address: 0x60008418 */     sead::HeapMgr::setCurrentHeap_(MEMORY[0xCCEE90]);
/* line: 38, address: 0x6000842c */   return v10;
/* line: 39 */ }