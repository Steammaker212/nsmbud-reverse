#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013A07C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013A07C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013A07C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013A07C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013A07C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013A07C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013A07C(int a1);
/* line: 0, address: 0x6013a07c */ int __fastcall sub_6013A07C(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r5
/* line: 3 */   int v3; // r6
/* line: 4 */   int result; // r0
/* line: 5 */ 
/* line: 6, address: 0x6013a08c */   v2 = a1 + 188;
/* line: 7, address: 0x6013a09c */   ActiveCollider__init(a1 + 188, a1, (int *)0xBD28C0, 0);
/* line: 8, address: 0x6013a0ac */   v3 = MEMORY[0xC88234];
/* line: 9, address: 0x6013a0c8 */   if ( !ActiveColliderMgr_isInActiveList(MEMORY[0xC88234], v2) && !ActiveColliderMgr_isInCreateList(v3, v2) )
/* line: 10, address: 0x6013a0dc */     ActiveColliderMgr_addToCreateList(v3, v2);
/* line: 11, address: 0x6013a0e0 */   result = *(unsigned __int8 *)(a1 + 22);
/* line: 12, address: 0x6013a0e8 */   if ( (result & 0x10) != 0 )
/* line: 13 */   {
/* line: 14, address: 0x6013a0f0 */     *(_DWORD *)(a1 + 312) = 1086324736;
/* line: 15, address: 0x6013a0f4 */     *(_DWORD *)(a1 + 316) = 1086324736;
/* line: 16, address: 0x6013a0e8 */     return 1086324736;
/* line: 17 */   }
/* line: 18, address: 0x6013a0f8 */   return result;
/* line: 19 */ }