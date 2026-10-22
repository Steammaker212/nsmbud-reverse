#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60461AA0(int result);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60461AA0(int result);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60461AA0(int result);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60461AA0(int result);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60461AA0(int result);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60461AA0(int result);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60461AA0(int result);
/* line: 0, address: 0x60461aa0 */ int __fastcall sub_60461AA0(int result)
/* line: 1 */ {
/* line: 2 */   int v1; // r4
/* line: 3 */   int (__fastcall ***v2)(_DWORD, int); // r5
/* line: 4 */   int CurrentState; // r0
/* line: 5 */   int v4; // r5
/* line: 6 */   _DWORD v5[12]; // [sp+0h] [bp-30h] BYREF
/* line: 7 */ 
/* line: 8, address: 0x60461aa8 */   v1 = result;
/* line: 9, address: 0x60461aac */   v2 = *(int (__fastcall ****)(_DWORD, int))(result + 56);
/* line: 10, address: 0x60461ab4 */   if ( v2 )
/* line: 11 */   {
/* line: 12, address: 0x60461ad4 */     if ( _cxa_guard_acquire_0(13193800) )
/* line: 13 */     {
/* line: 14, address: 0x60461af4 */       MEMORY[0xC95244] = 12321964;
/* line: 15, address: 0x60461b00 */       _cxa_guard_release_0(13193800);
/* line: 16 */     }
/* line: 17, address: 0x60461b18 */     result = (**v2)(v2, 13193796);
/* line: 18, address: 0x60461b20 */     if ( result == 1 )
/* line: 19 */     {
/* line: 20, address: 0x60461b30 */       sub_6035750C(v2, v5);
/* line: 21, address: 0x60461b3c */       sub_6083316C(v1 + 156, v5);
/* line: 22, address: 0x60461b48 */       sub_60833200(v1 + 144, v5);
/* line: 23, address: 0x60461b50 */       *(_DWORD *)(v1 + 108) = v5[3];
/* line: 24, address: 0x60461b58 */       *(_DWORD *)(v1 + 112) = v5[7];
/* line: 25, address: 0x60461b60 */       *(_DWORD *)(v1 + 116) = v5[11];
/* line: 26, address: 0x60461b70 */       result = *(unsigned __int8 *)(MEMORY[0xCC6D8C] + 17);
/* line: 27, address: 0x60461b70 */       if ( *(_BYTE *)(MEMORY[0xCC6D8C] + 17) )
/* line: 28 */       {
/* line: 29, address: 0x60461b84 */         CurrentState = StateMgr::getCurrentState((int)(v2 + 1521));
/* line: 30, address: 0x60461b94 */         v4 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
/* line: 31, address: 0x60461ba8 */         result = (*(int (**)(void))(MEMORY[0xC95038] + 8))();
/* line: 32, address: 0x60461bb8 */         *(_BYTE *)(v1 + 535) = v4 != result;
/* line: 33 */       }
/* line: 34 */     }
/* line: 35 */   }
/* line: 36, address: 0x60461bc0 */   return result;
/* line: 37 */ }