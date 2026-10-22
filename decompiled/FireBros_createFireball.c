#include "nsmbudx_prelude.h"
/* line: 0, address: 0x602a9b88 */ _BYTE *__fastcall FireBros_createFireball(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   int v1; // s0
/* line: 3 */   int v2; // s1
/* line: 4 */   float v3; // s2
/* line: 5 */   int v5; // r0
/* line: 6 */   float v6; // s0
/* line: 7 */   int v7; // r0
/* line: 8 */   int v8; // r4
/* line: 9 */   _BYTE *v9; // r5
/* line: 10 */   _DWORD v11[11]; // [sp+4h] [bp-2Ch] BYREF
/* line: 11 */ 
/* line: 12, address: 0x602a9ba4 */   (*(void (__fastcall **)(_DWORD *))(*a1 + 708))(a1);
/* line: 13, address: 0x602a9bc0 */   memset(&v11[1], 0, 0x28u);
/* line: 14, address: 0x602a9bcc */   v11[0] = a1[20] & 1;
/* line: 15, address: 0x602a9be4 */   v11[3] = Profile::get(MEMORY[0xAF3914]);
/* line: 16, address: 0x602a9bf4 */   v5 = a1[20];
/* line: 17, address: 0x602a9bf8 */   v11[4] = v1;
/* line: 18, address: 0x602a9bfc */   v11[5] = v2;
/* line: 19, address: 0x602a9c00 */   v6 = v3 + 12.0;
/* line: 20, address: 0x602a9c08 */   if ( v5 )
/* line: 21, address: 0x602a9c08 */     v6 = v3;
/* line: 22, address: 0x602a9c14 */   if ( v5 == 1 )
/* line: 23, address: 0x602a9c14 */     v6 = v6 + 0.0;
/* line: 24, address: 0x602a9c18 */   *(float *)&v11[6] = v6;
/* line: 25, address: 0x602a9c1c */   v7 = a1[40];
/* line: 26, address: 0x602a9c20 */   v8 = 0;
/* line: 27, address: 0x602a9c24 */   v11[7] = v7;
/* line: 28, address: 0x602a9c2c */   LOBYTE(v11[8]) = 0;
/* line: 29, address: 0x602a9c3c */   v9 = ActorMgr::create(MEMORY[0xC7B400], (int)v11, 0);
/* line: 30, address: 0x602a9c5c */   if ( _cxa_guard_acquire_0(13087588) )
/* line: 31 */   {
/* line: 32, address: 0x602a9c7c */     MEMORY[0xC7B360] = 12320920;
/* line: 33, address: 0x602a9c88 */     _cxa_guard_release_0(13087588);
/* line: 34 */   }
/* line: 35, address: 0x602a9c90 */   if ( v9 )
/* line: 36 */   {
/* line: 37, address: 0x602a9cac */     v8 = (**(int (__fastcall ***)(_BYTE *, int))v9)(v9, 13087584);
/* line: 38, address: 0x602a9cb4 */     if ( v8 )
/* line: 39, address: 0x602a9cb4 */       return v9;
/* line: 40 */   }
/* line: 41, address: 0x602a9cc4 */   return (_BYTE *)v8;
/* line: 42 */ }