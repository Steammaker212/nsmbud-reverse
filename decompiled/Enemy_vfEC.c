/* line: 0, address: 0x602a26b0 */ bool __fastcall Enemy::vfEC(_BYTE *a1, _BYTE *a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v6; // r0
/* line: 3 */   int v7; // r7
/* line: 4 */   int (__fastcall ***v8)(_DWORD, int); // r6
/* line: 5 */   int v9; // r0
/* line: 6 */ 
/* line: 7, address: 0x602a26c0 */   v6 = *(_DWORD *)(a3 + 140);
/* line: 8, address: 0x602a26c8 */   if ( v6 == 3 )
/* line: 9 */   {
/* line: 10, address: 0x602a26d4 */     if ( (a2[148] & 8) == 0 )
/* line: 11, address: 0x602a26d4 */       return 0;
/* line: 12, address: 0x602a26f0 */     v7 = 1;
/* line: 13, address: 0x602a26ec */     if ( (*(int (__fastcall **)(_BYTE *, _BYTE *, int))(*(_DWORD *)a1 + 276))(a1, a2, a3) )
/* line: 14, address: 0x602a26f8 */       return v7;
/* line: 15, address: 0x602a26fc */     v6 = *(_DWORD *)(a3 + 140);
/* line: 16 */   }
/* line: 17, address: 0x602a2704 */   if ( v6 == 7 )
/* line: 18 */   {
/* line: 19, address: 0x602a2710 */     if ( (a2[148] & 0x80) == 0 )
/* line: 20, address: 0x602a2710 */       return 0;
/* line: 21, address: 0x602a2718 */     v8 = *(int (__fastcall ****)(_DWORD, int))(a3 + 64);
/* line: 22, address: 0x602a2734 */     if ( _cxa_guard_acquire_0(13087612) )
/* line: 23 */     {
/* line: 24, address: 0x602a2754 */       MEMORY[0xC7B378] = 12320956;
/* line: 25, address: 0x602a2760 */       _cxa_guard_release_0(13087612);
/* line: 26 */     }
/* line: 27, address: 0x602a2764 */     v7 = 0;
/* line: 28, address: 0x602a276c */     v9 = 0;
/* line: 29, address: 0x602a2770 */     if ( v8 )
/* line: 30 */     {
/* line: 31, address: 0x602a2788 */       v9 = (**v8)(v8, 13087608);
/* line: 32, address: 0x602a2790 */       if ( v9 )
/* line: 33, address: 0x602a2790 */         v9 = (int)v8;
/* line: 34 */     }
/* line: 35, address: 0x602a2794 */     if ( sub_6075F914(v9) )
/* line: 36, address: 0x602a2794 */       return v7;
/* line: 37, address: 0x602a27b8 */     v7 = 1;
/* line: 38, address: 0x602a27b4 */     if ( (*(int (__fastcall **)(_BYTE *, _BYTE *, int))(*(_DWORD *)a1 + 292))(a1, a2, a3) )
/* line: 39, address: 0x602a27c0 */       return v7;
/* line: 40, address: 0x602a27c4 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 41 */   }
/* line: 42, address: 0x602a27cc */   if ( v6 == 5 )
/* line: 43 */   {
/* line: 44, address: 0x602a27d8 */     if ( (a2[148] & 0x20) == 0 )
/* line: 45, address: 0x602a27d8 */       return 0;
/* line: 46, address: 0x602a27f4 */     v7 = 1;
/* line: 47, address: 0x602a27f0 */     if ( (*(int (__fastcall **)(_BYTE *, _BYTE *, int))(*(_DWORD *)a1 + 280))(a1, a2, a3) )
/* line: 48, address: 0x602a27fc */       return v7;
/* line: 49, address: 0x602a2800 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 50 */   }
/* line: 51, address: 0x602a2808 */   if ( v6 == 10 )
/* line: 52 */   {
/* line: 53, address: 0x602a2814 */     if ( (a2[149] & 4) == 0 )
/* line: 54, address: 0x602a2814 */       return 0;
/* line: 55, address: 0x602a281c */     v7 = 0;
/* line: 56, address: 0x602a2828 */     if ( (a1[6149] & 2) != 0 )
/* line: 57, address: 0x602a2828 */       return v7;
/* line: 58, address: 0x602a2844 */     v7 = 1;
/* line: 59, address: 0x602a2840 */     if ( (*(int (__fastcall **)(_BYTE *, _BYTE *, int))(*(_DWORD *)a1 + 300))(a1, a2, a3) )
/* line: 60, address: 0x602a284c */       return v7;
/* line: 61, address: 0x602a2850 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 62 */   }
/* line: 63, address: 0x602a2858 */   if ( v6 == 13 )
/* line: 64 */   {
/* line: 65, address: 0x602a2864 */     if ( (a2[149] & 0x20) == 0 )
/* line: 66, address: 0x602a2864 */       return 0;
/* line: 67, address: 0x602a2880 */     v7 = 1;
/* line: 68, address: 0x602a287c */     if ( (*(int (__fastcall **)(_BYTE *, _BYTE *, int))(*(_DWORD *)a1 + 284))(a1, a2, a3) )
/* line: 69, address: 0x602a2888 */       return v7;
/* line: 70, address: 0x602a288c */     v6 = *(_DWORD *)(a3 + 140);
/* line: 71 */   }
/* line: 72, address: 0x602a2894 */   if ( v6 == 17 )
/* line: 73 */   {
/* line: 74, address: 0x602a28a0 */     if ( (a2[150] & 2) == 0 )
/* line: 75, address: 0x602a28a0 */       return 0;
/* line: 76, address: 0x602a28bc */     v7 = 1;
/* line: 77, address: 0x602a28b8 */     if ( (*(int (__fastcall **)(_BYTE *, _BYTE *, int))(*(_DWORD *)a1 + 304))(a1, a2, a3) )
/* line: 78, address: 0x602a28c4 */       return v7;
/* line: 79, address: 0x602a28c8 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 80 */   }
/* line: 81, address: 0x602a28d0 */   if ( v6 == 8 )
/* line: 82 */   {
/* line: 83, address: 0x602a28dc */     if ( (a2[149] & 1) != 0 )
/* line: 84 */     {
/* line: 85, address: 0x602a28f8 */       v7 = 1;
/* line: 86, address: 0x602a28f4 */       if ( !(*(int (__fastcall **)(_BYTE *, _BYTE *, int))(*(_DWORD *)a1 + 288))(a1, a2, a3) )
/* line: 87 */       {
/* line: 88, address: 0x602a2904 */         v6 = *(_DWORD *)(a3 + 140);
/* line: 89, address: 0x602a2904 */         goto LABEL_36;
/* line: 90 */       }
/* line: 91, address: 0x602a2924 */       return v7;
/* line: 92 */     }
/* line: 93, address: 0x602a291c */     return 0;
/* line: 94 */   }
/* line: 95 */ LABEL_36:
/* line: 96, address: 0x602a2918 */   if ( v6 != 25 || (a2[151] & 2) == 0 )
/* line: 97, address: 0x602a2918 */     return 0;
/* line: 98, address: 0x602a2924 */   return (*(int (__fastcall **)(_BYTE *, _BYTE *, int))(*(_DWORD *)a1 + 308))(a1, a2, a3) != 0;
/* line: 99 */ }