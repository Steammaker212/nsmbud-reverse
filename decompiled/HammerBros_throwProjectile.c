#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall HammerBros_throwProjectile(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall HammerBros_throwProjectile(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall HammerBros_throwProjectile(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall HammerBros_throwProjectile(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall HammerBros_throwProjectile(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall HammerBros_throwProjectile(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall HammerBros_throwProjectile(int a1);
/* line: 0, address: 0x602cc124 */ int __fastcall HammerBros_throwProjectile(int a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   _DWORD *v3; // r4
/* line: 4 */   int v4; // t1
/* line: 5 */   int v5; // r5
/* line: 6 */   _BYTE *v6; // r5
/* line: 7 */   int v7; // t1
/* line: 8 */ 
/* line: 9, address: 0x602cc12c */   result = 6608;
/* line: 10, address: 0x602cc130 */   v4 = *(_DWORD *)(a1 + 6608);
/* line: 11, address: 0x602cc130 */   v3 = (_DWORD *)(a1 + 6608);
/* line: 12, address: 0x602cc138 */   if ( v4 )
/* line: 13 */   {
/* line: 14, address: 0x602cc154 */     v5 = ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 15, address: 0x602cc174 */     result = _cxa_guard_acquire_0(13139240);
/* line: 16, address: 0x602cc17c */     if ( result )
/* line: 17 */     {
/* line: 18, address: 0x602cc194 */       MEMORY[0xC87D24] = 12394692;
/* line: 19, address: 0x602cc1a0 */       result = _cxa_guard_release_0(13139240);
/* line: 20 */     }
/* line: 21, address: 0x602cc1a8 */     if ( v5 )
/* line: 22 */     {
/* line: 23, address: 0x602cc1c0 */       result = (**(int (__fastcall ***)(int, int))v5)(v5, 13139236);
/* line: 24, address: 0x602cc1c8 */       if ( result == 1 )
/* line: 25 */       {
/* line: 26, address: 0x602cc1d0 */         v7 = *(unsigned __int8 *)(v5 + 11844);
/* line: 27, address: 0x602cc1d0 */         v6 = (_BYTE *)(v5 + 11844);
/* line: 28, address: 0x602cc1d0 */         result = v7;
/* line: 29, address: 0x602cc1d8 */         if ( !v7 )
/* line: 30 */         {
/* line: 31, address: 0x602cc1dc */           *v6 = 1;
/* line: 32, address: 0x602cc1e4 */           *v3 = 0;
/* line: 33, address: 0x602cc1e0 */           return 0;
/* line: 34 */         }
/* line: 35 */       }
/* line: 36 */     }
/* line: 37 */   }
/* line: 38, address: 0x602cc1a8 */   return result;
/* line: 39 */ }