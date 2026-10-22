#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134748(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134748(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134748(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134748(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134748(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134748(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60134748(_DWORD *a1);
/* line: 0, address: 0x60134748 */ int __fastcall sub_60134748(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   int v1; // s0
/* line: 3 */   int v2; // s1
/* line: 4 */   int v3; // s2
/* line: 5 */   int v5; // r6
/* line: 6 */   _DWORD *v6; // r4
/* line: 7 */   void (__fastcall **v7)(_DWORD *); // t1
/* line: 8 */ 
/* line: 9, address: 0x6013475c */   (*(void (__fastcall **)(_DWORD *))(*a1 + 296))(a1);
/* line: 10, address: 0x60134768 */   a1[142] |= 0xA0u;
/* line: 11, address: 0x60134778 */   (*(void (__fastcall **)(_DWORD *))(*a1 + 304))(a1);
/* line: 12, address: 0x60134788 */   *(_DWORD *)(a1[1532] + 32) = 2;
/* line: 13, address: 0x60134798 */   (*(void (__fastcall **)(_DWORD *))(*a1 + 352))(a1);
/* line: 14, address: 0x601347b0 */   v5 = MEMORY[0xC88234];
/* line: 15, address: 0x601347cc */   if ( !ActiveColliderMgr_isInActiveList(MEMORY[0xC88234], a1 + 1533)
/* line: 16 */     && !ActiveColliderMgr_isInCreateList(v5, a1 + 1533) )
/* line: 17 */   {
/* line: 18, address: 0x601347e0 */     ActiveColliderMgr_addToCreateList(v5, a1 + 1533);
/* line: 19 */   }
/* line: 20, address: 0x601347e8 */   v7 = (void (__fastcall **)(_DWORD *))a1[1610];
/* line: 21, address: 0x601347e8 */   v6 = a1 + 1610;
/* line: 22, address: 0x601347f4 */   (*v7)(v6);
/* line: 23, address: 0x601347fc */   v6[1] = v1;
/* line: 24, address: 0x601347fc */   v6[2] = v2;
/* line: 25, address: 0x601347fc */   v6[3] = v3;
/* line: 26, address: 0x60134804 */   return 1;
/* line: 27 */ }