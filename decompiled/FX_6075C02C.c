/* line: 0, address: 0x6075c02c */ int __fastcall sub_6075C02C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
/* line: 1 */ {
/* line: 2 */   bool v14; // zf
/* line: 3 */   int v15; // r0
/* line: 4 */   int v16; // r0
/* line: 5 */   int v17; // r0
/* line: 6 */   const char *v18; // r1
/* line: 7 */   int v20; // [sp+Ch] [bp-60h] BYREF
/* line: 8 */   int v21; // [sp+10h] [bp-5Ch] BYREF
/* line: 9 */   const char *v22; // [sp+14h] [bp-58h]
/* line: 10 */   int v23; // [sp+18h] [bp-54h]
/* line: 11 */   int v24; // [sp+1Ch] [bp-50h] BYREF
/* line: 12 */ 
/* line: 13, address: 0x6075c04c */   v20 = a6;
/* line: 14, address: 0x6075c068 */   v14 = sub_6042F294(&v21, &v20) == 1;
/* line: 15, address: 0x6075c06c */   v15 = 0;
/* line: 16, address: 0x6075c070 */   if ( v14 )
/* line: 17 */   {
/* line: 18, address: 0x6075c078 */     v15 = sub_6042F170(&v21);
/* line: 19, address: 0x6075c080 */     if ( v15 != 1 )
/* line: 20, address: 0x6075c080 */       v15 = 0;
/* line: 21 */   }
/* line: 22, address: 0x6075c0a4 */   sub_6078C444(a1, &dword_60CBF198[2 * (v15 | (16 * v15))], a2, a3, a4, a9);
/* line: 23, address: 0x6075c0c4 */   *(_DWORD *)a1 = 12730588;
/* line: 24, address: 0x6075c0cc */   v21 = 12321336;
/* line: 25, address: 0x6075c0dc */   v22 = "MiiAnm";
/* line: 26, address: 0x6075c0ec */   *(_DWORD *)(a1 + 544) = LoadResource(MEMORY[0xC9CA88], &v21);
/* line: 27, address: 0x6075c0f0 */   *(_DWORD *)(a1 + 548) = a5;
/* line: 28, address: 0x6075c0fc */   *(_DWORD *)(a1 + 552) = v20;
/* line: 29, address: 0x6075c100 */   v16 = 2;
/* line: 30, address: 0x6075c104 */   if ( a10 )
/* line: 31, address: 0x6075c104 */     v16 = 4;
/* line: 32, address: 0x6075c108 */   *(_DWORD *)(a1 + 556) = v16;
/* line: 33, address: 0x6075c110 */   *(_DWORD *)(a1 + 560) = a7;
/* line: 34, address: 0x6075c114 */   *(_DWORD *)(a1 + 564) = 0;
/* line: 35, address: 0x6075c11c */   sub_6091FD58(a1 + 568);
/* line: 36, address: 0x6075c124 */   sub_6091FD58(a1 + 840);
/* line: 37, address: 0x6075c134 */   memset((void *)(a1 + 1112), 0, 0x47u);
/* line: 38, address: 0x6075c14c */   if ( *(int *)(a1 + 548) >= 4 )
/* line: 39, address: 0x6075c150 */     *(_DWORD *)(a1 + 548) = 3;
/* line: 40, address: 0x6075c15c */   *(_BYTE *)(MEMORY[0xC9BBD4] + 18064) = *(_BYTE *)(a1 + 540);
/* line: 41, address: 0x6075c16c */   v21 = 0;
/* line: 42, address: 0x6075c170 */   v22 = nullptr;
/* line: 43, address: 0x6075c174 */   v23 = 0;
/* line: 44, address: 0x6075c17c */   sub_608DEB0C(&v21, 2, &v24);
/* line: 45, address: 0x6075c180 */   v17 = v21;
/* line: 46, address: 0x6075c184 */   v18 = v22;
/* line: 47, address: 0x6075c18c */   if ( v21 < (int)v22 )
/* line: 48 */   {
/* line: 49, address: 0x6075c198 */     *(_DWORD *)(v23 + 4 * v21) = *(_DWORD *)(a1 + 20);
/* line: 50, address: 0x6075c1a0 */     v17 = ++v21;
/* line: 51, address: 0x6075c1a8 */     v18 = v22;
/* line: 52 */   }
/* line: 53, address: 0x6075c1b0 */   if ( v17 < (int)v18 )
/* line: 54 */   {
/* line: 55, address: 0x6075c1bc */     *(_DWORD *)(v23 + 4 * v17) = *(_DWORD *)(a1 + 544);
/* line: 56, address: 0x6075c1c8 */     ++v21;
/* line: 57 */   }
/* line: 58, address: 0x6075c1d8 */   sub_6078C590(a1, &v21);
/* line: 59, address: 0x6075c1e0 */   sub_6075C23C(a1);
/* line: 60, address: 0x6075c1ec */   sub_6075C304(a1, &v21);
/* line: 61, address: 0x6075c204 */   *(_BYTE *)(MEMORY[0xC9BBD4] + 18064) = 1;
/* line: 62, address: 0x6075c210 */   sub_6078E5A8(a1, *(_DWORD *)(a1 + 472));
/* line: 63, address: 0x6075c21c */   return a1;
/* line: 64 */ }