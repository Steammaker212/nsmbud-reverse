/* line: 0, address: 0x6013a7fc */ int __fastcall sub_6013A7FC(int a1)
/* line: 1 */ {
/* line: 2 */   int v1; // r1
/* line: 3 */   float v2; // s0
/* line: 4 */   int v3; // r1
/* line: 5 */   unsigned int v4; // r2
/* line: 6 */   float v5; // s2
/* line: 7 */ 
/* line: 8, address: 0x6013a7fc */   v1 = *(_DWORD *)(a1 + 20);
/* line: 9, address: 0x6013a810 */   *(_BYTE *)(a1 + 86) = BYTE1(v1) & 0xF;
/* line: 10, address: 0x6013a818 */   *(_BYTE *)(a1 + 87) = (unsigned __int16)v1 >> 12;
/* line: 11, address: 0x6013a824 */   *(_DWORD *)(a1 + 76) |= 4u;
/* line: 12, address: 0x6013a830 */   *(_QWORD *)(a1 + 120) = 0xC040000040680000LL;
/* line: 13, address: 0x6013a840 */   *(_DWORD *)(a1 + 100) = MEMORY[0xAF6668];
/* line: 14, address: 0x6013a850 */   *(_DWORD *)(a1 + 96) = MEMORY[0xAF6664];
/* line: 15, address: 0x6013a854 */   if ( (v1 & 0xF0) != 0 )
/* line: 16 */   {
/* line: 17, address: 0x6013a85c */     v2 = -3.625;
/* line: 18, address: 0x6013a860 */     *(_DWORD *)(a1 + 80) = 1;
/* line: 19, address: 0x6013a86c */     *(_DWORD *)(a1 + 120) = -1066926080;
/* line: 20, address: 0x6013a870 */     v3 = 0;
/* line: 21 */   }
/* line: 22 */   else
/* line: 23 */   {
/* line: 24, address: 0x6013a87c */     v2 = 3.625;
/* line: 25, address: 0x6013a880 */     *(_DWORD *)(a1 + 80) = 0;
/* line: 26, address: 0x6013a884 */     v3 = 1;
/* line: 27 */   }
/* line: 28, address: 0x6013a890 */   v4 = *(_DWORD *)(a1 + 6768);
/* line: 29, address: 0x6013a89c */   if ( v4 >= 4 )
/* line: 30, address: 0x6013a89c */     v4 = 0;
/* line: 31, address: 0x6013a8b8 */   v5 = *(float *)(*(_DWORD *)(MEMORY[0xCC436C] + 4 * v4 + 32) + 108)
/* line: 32 */      - *(float *)(*(_DWORD *)(MEMORY[0xCC436C] + 4 * v4 + 32) + 584);
/* line: 33, address: 0x6013a8c0 */   if ( v3 == 1 )
/* line: 34 */   {
/* line: 35, address: 0x6013a8c8 */     if ( v5 <= v2 )
/* line: 36, address: 0x6013a8c8 */       return 1;
/* line: 37, address: 0x6013a8c8 */     goto LABEL_10;
/* line: 38 */   }
/* line: 39, address: 0x6013a8d4 */   if ( v5 < v2 )
/* line: 40 */ LABEL_10:
/* line: 41, address: 0x6013a8d8 */     *(float *)(a1 + 120) = v5 + v2;
/* line: 42, address: 0x6013a8e4 */   return 1;
/* line: 43 */ }