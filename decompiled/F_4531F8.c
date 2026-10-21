/* line: 0, address: 0x604531f8 */ int __fastcall sub_604531F8(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   int v3; // r0
/* line: 4 */   int v5; // r0
/* line: 5 */   int v6; // r5
/* line: 6 */   _BYTE **v7; // r7
/* line: 7 */   _BYTE *v8; // r6
/* line: 8 */   int v9; // r0
/* line: 9 */   bool v10; // zf
/* line: 10 */   int v11; // r5
/* line: 11 */   int v12; // r7
/* line: 12 */   int v13; // r6
/* line: 13 */   int v14; // r11
/* line: 14 */   int v15; // r1
/* line: 15 */   unsigned __int16 v16; // [sp+12h] [bp-Ah] BYREF
/* line: 16 */   int v17; // [sp+14h] [bp-8h] BYREF
/* line: 17 */   int v18; // [sp+18h] [bp-4h] BYREF
/* line: 18 */ 
/* line: 19, address: 0x60453208 */   *(_BYTE *)(a1 + 1320) = 1;
/* line: 20, address: 0x60453230 */   if ( *(_BYTE *)(a1 + 1392) && *(char *)(a1 + 1404) >= 0 && !*(_BYTE *)(a1 + 1406) )
/* line: 21 */   {
/* line: 22, address: 0x604532a4 */     *(_BYTE *)(a1 + 1394) = 1;
/* line: 23, address: 0x604532ac */     return 1;
/* line: 24 */   }
/* line: 25, address: 0x60453238 */   *(_BYTE *)(a1 + 1394) = 0;
/* line: 26, address: 0x6045323c */   v2 = *(_DWORD *)(a1 + 1316);
/* line: 27, address: 0x60453244 */   if ( v2 == 2 )
/* line: 28 */   {
/* line: 29, address: 0x60453260 */     sub_60456128(*(_DWORD *)(a1 + 1388));
/* line: 30 */   }
/* line: 31, address: 0x6045324c */   else if ( v2 == 1 )
/* line: 32 */   {
/* line: 33, address: 0x60453254 */     sub_60456388(*(_DWORD *)(a1 + 1388));
/* line: 34 */   }
/* line: 35, address: 0x60453284 */   if ( *(_DWORD *)(a1 + 1316) != 2 && *(_BYTE *)(MEMORY[0xC9A684] + 17) == 40 )
/* line: 36 */   {
/* line: 37, address: 0x6045328c */     if ( *(_DWORD *)(*(_DWORD *)(a1 + 1264) + 272) )
/* line: 38 */     {
/* line: 39, address: 0x60453298 */       v3 = 30;
/* line: 40 */     }
/* line: 41 */     else
/* line: 42 */     {
/* line: 43, address: 0x604532b0 */       v5 = *(_DWORD *)(a1 + 1408);
/* line: 44, address: 0x604532b8 */       if ( !v5 )
/* line: 45, address: 0x604532b8 */         goto LABEL_16;
/* line: 46, address: 0x604532bc */       v3 = v5 - 1;
/* line: 47 */     }
/* line: 48, address: 0x604532c0 */     *(_DWORD *)(a1 + 1408) = v3;
/* line: 49 */   }
/* line: 50 */ LABEL_16:
/* line: 51, address: 0x604532c4 */   *(_DWORD *)(a1 + 1408) = 30;
/* line: 52, address: 0x604532d4 */   v6 = MEMORY[0xCCF448];
/* line: 53, address: 0x604532d8 */   if ( !*(_DWORD *)(MEMORY[0xCCF448] + 212) )
/* line: 54, address: 0x604532d8 */     goto LABEL_28;
/* line: 55, address: 0x604532e8 */   v7 = *(_BYTE ***)(MEMORY[0xCCF448] + 220);
/* line: 56, address: 0x60453324 */   while ( 1 )
/* line: 57 */   {
/* line: 58, address: 0x60453324 */     v8 = *v7;
/* line: 59, address: 0x60453338 */     if ( _cxa_guard_acquire_0(13156900) )
/* line: 60 */     {
/* line: 61, address: 0x6045334c */       MEMORY[0xC8C220] = 12420264;
/* line: 62, address: 0x60453354 */       _cxa_guard_release_0(13156900);
/* line: 63 */     }
/* line: 64, address: 0x60453368 */     v9 = (**(int (__fastcall ***)(_BYTE *, int))v8)(v8, 13156896);
/* line: 65, address: 0x6045336c */     v10 = v8 == nullptr;
/* line: 66, address: 0x60453370 */     if ( v8 )
/* line: 67, address: 0x60453374 */       v10 = (v9 ^ 1) == 1;
/* line: 68, address: 0x60453378 */     if ( !v10 )
/* line: 69, address: 0x60453378 */       break;
/* line: 70, address: 0x60453390 */     if ( ++v7 == (_BYTE **)(*(_DWORD *)(v6 + 220) + 4 * *(_DWORD *)(v6 + 212)) )
/* line: 71, address: 0x60453390 */       goto LABEL_28;
/* line: 72 */   }
/* line: 73, address: 0x604533b8 */   if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v8 + 20))(v8) != 1 || v8[353] == 1 )
/* line: 74 */ LABEL_28:
/* line: 75, address: 0x604533bc */     *(_DWORD *)(a1 + 1408) = 0;
/* line: 76, address: 0x604533c8 */   v11 = a1 + 16;
/* line: 77, address: 0x604533d8 */   v12 = 0;
/* line: 78, address: 0x604533dc */   v13 = a1 + 1284;
/* line: 79, address: 0x604533e8 */   v14 = MEMORY[0xC995D0];
/* line: 80, address: 0x6045347c */   do
/* line: 81 */   {
/* line: 82, address: 0x60453400 */     sub_604534DC(a1, &v18, &v17, &v16, v12);
/* line: 83, address: 0x6045340c */     if ( *(_DWORD *)(a1 + 1316) == 1 )
/* line: 84, address: 0x60453430 */       sub_60456428(*(_DWORD *)(a1 + 1388), v12, v18 & 0x3FFF, v17 & 0x3FFF, v16);
/* line: 85, address: 0x60453434 */     if ( *(_DWORD *)(v14 + 32) )
/* line: 86 */     {
/* line: 87, address: 0x60453448 */       v15 = v18 & ~*(_DWORD *)(v13 + 4 * v12);
/* line: 88, address: 0x60453450 */       v18 = v15;
/* line: 89, address: 0x60453454 */       *(_DWORD *)(v13 + 4 * v12) = 0;
/* line: 90 */     }
/* line: 91 */     else
/* line: 92 */     {
/* line: 93, address: 0x6045345c */       v15 = v18;
/* line: 94 */     }
/* line: 95, address: 0x6045346c */     sub_6045525C(v11, v15, v17, (__int16)v16);
/* line: 96, address: 0x60453470 */     ++v12;
/* line: 97, address: 0x60453474 */     v11 += 312;
/* line: 98 */   }
/* line: 99, address: 0x6045347c */   while ( v12 != 4 );
/* line: 100, address: 0x60453484 */   sub_60453694(a1);
/* line: 101, address: 0x6045348c */   sub_60453764(a1);
/* line: 102, address: 0x60453494 */   sub_60453AA8(a1);
/* line: 103, address: 0x6045349c */   sub_60453D7C(a1);
/* line: 104, address: 0x604534a4 */   sub_60453F44(a1);
/* line: 105, address: 0x604532ac */   return sub_60454344(a1);
/* line: 106 */ }