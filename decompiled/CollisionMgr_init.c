/* line: 0, address: 0x6014b9e8 */ int __fastcall CollisionMgr_init(int result, int a2, int *a3, int *a4, float *a5)
/* line: 1 */ {
/* line: 2 */   int v5; // r12
/* line: 3 */   int v6; // lr
/* line: 4 */   int v7; // r2
/* line: 5 */   int v8; // r2
/* line: 6 */   int v9; // lr
/* line: 7 */   int v10; // r3
/* line: 8 */   char v11; // r2
/* line: 9 */   int v12; // r4
/* line: 10 */   int v13; // r5
/* line: 11 */   int v14; // r4
/* line: 12 */   int v15; // r5
/* line: 13 */   float v16; // s0
/* line: 14 */   float v17; // s0
/* line: 15 */ 
/* line: 16, address: 0x6014b9f4 */   *(_BYTE *)(result + 2338) = 1;
/* line: 17, address: 0x6014b9f8 */   *(_BYTE *)(result + 2344) = 1;
/* line: 18, address: 0x6014b9fc */   *(_BYTE *)(result + 2339) = 1;
/* line: 19, address: 0x6014ba00 */   if ( a3 )
/* line: 20 */   {
/* line: 21, address: 0x6014ba08 */     *(_BYTE *)(result + 2348) = 0;
/* line: 22, address: 0x6014ba0c */     v5 = *a3;
/* line: 23, address: 0x6014ba0c */     v6 = a3[1];
/* line: 24, address: 0x6014ba10 */     v7 = a3[2];
/* line: 25, address: 0x6014ba14 */     *(_DWORD *)(result + 2392) = v5;
/* line: 26, address: 0x6014ba18 */     *(_DWORD *)(result + 2396) = v6;
/* line: 27 */   }
/* line: 28 */   else
/* line: 29 */   {
/* line: 30, address: 0x6014ba20 */     v7 = 0;
/* line: 31, address: 0x6014ba24 */     *(_BYTE *)(result + 2348) = 1;
/* line: 32, address: 0x6014ba28 */     *(_DWORD *)(result + 2392) = 0;
/* line: 33, address: 0x6014ba2c */     *(_DWORD *)(result + 2396) = 0;
/* line: 34 */   }
/* line: 35, address: 0x6014ba34 */   *(_DWORD *)(result + 2400) = v7;
/* line: 36, address: 0x6014ba40 */   *(_BYTE *)(result + 2338) = 1;
/* line: 37, address: 0x6014ba44 */   *(_BYTE *)(result + 2343) = 1;
/* line: 38, address: 0x6014ba48 */   *(_BYTE *)(result + 2339) = 1;
/* line: 39, address: 0x6014ba4c */   if ( a4 )
/* line: 40 */   {
/* line: 41, address: 0x6014ba54 */     *(_BYTE *)(result + 2347) = 0;
/* line: 42, address: 0x6014ba58 */     v8 = *a4;
/* line: 43, address: 0x6014ba58 */     v9 = a4[1];
/* line: 44, address: 0x6014ba5c */     v10 = a4[2];
/* line: 45, address: 0x6014ba60 */     *(_DWORD *)(result + 2380) = v8;
/* line: 46, address: 0x6014ba64 */     *(_DWORD *)(result + 2384) = v9;
/* line: 47, address: 0x6014ba68 */     *(_DWORD *)(result + 2388) = v10;
/* line: 48 */   }
/* line: 49 */   else
/* line: 50 */   {
/* line: 51, address: 0x6014ba70 */     *(_BYTE *)(result + 2347) = 1;
/* line: 52, address: 0x6014ba78 */     *(_DWORD *)(result + 2380) = 0;
/* line: 53, address: 0x6014ba7c */     *(_DWORD *)(result + 2384) = 0;
/* line: 54, address: 0x6014ba80 */     *(_DWORD *)(result + 2388) = 0;
/* line: 55 */   }
/* line: 56, address: 0x6014ba8c */   *(_BYTE *)(result + 2338) = 1;
/* line: 57, address: 0x6014ba90 */   *(_BYTE *)(result + 2341) = 1;
/* line: 58, address: 0x6014ba94 */   *(_BYTE *)(result + 2339) = 1;
/* line: 59, address: 0x6014ba98 */   if ( a5 )
/* line: 60 */   {
/* line: 61, address: 0x6014ba9c */     v11 = 0;
/* line: 62, address: 0x6014baa0 */     *(_BYTE *)(result + 2345) = 0;
/* line: 63, address: 0x6014baa8 */     v12 = *((_DWORD *)a5 + 1);
/* line: 64, address: 0x6014baa8 */     v13 = *((_DWORD *)a5 + 2);
/* line: 65, address: 0x6014baac */     *(float *)(result + 2356) = *a5;
/* line: 66, address: 0x6014bab0 */     *(_DWORD *)(result + 2360) = v12;
/* line: 67, address: 0x6014bab4 */     *(_DWORD *)(result + 2364) = v13;
/* line: 68, address: 0x6014bab8 */     v14 = *(_DWORD *)a5;
/* line: 69, address: 0x6014bab8 */     v15 = *((_DWORD *)a5 + 1);
/* line: 70, address: 0x6014babc */     v16 = a5[2];
/* line: 71, address: 0x6014bac0 */     *(_BYTE *)(result + 2338) = 1;
/* line: 72, address: 0x6014bac4 */     *(_BYTE *)(result + 2342) = 1;
/* line: 73, address: 0x6014bac8 */     *(_BYTE *)(result + 2339) = 1;
/* line: 74, address: 0x6014bacc */     *(_DWORD *)(result + 2368) = v14;
/* line: 75, address: 0x6014bad0 */     *(_DWORD *)(result + 2372) = v15;
/* line: 76, address: 0x6014bad4 */     v17 = -v16;
/* line: 77 */   }
/* line: 78 */   else
/* line: 79 */   {
/* line: 80, address: 0x6014badc */     v17 = 0.0;
/* line: 81, address: 0x6014bae4 */     *(_BYTE *)(result + 2345) = 1;
/* line: 82, address: 0x6014bae8 */     *(_DWORD *)(result + 2356) = 0;
/* line: 83, address: 0x6014baec */     *(_DWORD *)(result + 2360) = 0;
/* line: 84, address: 0x6014baf0 */     *(_DWORD *)(result + 2364) = 0;
/* line: 85, address: 0x6014baf4 */     *(_BYTE *)(result + 2338) = 1;
/* line: 86, address: 0x6014baf8 */     *(_BYTE *)(result + 2342) = 1;
/* line: 87, address: 0x6014bafc */     *(_BYTE *)(result + 2339) = 1;
/* line: 88, address: 0x6014bb00 */     *(_DWORD *)(result + 2368) = 0;
/* line: 89, address: 0x6014bb04 */     *(_DWORD *)(result + 2372) = 0;
/* line: 90, address: 0x6014bb08 */     v11 = 1;
/* line: 91 */   }
/* line: 92, address: 0x6014bb0c */   *(_BYTE *)(result + 2346) = v11;
/* line: 93, address: 0x6014bb24 */   *(float *)(result + 2376) = v17;
/* line: 94, address: 0x6014bb28 */   *(_DWORD *)(result + 2196) = a2;
/* line: 95, address: 0x6014bb34 */   *(_DWORD *)(result + 2204) = a2 + 108;
/* line: 96, address: 0x6014bb38 */   *(_DWORD *)(result + 2208) = a2 + 584;
/* line: 97, address: 0x6014bb3c */   *(_DWORD *)(result + 2212) = a2 + 86;
/* line: 98, address: 0x6014bb40 */   *(_DWORD *)(result + 2216) = a2 + 87;
/* line: 99, address: 0x6014bb44 */   *(_DWORD *)(result + 2220) = a2 + 84;
/* line: 100, address: 0x6014bb4c */   *(_BYTE *)(result + 2337) = 1;
/* line: 101, address: 0x6014bb50 */   return result;
/* line: 102 */ }