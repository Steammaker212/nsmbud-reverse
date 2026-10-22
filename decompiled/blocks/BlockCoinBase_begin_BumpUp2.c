#include "nsmbudx_prelude.h"

/* ---- addr: 0x605b6858 */ int __fastcall BlockCoinBase_beginState_BumpUp2(int a1)
/* line: 1 */ {
/* line: 2 */   int *v1; // r4
/* line: 3 */   int v2; // t1
/* line: 4 */ 
/* line: 5, address: 0x605b685c */   v1 = (int *)a1;
/* line: 6, address: 0x605b686c */   *(_DWORD *)(a1 + 6892) = 0;
/* line: 7, address: 0x605b6874 */   *(_BYTE *)(a1 + 6960) = 0;
/* line: 8, address: 0x605b687c */   *(_DWORD *)(a1 + 6964) = 0;
/* line: 9, address: 0x605b688c */   *(float *)(a1 + 116) = *(float *)(a1 + 116) + 2.0;
/* line: 10, address: 0x605b6890 */   *(_DWORD *)(a1 + 6796) = 0;
/* line: 11, address: 0x605b6898 */   *(_DWORD *)(a1 + 124) = 0x40000000;
/* line: 12, address: 0x605b68a8 */   (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
/* line: 13, address: 0x605b68bc */   CollisionMgr_setSensor(v1 + 162, v1 + 1526, 2);
/* line: 14, address: 0x605b68c4 */   v2 = v1[1564];
/* line: 15, address: 0x605b68c4 */   v1 += 1564;
/* line: 16, address: 0x605b68cc */   *v1 = v2 | 0x400;
/* line: 17, address: 0x605b68d4 */   v1[156] = 1;
/* line: 18, address: 0x605b68d8 */   return 1;
/* line: 19 */ }