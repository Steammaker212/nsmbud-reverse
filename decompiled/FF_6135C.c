/* line: 0, address: 0x6046135c */ _DWORD *__fastcall sub_6046135C(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   int v1; // s0
/* line: 3 */   int v2; // s1
/* line: 4 */   int v3; // s2
/* line: 5 */   unsigned int v5; // r0
/* line: 6 */   int v6; // s0
/* line: 7 */   float *v7; // r1
/* line: 8 */   float v8; // s0
/* line: 9 */   float v9; // s4
/* line: 10 */   float v11; // s6
/* line: 11 */ 
/* line: 12, address: 0x60461380 */   CollisionMgr_init((int)(a1 + 162), (int)a1, nullptr, nullptr, nullptr);
/* line: 13, address: 0x60461390 */   (*(void (__fastcall **)(_DWORD *))(*a1 + 228))(a1);
/* line: 14, address: 0x604613a0 */   (*(void (__fastcall **)(_DWORD *))(*a1 + 232))(a1);
/* line: 15, address: 0x604613b0 */   (*(void (__fastcall **)(_DWORD *))(*a1 + 236))(a1);
/* line: 16, address: 0x604613bc */   a1[800] |= 0x20000u;
/* line: 17, address: 0x604613cc */   (*(void (__fastcall **)(_DWORD *))(*a1 + 220))(a1);
/* line: 18, address: 0x604613e0 */   a1[1611] = a1 + 1705;
/* line: 19, address: 0x604613f4 */   (*(void (__fastcall **)(_DWORD *))a1[1575])(a1 + 1575);
/* line: 20, address: 0x60461400 */   a1[1576] = v1;
/* line: 21, address: 0x60461400 */   a1[1577] = v2;
/* line: 22, address: 0x60461400 */   a1[1578] = v3;
/* line: 23, address: 0x60461414 */   v5 = a1[5];
/* line: 24, address: 0x6046141c */   if ( *((_BYTE *)a1 + 86) == 1 )
/* line: 25 */   {
/* line: 26, address: 0x60461420 */     v6 = -987594752;
/* line: 27 */   }
/* line: 28 */   else
/* line: 29 */   {
/* line: 30, address: 0x60461428 */     v7 = &flt_60461590;
/* line: 31, address: 0x60461430 */     if ( (v5 & 0x4000) != 0 )
/* line: 32, address: 0x60461430 */       v7 = &flt_60461594;
/* line: 33, address: 0x60461434 */     v6 = *(_DWORD *)v7;
/* line: 34 */   }
/* line: 35, address: 0x6046143c */   a1[29] = v6;
/* line: 36, address: 0x60461440 */   a1[143] = 0;
/* line: 37, address: 0x6046144c */   a1[144] = 1090519040;
/* line: 38, address: 0x60461454 */   a1[145] = 0;
/* line: 39, address: 0x60461458 */   a1[36] = 1065353216;
/* line: 40, address: 0x6046145c */   a1[37] = 1065353216;
/* line: 41, address: 0x60461460 */   a1[38] = 1065353216;
/* line: 42, address: 0x60461468 */   a1[20] = v5 >> 31;
/* line: 43, address: 0x60461470 */   a1[1554] = (v5 >> 22) & 3;
/* line: 44, address: 0x6046147c */   a1[1546] = HIWORD(v5) & 3;
/* line: 45, address: 0x60461488 */   a1[1699] = (v5 >> 20) & 3;
/* line: 46, address: 0x6046148c */   if ( (v5 & 0x800) != 0 )
/* line: 47 */   {
/* line: 48, address: 0x60461498 */     *((_BYTE *)a1 + 6258) = 1;
/* line: 49, address: 0x604614a4 */     a1[1559] = 660;
/* line: 50, address: 0x604614b0 */     a1[1560] = 4;
/* line: 51, address: 0x604614bc */     *((_WORD *)a1 + 3124) = 0;
/* line: 52 */   }
/* line: 53, address: 0x604614d0 */   a1[123] = 0;
/* line: 54, address: 0x604614e0 */   a1[124] = 1098907648;
/* line: 55, address: 0x604614ec */   a1[125] = 1107296256;
/* line: 56, address: 0x604614f0 */   a1[126] = 1107296256;
/* line: 57, address: 0x604614f4 */   a1[127] = 1107296256;
/* line: 58, address: 0x604614f8 */   a1[128] = 1107296256;
/* line: 59, address: 0x60461500 */   a1[129] = 1140850688;
/* line: 60, address: 0x60461504 */   a1[130] = 1140850688;
/* line: 61, address: 0x6046150c */   a1[155] = a1 + 1565;
/* line: 62, address: 0x60461518 */   v8 = MEMORY[0xAF22E0];
/* line: 63, address: 0x60461520 */   a1[131] = 1149239296;
/* line: 64, address: 0x60461524 */   a1[132] = 1149239296;
/* line: 65, address: 0x6046152c */   a1[1569] = 1;
/* line: 66, address: 0x60461544 */   a1[1547] = (a1[5] >> 12) & 3;
/* line: 67, address: 0x6046154c */   v9 = MEMORY[0xAF22E4];
/* line: 68, address: 0x6046155c */   *((float *)a1 + 1512) = v8 * 0.5;
/* line: 69, address: 0x6046156c */   v11 = MEMORY[0xAF22E8];
/* line: 70, address: 0x60461578 */   *((float *)a1 + 1510) = v9 * 0.5;
/* line: 71, address: 0x60461580 */   *((float *)a1 + 1511) = v11 * 0.5;
/* line: 72, address: 0x60461588 */   return a1 + 1511;
/* line: 73 */ }