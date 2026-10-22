#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_602C2F88(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_602C2F88(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_602C2F88(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_602C2F88(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_602C2F88(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_602C2F88(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_602C2F88(_DWORD *a1);
/* line: 0, address: 0x602c2f88 */ int __fastcall sub_602C2F88(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   int CurrentState; // r0
/* line: 3 */   int result; // r0
/* line: 4 */   int v4; // r1
/* line: 5 */   int v5; // r1
/* line: 6 */   int v6; // r5
/* line: 7 */   int v7; // [sp+0h] [bp-18h] BYREF
/* line: 8 */   int v8; // [sp+4h] [bp-14h]
/* line: 9 */   int v9; // [sp+8h] [bp-10h]
/* line: 10 */   _BYTE v10[8]; // [sp+10h] [bp-8h] BYREF
/* line: 11 */ 
/* line: 12, address: 0x602c2f98 */   CurrentState = a1[1525];
/* line: 13, address: 0x602c2fa0 */   if ( !CurrentState )
/* line: 14, address: 0x602c2fac */     CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 1521));
/* line: 15, address: 0x602c2fb4 */   a1[3008] = CurrentState;
/* line: 16, address: 0x602c2fbc */   result = sub_602C2BD4(a1);
/* line: 17, address: 0x602c2fc4 */   if ( !result )
/* line: 18 */   {
/* line: 19, address: 0x602c2fdc */     v4 = a1[1611];
/* line: 20, address: 0x602c2fe0 */     v7 = a1[1610];
/* line: 21, address: 0x602c2fe0 */     v8 = v4;
/* line: 22, address: 0x602c2ff0 */     v9 = 1166843904;
/* line: 23, address: 0x602c3000 */     ((void (__fastcall *)(int, int *, _DWORD, _DWORD *))EffectData_create)(476, &v7, 0, a1 + 1613);
/* line: 24, address: 0x602c3014 */     ((void (__fastcall *)(int, int *, _DWORD, _DWORD))EffectData_create)(909, &v7, 0, 0);
/* line: 25, address: 0x602c301c */     v5 = a1[28];
/* line: 26, address: 0x602c3028 */     v6 = MEMORY[0xC7F534];
/* line: 27, address: 0x602c3030 */     v7 = a1[27];
/* line: 28, address: 0x602c3030 */     v8 = v5;
/* line: 29, address: 0x602c303c */     mapPositionToScreen(v10, &v7);
/* line: 30, address: 0x602c3054 */     BasicSoundActor2_play(v6, "SE_OBJ_PNGN_ICE_BREAK", v10, 0);
/* line: 31, address: 0x602c305c */     return sub_602A74C0(a1);
/* line: 32 */   }
/* line: 33, address: 0x602c3064 */   return result;
/* line: 34 */ }