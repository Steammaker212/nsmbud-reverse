/* Actor_fufuboru_build
 * address: 0x602B26D4   size: 396   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_fufuboru_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1AF0u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE3884;
  FIELD_U8(v2, 6299) = 0;
  FIELD_U8(v2, 6300) = 0;
  FIELD_U8(v2, 6324) = 0;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6340) = 0;
  FIELD_U32(v2, 6336) = 0;
  FIELD_U32(v2, 6332) = 0;
  FIELD_U32(v2, 6328) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6344));
  FIELD_U32(v2, 6344) = off_60BC1450;
  FIELD_U8(v2, 6448) = 0;
  FIELD_U8(v2, 6449) = 0;
  FIELD_U32(v2, 6452) = 0;
  FIELD_U32(v2, 6456) = 0;
  FIELD_U8(v2, 6460) = 0;
  FIELD_U32(v2, 6464) = 0;
  FIELD_U32(v2, 6468) = 0;
  FIELD_U32(v2, 6476) = &ActorScaler_vtable;
  FIELD_U32(v2, 6480) = 1065353216;
  FIELD_U32(v2, 6484) = 1065353216;
  FIELD_U32(v2, 6488) = 1065353216;
  FIELD_U32(v2, 6492) = 1065353216;
  FIELD_U32(v2, 6496) = 0;
  FIELD_U32(v2, 6500) = 0;
  FIELD_U32(v2, 6504) = v2;
  sub_602A8564((_DWORD *)(v2 + 6508), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 6544), FIELD_U32(v2, 8));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6580));
  FIELD_U8(v2, 6884) = 0;
  FIELD_U8(v2, 6885) = 0;
  FIELD_U32(v2, 6888) = off_60BE3B2C;
  return v2;
}
