/* Actor_pentaro_build
 * address: 0x60367654   size: 284   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_pentaro_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x19D8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BF00FC;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U32(v2, 6304) = 7;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U8(v2, 6312) = 0;
  FIELD_U32(v2, 6316) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6320));
  FIELD_U32(v2, 6320) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6424));
  FIELD_U32(v2, 6424) = off_60BC1450;
  FIELD_U32(v2, 6528) = 0;
  FIELD_U8(v2, 6532) = 0;
  FIELD_U32(v2, 6536) = &ActorScaler_vtable;
  FIELD_U32(v2, 6540) = 1065353216;
  FIELD_U32(v2, 6544) = 1065353216;
  FIELD_U32(v2, 6548) = 1065353216;
  FIELD_U32(v2, 6552) = 1065353216;
  FIELD_U32(v2, 6556) = 0;
  FIELD_U32(v2, 6560) = 0;
  FIELD_U32(v2, 6564) = v2;
  FIELD_U32(v2, 6568) = &off_60BF03A0;
  FIELD_U8(v2, 6572) = 0;
  sub_602A40A0((_DWORD *)(v2 + 6576), FIELD_U32(v2, 8));
  return v2;
}
