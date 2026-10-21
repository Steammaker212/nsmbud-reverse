/* line: 0, address: 0x6045faa8 */ int __fastcall sub_6045FAA8(int a1)
/* line: 1 */ {
/* line: 2 */   unsigned int v2; // r0
/* line: 3 */   int v3; // r5
/* line: 4 */   float v4; // r0
/* line: 5 */   int v5; // r1
/* line: 6 */   float v6; // s0
/* line: 7 */   int result; // r0
/* line: 8 */   int v8; // r1
/* line: 9 */   int v9; // r1
/* line: 10 */   int v10; // r3
/* line: 11 */ 
/* line: 12, address: 0x6045fab8 */   *(_DWORD *)(a1 + 6208) = -1;
/* line: 13, address: 0x6045fac4 */   v2 = *(_DWORD *)(a1 + 6184);
/* line: 14, address: 0x6045fad0 */   if ( v2 >= 4 )
/* line: 15, address: 0x6045fad0 */     v2 = 0;
/* line: 16, address: 0x6045fadc */   v3 = *(_DWORD *)(MEMORY[0xCC436C] + 4 * v2 + 48);
/* line: 17, address: 0x6045fafc */   if ( _cxa_guard_acquire_0(13087612) )
/* line: 18 */   {
/* line: 19, address: 0x6045fb1c */     MEMORY[0xC7B378] = 12320956;
/* line: 20, address: 0x6045fb28 */     _cxa_guard_release_0(13087612);
/* line: 21 */   }
/* line: 22, address: 0x6045fb50 */   if ( v3 && (**(int (__fastcall ***)(int, int))v3)(v3, 13087608) == 1 )
/* line: 23 */   {
/* line: 24, address: 0x6045fb54 */     v4 = *(float *)(v3 + 108);
/* line: 25, address: 0x6045fb58 */     *(float *)(a1 + 108) = v4;
/* line: 26, address: 0x6045fb5c */     v5 = *(_DWORD *)(v3 + 1216);
/* line: 27, address: 0x6045fb64 */     if ( (v5 & 0x2000) != 0 )
/* line: 28 */     {
/* line: 29, address: 0x6045fb78 */       v6 = -20.0;
/* line: 30 */     }
/* line: 31 */     else
/* line: 32 */     {
/* line: 33, address: 0x6045fb6c */       if ( (v5 & 0x1000) == 0 )
/* line: 34 */       {
/* line: 35 */ LABEL_12:
/* line: 36, address: 0x6045fb88 */         *(float *)(a1 + 112) = *(float *)(MEMORY[0xCC6484] + 124) + -48.0;
/* line: 37, address: 0x6045fba0 */         goto LABEL_13;
/* line: 38 */       }
/* line: 39, address: 0x6045fb70 */       v6 = 20.0;
/* line: 40 */     }
/* line: 41, address: 0x6045fb84 */     *(float *)(a1 + 108) = v4 + v6;
/* line: 42, address: 0x6045fb84 */     goto LABEL_12;
/* line: 43 */   }
/* line: 44 */ LABEL_13:
/* line: 45, address: 0x6045fba4 */   result = a1 + 6672;
/* line: 46, address: 0x6045fbac */   v8 = *(_DWORD *)(a1 + 6672);
/* line: 47, address: 0x6045fbc0 */   if ( !v8 || (v9 = v8 - 1, (*(_DWORD *)result = v9) == 0) )
/* line: 48 */   {
/* line: 49, address: 0x6045fbcc */     v10 = *(_DWORD *)(a1 + 6676);
/* line: 50, address: 0x6045fbd8 */     *(_DWORD *)(a1 + 6676) = v10 + 1;
/* line: 51, address: 0x6045fbe0 */     *(_DWORD *)result = 14;
/* line: 52, address: 0x6045fbe4 */     if ( v10 < 5 )
/* line: 53 */     {
/* line: 54, address: 0x6045fc24 */       result = (((_BYTE)v10 + 1) & 1) == 0;
/* line: 55, address: 0x6045fc2c */       *(_BYTE *)(a1 + 535) = result;
/* line: 56 */     }
/* line: 57 */     else
/* line: 58 */     {
/* line: 59, address: 0x6045fbf4 */       *(_BYTE *)(a1 + 535) = 1;
/* line: 60, address: 0x6045fbf8 */       *(_DWORD *)(a1 + 116) = 1143111680;
/* line: 61, address: 0x6045fc00 */       *(_BYTE *)(a1 + 6056) = 1;
/* line: 62, address: 0x6045fc1c */       return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226744);
/* line: 63 */     }
/* line: 64 */   }
/* line: 65, address: 0x6045fbc0 */   return result;
/* line: 66 */ }