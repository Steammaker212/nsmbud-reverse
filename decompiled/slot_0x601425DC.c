#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601425DC(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601425DC(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601425DC(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601425DC(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601425DC(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601425DC(_DWORD *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601425DC(_DWORD *a1);
/* line: 0, address: 0x601425dc */ int __fastcall sub_601425DC(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   int v1; // s0
/* line: 3 */   int v3; // r5
/* line: 4 */   int v4; // r6
/* line: 5 */ 
/* line: 6, address: 0x601425ec */   v3 = 2;
/* line: 7, address: 0x601425f0 */   a1[1547] = 0;
/* line: 8, address: 0x601425f8 */   a1[1548] = 2;
/* line: 9, address: 0x60142604 */   a1[156] = a1 + 1540;
/* line: 10, address: 0x6014261c */   if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 244))(a1) == 1 )
/* line: 11 */   {
/* line: 12, address: 0x6014262c */     a1[155] = a1 + 1531;
/* line: 13, address: 0x60142634 */     a1[1535] = 6;
/* line: 14, address: 0x60142658 */     ActiveCollider__init((int)(a1 + 1607), (int)a1, dword_60AF693C, (int)(a1 + 1683));
/* line: 15, address: 0x60142668 */     v4 = MEMORY[0xC88234];
/* line: 16, address: 0x60142684 */     if ( !ActiveColliderMgr_isInActiveList(MEMORY[0xC88234], a1 + 1607)
/* line: 17 */       && !ActiveColliderMgr_isInCreateList(v4, a1 + 1607) )
/* line: 18 */     {
/* line: 19, address: 0x60142698 */       ActiveColliderMgr_addToCreateList(v4, a1 + 1607);
/* line: 20 */     }
/* line: 21, address: 0x601426b0 */     LightMask__init(a1 + 1549, 0, 2);
/* line: 22, address: 0x601426c0 */     (*(void (__fastcall **)(_DWORD *))(*a1 + 264))(a1);
/* line: 23, address: 0x601426d0 */     a1[1559] = v1;
/* line: 24, address: 0x601426d8 */     a1[1527] = a1[27];
/* line: 25, address: 0x601426e4 */     a1[1528] = a1[28];
/* line: 26, address: 0x601426f0 */     a1[1529] = a1[29];
/* line: 27, address: 0x601426f8 */     a1[123] = 0;
/* line: 28, address: 0x601426fc */     a1[124] = 0;
/* line: 29, address: 0x60142700 */     v3 = 1;
/* line: 30, address: 0x60142708 */     a1[125] = 1082130432;
/* line: 31, address: 0x6014270c */     a1[126] = 1082130432;
/* line: 32 */   }
/* line: 33, address: 0x60142714 */   return v3;
/* line: 34 */ }