/* YoshiFlame__ctor
 * address: 0x607D2640   size: 124   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall YoshiFlame__ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x320u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = &off_60C26158;
  FIELD_U32(v2, 644) = 0;
  FIELD_U32(v2, 648) = 0;
  FIELD_U32(v2, 652) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 656));
  FIELD_U32(v2, 656) = off_60BC1450;
  sub_6000BAC8((_DWORD *)(v2 + 760), FIELD_U32(v2, 8));
  FIELD_U32(v2, 760) = off_60C26124;
  FIELD_U32(v2, 796) = v2;
  return v2;
}
