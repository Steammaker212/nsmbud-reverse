#include "nsmbudx_prelude.h"
/* line: 0, address: 0x6078e608 */ int __fastcall sub_6078E608(_DWORD *a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v2; // s0
/* line: 3 */   int v4; // r0
/* line: 4 */   unsigned int v5; // r0
/* line: 5 */   int v6; // r5
/* line: 6 */   _DWORD *v7; // r0
/* line: 7 */   int v8; // r0
/* line: 8 */   int v9; // r0
/* line: 9 */   int v10; // r1
/* line: 10 */   int *v11; // r0
/* line: 11 */   bool v12; // zf
/* line: 12 */   int v13; // r6
/* line: 13 */   int v14; // r7
/* line: 14 */   int v15; // r0
/* line: 15 */ 
/* line: 16, address: 0x6078e614 */   v4 = a1[119];
/* line: 17, address: 0x6078e61c */   if ( v4 != -1 )
/* line: 18, address: 0x6078e61c */     a2 = v4;
/* line: 19, address: 0x6078e624 */   a1[118] = a2;
/* line: 20, address: 0x6078e63c */   (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 212))(a1, dword_60B0C230[a2]);
/* line: 21, address: 0x6078e640 */   v5 = a1[75];
/* line: 22, address: 0x6078e644 */   v6 = 0;
/* line: 23, address: 0x6078e64c */   if ( v5 >= 6 )
/* line: 24, address: 0x6078e64c */     v5 = 0;
/* line: 25, address: 0x6078e650 */   v7 = &a1[v5];
/* line: 26, address: 0x6078e658 */   a1[6] = v7[60];
/* line: 27, address: 0x6078e660 */   a1[73] = v7[66];
/* line: 28, address: 0x6078e670 */   (*(void (__fastcall **)(_DWORD *))(*a1 + 260))(a1);
/* line: 29, address: 0x6078e678 */   sub_6078E7F0(a1);
/* line: 30, address: 0x6078e688 */   (*(void (__fastcall **)(_DWORD *))(*a1 + 220))(a1);
/* line: 31, address: 0x6078e68c */   a1[129] = v2;
/* line: 32, address: 0x6078e690 */   a1[130] = v2;
/* line: 33, address: 0x6078e694 */   a1[131] = v2;
/* line: 34, address: 0x6078e698 */   a1[120] = 0;
/* line: 35, address: 0x6078e69c */   v8 = a1[118];
/* line: 36, address: 0x6078e6a4 */   if ( v8 == 6 )
/* line: 37 */   {
/* line: 38, address: 0x6078e6bc */     v9 = *a1;
/* line: 39, address: 0x6078e6c0 */     v10 = 3;
/* line: 40 */   }
/* line: 41 */   else
/* line: 42 */   {
/* line: 43, address: 0x6078e6a8 */     v12 = v8 == 2;
/* line: 44, address: 0x6078e6ac */     v9 = *a1;
/* line: 45, address: 0x6078e6b0 */     if ( v12 )
/* line: 46, address: 0x6078e6b4 */       v10 = 2;
/* line: 47 */     else
/* line: 48, address: 0x6078e6b0 */       v10 = 1;
/* line: 49 */   }
/* line: 50, address: 0x6078e6d0 */   (*(void (__fastcall **)(_DWORD *, int, _DWORD))(v9 + 176))(a1, v10, 0);
/* line: 51, address: 0x6078e6e0 */   (*(void (__fastcall **)(_DWORD *))(*a1 + 228))(a1);
/* line: 52, address: 0x6078e6e4 */   if ( a1[43] )
/* line: 53 */   {
/* line: 54, address: 0x6078e6f4 */     a1[43] = 0;
/* line: 55, address: 0x6078e704 */     (*(void (__fastcall **)(_DWORD *))(*a1 + 32))(a1);
/* line: 56 */   }
/* line: 57, address: 0x6078e708 */   v11 = (int *)a1[73];
/* line: 58, address: 0x6078e70c */   v12 = v11 == 0;
/* line: 59, address: 0x6078e710 */   if ( v11 )
/* line: 60 */   {
/* line: 61, address: 0x6078e710 */     v6 = *v11;
/* line: 62, address: 0x6078e714 */     v12 = *v11 == 0;
/* line: 63 */   }
/* line: 64, address: 0x6078e718 */   if ( !v12 )
/* line: 65 */   {
/* line: 66, address: 0x6078e72c */     v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 120))(v6);
/* line: 67, address: 0x6078e734 */     if ( v13 >= 1 )
/* line: 68 */     {
/* line: 69, address: 0x6078e73c */       v14 = 0;
/* line: 70, address: 0x6078e77c */       do
/* line: 71 */       {
/* line: 72, address: 0x6078e750 */         if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 132))(v6, v14) )
/* line: 73, address: 0x6078e770 */           (*(void (__fastcall **)(_DWORD *, int))(*a1 + 248))(a1, v14);
/* line: 74, address: 0x6078e774 */         ++v14;
/* line: 75 */       }
/* line: 76, address: 0x6078e77c */       while ( v13 != v14 );
/* line: 77 */     }
/* line: 78 */   }
/* line: 79, address: 0x6078e788 */   v15 = *a1;
/* line: 80, address: 0x6078e780 */   if ( a1[132] )
/* line: 81 */   {
/* line: 82, address: 0x6078e79c */     (*(void (__fastcall **)(_DWORD *))(v15 + 256))(a1);
/* line: 83, address: 0x6078e7ac */     (*(void (__fastcall **)(_DWORD *))(*a1 + 252))(a1);
/* line: 84 */   }
/* line: 85 */   else
/* line: 86 */   {
/* line: 87, address: 0x6078e7b8 */     (*(void (__fastcall **)(_DWORD *))(v15 + 252))(a1);
/* line: 88, address: 0x6078e7cc */     (*(void (__fastcall **)(_DWORD *))(*a1 + 256))(a1);
/* line: 89 */   }
/* line: 90 */   return (*(int (__fastcall **)(_DWORD *))(*a1 + 56))(a1);
/* line: 91 */ }