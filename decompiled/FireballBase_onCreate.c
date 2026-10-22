#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_onCreate(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_onCreate(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_onCreate(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_onCreate(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_onCreate(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_onCreate(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_onCreate(int a1);
/* line: 0, address: 0x60135bd8 */ int __fastcall FireballBase_onCreate(int a1)
/* line: 1 */ {
/* line: 2 */   int v1; // s0
/* line: 3 */   int v3; // r5
/* line: 4 */   int v4; // r0
/* line: 5 */   int v5; // r6
/* line: 6 */   int v7; // [sp+4h] [bp-4h] BYREF
/* line: 7 */ 
/* line: 8, address: 0x60135bf4 */   v3 = 2;
/* line: 9, address: 0x60135bfc */   if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 252))(a1) == 1 )
/* line: 10 */   {
/* line: 11, address: 0x60135c08 */     v3 = 2;
/* line: 12, address: 0x60135c0c */     *(_DWORD *)(a1 + 6208) = 0;
/* line: 13, address: 0x60135c14 */     *(_DWORD *)(a1 + 6212) = 2;
/* line: 14, address: 0x60135c20 */     *(_DWORD *)(a1 + 624) = a1 + 6180;
/* line: 15, address: 0x60135c38 */     if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1) == 1 )
/* line: 16 */     {
/* line: 17, address: 0x60135c48 */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 256))(a1);
/* line: 18, address: 0x60135c58 */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 260))(a1);
/* line: 19, address: 0x60135c5c */       v4 = *(_DWORD *)(a1 + 568);
/* line: 20, address: 0x60135c64 */       *(_DWORD *)(a1 + 620) = a1 + 6144;
/* line: 21, address: 0x60135c70 */       *(_DWORD *)(a1 + 568) = v4 | 0x80;
/* line: 22, address: 0x60135c78 */       *(_DWORD *)(a1 + 572) = 0;
/* line: 23, address: 0x60135c7c */       *(_DWORD *)(a1 + 576) = 0;
/* line: 24, address: 0x60135c80 */       *(_DWORD *)(a1 + 580) = 0;
/* line: 25, address: 0x60135c84 */       *(_DWORD *)(a1 + 6160) = 5;
/* line: 26, address: 0x60135ca8 */       ActiveCollider::init(a1 + 6436, a1, &unk_60AF666C, a1 + 6740);
/* line: 27, address: 0x60135cb8 */       v5 = MEMORY[0xC88234];
/* line: 28, address: 0x60135cd4 */       if ( !ActiveColliderMgr_isInActiveList(MEMORY[0xC88234], a1 + 6436)
/* line: 29 */         && !ActiveColliderMgr_isInCreateList(v5, a1 + 6436) )
/* line: 30 */       {
/* line: 31, address: 0x60135ce8 */         ActiveColliderMgr_addToCreateList(v5, a1 + 6436);
/* line: 32 */       }
/* line: 33, address: 0x60135cfc */       LightMask::init(a1 + 6100, 0, 2);
/* line: 34, address: 0x60135d0c */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 288))(a1);
/* line: 35, address: 0x60135d1c */       *(_DWORD *)(a1 + 6140) = v1;
/* line: 36, address: 0x60135d3c */       physics_21893E8(&v7, a1 + 6220, a1 + 6744, a1 + 108, *(unsigned __int8 *)(a1 + 86));
/* line: 37, address: 0x60135d48 */       *(_DWORD *)(a1 + 6216) = v7;
/* line: 38, address: 0x60135d54 */       *(_DWORD *)(a1 + 6228) = *(_DWORD *)(a1 + 108);
/* line: 39, address: 0x60135d60 */       *(_DWORD *)(a1 + 6232) = *(_DWORD *)(a1 + 112);
/* line: 40, address: 0x60135d6c */       *(_DWORD *)(a1 + 6236) = *(_DWORD *)(a1 + 116);
/* line: 41, address: 0x60135d7c */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 264))(a1);
/* line: 42, address: 0x60135d90 */       StateMgr::changeState(a1 + 6084, 13137880);
/* line: 43, address: 0x60135d94 */       return 1;
/* line: 44 */     }
/* line: 45 */   }
/* line: 46, address: 0x60135da0 */   return v3;
/* line: 47 */ }