/* sub_6056EC84
 * address: 0x6056EC84   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056EC84(int a1)
{
  ColliderBase *v2; // r5
  _DWORD *v3; // r6
  float v4; // s0

  v2 = (ColliderBase *)(a1 + 6120);
  v3 = (_DWORD *)(a1 + 108);
  if ( sub_60003B88(a1, (_DWORD *)(a1 + 6120)) != 1 )
    ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 7240, a1 + 108);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_6000F338(a1 + 7388);
  StateMgr__execute((StateMgr *)(a1 + 7408));
  v4 = FIELD_F32(a1, 7492);
  *v3 = FIELD_U32(a1, 7488);
  FIELD_F32(a1, 112) = (float)(v4 + -5.0) + FIELD_F32(a1, 6796);
  ShapedCollider_execute(v2);
  sub_605B2D70(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
