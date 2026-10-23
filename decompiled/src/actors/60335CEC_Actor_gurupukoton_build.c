/* Actor_gurupukoton_build
 * address: 0x60335CEC   size: 276   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_gurupukoton_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B38u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BECA9C;
  sub_6000BAC8((_DWORD *)(v2 + 6324), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 6360), FIELD_U32(v2, 8));
  FIELD_U8(v2, 6436) = 0;
  FIELD_U32(v2, 6508) = 0;
  FIELD_U32(v2, 6512) = -1;
  EffectData_ctor((EffectData *)(v2 + 6456));
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6520));
  FIELD_U32(v2, 6520) = off_60BC1450;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6628));
  FIELD_U32(v2, 6932) = off_60BECA6C;
  FIELD_U32(v2, 6936) = &ActorScaler_vtable;
  FIELD_U32(v2, 6940) = 1065353216;
  FIELD_U32(v2, 6944) = 1065353216;
  FIELD_U32(v2, 6948) = 1065353216;
  FIELD_U32(v2, 6952) = 1065353216;
  FIELD_U32(v2, 6956) = 0;
  FIELD_U32(v2, 6960) = 0;
  FIELD_U32(v2, 6964) = v2;
  FIELD_U8(v2, 6313) = 0;
  return v2;
}
