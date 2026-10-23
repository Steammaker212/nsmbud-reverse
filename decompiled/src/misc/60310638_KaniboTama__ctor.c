/* KaniboTama__ctor
 * address: 0x60310638   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KaniboTama__ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1968u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = KaniboTama__vtable;
  FIELD_U32(v2, 6300) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6304));
  FIELD_U32(v2, 6304) = off_60BC1450;
  FIELD_U32(v2, 6408) = (FIELD_U32(v2, 20) >> 4) & 1;
  FIELD_U8(v2, 6412) = 0;
  FIELD_U32(v2, 6416) = 1065353216;
  FIELD_U8(v2, 6420) = 0;
  FIELD_U32(v2, 6424) = 0;
  sub_602A8564((_DWORD *)(v2 + 6428), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 6464), FIELD_U32(v2, 8));
  FIELD_U32(v2, 6500) = off_60BE9FFC;
  FIELD_U32(v2, 80) = FIELD_U32(v2, 20) & 1;
  FIELD_U8(v2, 533) = 3;
  return v2;
}
