#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463CD0(int a1, int a2, unsigned int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463CD0(int a1, int a2, unsigned int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463CD0(int a1, int a2, unsigned int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463CD0(int a1, int a2, unsigned int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463CD0(int a1, int a2, unsigned int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463CD0(int a1, int a2, unsigned int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463CD0(int a1, int a2, unsigned int a3);
/* line: 0, address: 0x60463cd0 */ int __fastcall sub_60463CD0(int a1, int a2, unsigned int a3)
/* line: 1 */ {
/* line: 2 */   int v5; // r1
/* line: 3 */   int v6; // r6
/* line: 4 */   int v7; // r6
/* line: 5 */   unsigned int v8; // r6
/* line: 6 */   int v9; // r0
/* line: 7 */   _BYTE v11[8]; // [sp+8h] [bp-10h] BYREF
/* line: 8 */   _DWORD v12[2]; // [sp+10h] [bp-8h] BYREF
/* line: 9 */ 
/* line: 10, address: 0x60463ce4 */   switch ( a2 )
/* line: 11 */   {
/* line: 12, address: 0x60463ce4 */     case 0:
/* line: 13, address: 0x60463d68 */       return 0;
/* line: 14, address: 0x60463ce4 */     case 1:
/* line: 15, address: 0x60463d74 */       v8 = 0;
/* line: 16, address: 0x60463d90 */       sub_60400980(MEMORY[0xC99E3C], (char)a3, 0, 0, 0);
/* line: 17, address: 0x60463d9c */       if ( a3 < 4 )
/* line: 18, address: 0x60463d9c */         v8 = a3;
/* line: 19, address: 0x60463dac */       v9 = *(_DWORD *)(MEMORY[0xCC436C] + 4 * v8 + 32);
/* line: 20, address: 0x60463db4 */       if ( v9 )
/* line: 21, address: 0x60463db8 */         sub_607AA6F4(v9);
/* line: 22 */       break;
/* line: 23, address: 0x60463ce4 */     case 2:
/* line: 24, address: 0x60463d1c */       sub_604005D0(MEMORY[0xC99E3C], (char)a3, 8, 2, 0, 0);
/* line: 25, address: 0x60463d24 */       v5 = *(_DWORD *)(a1 + 112);
/* line: 26, address: 0x60463d30 */       v6 = MEMORY[0xC7F534];
/* line: 27, address: 0x60463d38 */       v12[0] = *(_DWORD *)(a1 + 108);
/* line: 28, address: 0x60463d3c */       v12[1] = v5;
/* line: 29, address: 0x60463d48 */       mapPositionToScreen(v11, v12);
/* line: 30, address: 0x60463d60 */       BasicSoundActor2_play(v6, "SE_PLY_GET_ITEM_AGAIN", v11, 0);
/* line: 31 */       break;
/* line: 32 */   }
/* line: 33, address: 0x60463dcc */   v7 = 1;
/* line: 34, address: 0x60463dd8 */   sub_600221A0(MEMORY[0xC7F52C], 4, a3, 1);
/* line: 35, address: 0x60463dec */   sub_603FFD80(MEMORY[0xC99DD4] + 852);
/* line: 36, address: 0x60463df4 */   sub_604635F4(a1);
/* line: 37, address: 0x60463df8 */   *(_BYTE *)(a1 + 19) = 1;
/* line: 38, address: 0x60463e04 */   return v7;
/* line: 39 */ }