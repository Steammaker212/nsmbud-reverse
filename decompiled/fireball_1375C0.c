#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601375C0(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601375C0(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601375C0(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601375C0(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601375C0(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601375C0(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601375C0(int a1);
/* line: 0, address: 0x601375c0 */ int __fastcall sub_601375C0(int a1)
/* line: 1 */ {
/* line: 2 */   int v1; // r4
/* line: 3 */   int v2; // r5
/* line: 4 */   int result; // r0
/* line: 5 */ 
/* line: 6, address: 0x601375d0 */   v1 = a1 + 188;
/* line: 7, address: 0x601375dc */   ActiveCollider__init(a1 + 188, a1, dword_60BD25A4, 0);
/* line: 8, address: 0x601375ec */   v2 = MEMORY[0xC88234];
/* line: 9, address: 0x601375f4 */   result = ActiveColliderMgr_isInActiveList(MEMORY[0xC88234], v1);
/* line: 10, address: 0x601375fc */   if ( !result )
/* line: 11 */   {
/* line: 12, address: 0x60137608 */     result = ActiveColliderMgr_isInCreateList(v2, v1);
/* line: 13, address: 0x60137610 */     if ( !result )
/* line: 14, address: 0x60137624 */       return ActiveColliderMgr_addToCreateList(v2, v1);
/* line: 15 */   }
/* line: 16, address: 0x601375fc */   return result;
/* line: 17 */ }