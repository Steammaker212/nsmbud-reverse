/* sub_606D69C4
 * address: 0x606D69C4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D69C4(int a1)
{
  int v2; // s0
  int v4[4]; // [sp+0h] [bp-10h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6152));
  *(float *)&v2 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  *(float *)v4 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v4[1] = v2;
  return sub_602F2FD0(a1 + 6852, v4, 0);
}
