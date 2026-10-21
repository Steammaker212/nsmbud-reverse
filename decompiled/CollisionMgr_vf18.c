/* line: 0, address: 0x6014bbc8 */ int __fastcall CollisionMgr_vf18(_BYTE *a1)
/* line: 1 */ {
/* line: 2 */   _BYTE *v1; // r4
/* line: 3 */   char v2; // r12
/* line: 4 */   char v3; // lr
/* line: 5 */   char v4; // r2
/* line: 6 */   char v5; // r3
/* line: 7 */   _BYTE *v6; // r0
/* line: 8 */   char v7; // r5
/* line: 9 */   char v8; // r1
/* line: 10 */   char v9; // r3
/* line: 11 */   char v10; // r1
/* line: 12 */   char v11; // r3
/* line: 13 */   char v12; // r1
/* line: 14 */   char v13; // r2
/* line: 15 */   char v14; // r12
/* line: 16 */   char v15; // t1
/* line: 17 */   char v16; // t1
/* line: 18 */   char v17; // r2
/* line: 19 */   char v18; // r3
/* line: 20 */   char v19; // r6
/* line: 21 */   char v20; // r5
/* line: 22 */   char v21; // r0
/* line: 23 */ 
/* line: 24, address: 0x6014bbcc */   v1 = a1;
/* line: 25, address: 0x6014bbd4 */   v2 = a1[2561];
/* line: 26, address: 0x6014bbd8 */   v3 = a1[2565];
/* line: 27, address: 0x6014bbdc */   v4 = a1[2569];
/* line: 28, address: 0x6014bbe0 */   v5 = a1[2573];
/* line: 29, address: 0x6014bbe8 */   v6 = a1 + 2588;
/* line: 30, address: 0x6014bbec */   v1[2589] = v5;
/* line: 31, address: 0x6014bbf0 */   v1[2585] = v4;
/* line: 32, address: 0x6014bbf4 */   v1[2581] = v3;
/* line: 33, address: 0x6014bbf8 */   v1[2577] = v2;
/* line: 34, address: 0x6014bc04 */   v7 = v1[2574];
/* line: 35, address: 0x6014bc08 */   v8 = v1[2575];
/* line: 36, address: 0x6014bc14 */   *v6 = v1[2572];
/* line: 37, address: 0x6014bc14 */   v6 += 2;
/* line: 38, address: 0x6014bc18 */   v6[1] = v8;
/* line: 39, address: 0x6014bc1c */   *v6 = v7;
/* line: 40, address: 0x6014bc34 */   v9 = v1[2570];
/* line: 41, address: 0x6014bc38 */   v10 = v1[2571];
/* line: 42, address: 0x6014bc44 */   v1[2584] = v1[2568];
/* line: 43, address: 0x6014bc48 */   v1[2587] = v10;
/* line: 44, address: 0x6014bc4c */   v1[2586] = v9;
/* line: 45, address: 0x6014bc60 */   v11 = v1[2566];
/* line: 46, address: 0x6014bc64 */   v12 = v1[2567];
/* line: 47, address: 0x6014bc74 */   v1[2580] = v1[2564];
/* line: 48, address: 0x6014bc78 */   v1[2583] = v12;
/* line: 49, address: 0x6014bc7c */   v1[2582] = v11;
/* line: 50, address: 0x6014bc88 */   v13 = v1[2562];
/* line: 51, address: 0x6014bc8c */   LOBYTE(v6) = v1[2563];
/* line: 52, address: 0x6014bca0 */   v1[2576] = v1[2560];
/* line: 53, address: 0x6014bca8 */   v1[2579] = (_BYTE)v6;
/* line: 54, address: 0x6014bcac */   v1[2578] = v13;
/* line: 55, address: 0x6014bcb8 */   qmemcpy(v1 + 3936, v1 + 2592, 0x540u);
/* line: 56, address: 0x6014bcbc */   v15 = v1[2224];
/* line: 57, address: 0x6014bcbc */   v1 += 2224;
/* line: 58, address: 0x6014bcbc */   v14 = v15;
/* line: 59, address: 0x6014bcc0 */   v16 = v1[4];
/* line: 60, address: 0x6014bcc0 */   v1 += 4;
/* line: 61, address: 0x6014bcc4 */   v17 = v1[3];
/* line: 62, address: 0x6014bcc8 */   v18 = v1[2];
/* line: 63, address: 0x6014bcd0 */   v19 = *(v1 - 3);
/* line: 64, address: 0x6014bcd4 */   v20 = *(v1 - 2);
/* line: 65, address: 0x6014bcd8 */   v21 = *(v1 - 1);
/* line: 66, address: 0x6014bcdc */   v1[9] = v1[1];
/* line: 67, address: 0x6014bce8 */   v1[5] = v19;
/* line: 68, address: 0x6014bcf4 */   v1[8] = v16;
/* line: 69, address: 0x6014bcfc */   v1[11] = v17;
/* line: 70, address: 0x6014bd04 */   v1[10] = v18;
/* line: 71, address: 0x6014bd10 */   v1[4] = v14;
/* line: 72, address: 0x6014bd14 */   v1[7] = v21;
/* line: 73, address: 0x6014bd18 */   v1[6] = v20;
/* line: 74, address: 0x6014bd20 */   v1[298] = v1[296];
/* line: 75, address: 0x6014bd28 */   v1[299] = v1[297];
/* line: 76, address: 0x6014bd30 */   v1[112] = 0;
/* line: 77, address: 0x6014bd34 */   return 0;
/* line: 78 */ }