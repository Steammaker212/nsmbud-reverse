#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60008138 */ _BYTE *__fastcall ActorMgr_create(_DWORD *a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   _BYTE *v5; // r0
/* line: 3 */   _BYTE *v6; // r5
/* line: 4 */   int v7; // r6
/* line: 5 */   int v8; // r9
/* line: 6 */   unsigned int v9; // r0
/* line: 7 */   unsigned int v10; // r8
/* line: 8 */ 
/* line: 9, address: 0x60008148 */   v5 = (_BYTE *)sub_600082CC(a1, a2, 1);
/* line: 10, address: 0x6000814c */   v6 = v5;
/* line: 11, address: 0x60008150 */   v7 = 0;
/* line: 12, address: 0x60008158 */   if ( !v5 )
/* line: 13, address: 0x60008158 */     return (_BYTE *)v7;
/* line: 14, address: 0x6000815c */   if ( v5[18] )
/* line: 15 */   {
/* line: 16, address: 0x6000816c */     if ( a3 != 1 )
/* line: 17 */     {
/* line: 18 */ LABEL_4:
/* line: 19, address: 0x60008174 */       if ( !a3 )
/* line: 20 */       {
/* line: 21, address: 0x6000818c */         sead::ListNode::insertFront_(a1 + 5730, &v6[a1[5733]]);
/* line: 22, address: 0x6000819c */         ++a1[5732];
/* line: 23 */       }
/* line: 24, address: 0x600081a0 */       return v6;
/* line: 25 */     }
/* line: 26 */ LABEL_19:
/* line: 27, address: 0x60008274 */     sub_60008458(a1, v6);
/* line: 28, address: 0x60008280 */     return v6;
/* line: 29 */   }
/* line: 30, address: 0x600081b0 */   if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v5 + 16))(v5) )
/* line: 31 */   {
/* line: 32, address: 0x600081bc */     if ( *((_DWORD *)v6 + 1) )
/* line: 33, address: 0x600081d8 */       v8 = sead::HeapMgr::setCurrentHeap_(MEMORY[0xCCEE90]);
/* line: 34 */     else
/* line: 35, address: 0x600081f8 */       v8 = 1;
/* line: 36, address: 0x60008208 */     v9 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v6 + 20))(v6);
/* line: 37, address: 0x60008210 */     v10 = 0;
/* line: 38, address: 0x60008214 */     if ( v9 < 3 )
/* line: 39, address: 0x60008214 */       v10 = 3 - v9;
/* line: 40, address: 0x6000821c */     if ( v8 != 1 )
/* line: 41, address: 0x60008230 */       sead::HeapMgr::setCurrentHeap_(MEMORY[0xCCEE90]);
/* line: 42, address: 0x60008244 */     (*(void (__fastcall **)(_BYTE *, unsigned int))(*(_DWORD *)v6 + 24))(v6, v10);
/* line: 43, address: 0x60008254 */     if ( v10 >= 2 && v10 != 3 )
/* line: 44 */     {
/* line: 45, address: 0x6000825c */       v7 = 0;
/* line: 46, address: 0x60008260 */       if ( v10 != 2 )
/* line: 47, address: 0x60008288 */         return (_BYTE *)v7;
/* line: 48, address: 0x60008268 */       v6[18] = 1;
/* line: 49, address: 0x60008270 */       if ( a3 != 1 )
/* line: 50, address: 0x60008270 */         goto LABEL_4;
/* line: 51, address: 0x60008270 */       goto LABEL_19;
/* line: 52 */     }
/* line: 53 */   }
/* line: 54 */   else
/* line: 55 */   {
/* line: 56, address: 0x600081f0 */     (*(void (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)v6 + 24))(v6, 0);
/* line: 57 */   }
/* line: 58, address: 0x60008294 */   v6[19] = 1;
/* line: 59, address: 0x600082a8 */   sead::ListNode::insertFront_(a1 + 5734, &v6[a1[5737]]);
/* line: 60, address: 0x600082b8 */   ++a1[5736];
/* line: 61, address: 0x60008288 */   return 0;
/* line: 62 */ }