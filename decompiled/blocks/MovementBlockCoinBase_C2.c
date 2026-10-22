#include "nsmbudx_prelude.h"

/* ---- addr: 0x60563170 */ void __fastcall MovementBlockCoinBase__dtor(Actor *a1)
/* line: 1 */ {
/* line: 2, address: 0x6056318c */   *(_DWORD *)a1 = 12620796;
/* line: 3, address: 0x60563190 */   ShapedCollider_dtor();
/* line: 4, address: 0x605631a4 */   *(_DWORD *)a1 = 12321080;
/* line: 5, address: 0x605631a8 */   CollisionMgr_dtor((char *)a1 + 648);
/* line: 6, address: 0x605631b4 */   StageActor__dtor(a1);
/* line: 7 */ }