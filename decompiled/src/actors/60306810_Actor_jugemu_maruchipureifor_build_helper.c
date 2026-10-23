/* Actor_jugemu_maruchipureifor_build_helper
 * address: 0x60306810   size: 268   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_jugemu_maruchipureifor_build_helper(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BE91D4;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6308));
  FIELD_U32(a1, 6308) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6412));
  FIELD_U32(a1, 6412) = off_60BC1450;
  memset((void *)(a1 + 6516), 0, 80);
  FIELD_U16(a1, 6596) = 255;
  FIELD_U8(a1, 6598) = 0;
  FIELD_U8(a1, 6608) = 0;
  FIELD_U32(a1, 6604) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6612));
  FIELD_U32(a1, 6916) = &ActorScaler_vtable;
  FIELD_U32(a1, 6920) = 1065353216;
  FIELD_U32(a1, 6924) = 1065353216;
  FIELD_U32(a1, 6928) = 1065353216;
  FIELD_U32(a1, 6932) = 1065353216;
  FIELD_U32(a1, 6936) = 0;
  FIELD_U32(a1, 6940) = 0;
  FIELD_U32(a1, 6944) = a1;
  FIELD_U32(a1, 6948) = off_60BE9488;
  FIELD_U32(a1, 6600) = 0;
  FIELD_U8(a1, 6604) = 0;
  return a1;
}
