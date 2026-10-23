/* sub_6060E3BC
 * address: 0x6060E3BC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060E3BC(int a1)
{
  int v2; // s0
  int v4[4]; // [sp+0h] [bp-10h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  ShapedCollider_execute((ColliderBase *)(a1 + 6112));
  *(float *)&v2 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  *(float *)v4 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v4[1] = v2;
  sub_602F2FD0(a1 + 6792, v4, 0);
  sub_6060E120(a1);
  return 1;
}
