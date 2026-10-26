/* Amp__ctor
 * address: 0x60258228   size: 272   group: misc
 * sym: Amp::Amp(ActorBuildInfo const*) as C3
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Amp *__fastcall Amp__ctor(ActorBuildInfo *a1)
{
  Amp *v2; // r4

  v2 = (Amp *)operator_new(0x1B10u);
  Enemy__ctor(&FIELD_U32(v2, 0x0), a1);
  FIELD_U32(v2, 0x0) = (int)Amp_vtable;
  EffectWrapper_ctor(&FIELD_U32(v2, 0x18AC));
  FIELD_U32(v2, 0x18AC) = (int)off_60BC1450;
  FIELD_U32(v2, 0x1918) = 0;
  FIELD_U32(v2, 0x191C) = 0;
  sub_6000BAC8(&FIELD_U32(v2, 0x1920), FIELD_U32(v2, 0x8));
  sub_6000B63C(&FIELD_U32(v2, 0x1944), FIELD_U32(v2, 0x8));
  LightSource__ctor(&FIELD_U32(v2, 0x1968));
  ActiveCollider_ctor(&FIELD_U32(v2, 0x19B4));
  FIELD_U32(v2, 0x1AE4) = (int)off_60BDABCC;
  FIELD_U32(v2, 0x1AE8) = (int)&ActorScaler_vtable;
  FIELD_U32(v2, 0x1AEC) = 0x3F800000;
  FIELD_U32(v2, 0x1AF0) = 0x3F800000;
  FIELD_U32(v2, 0x1AF4) = 0x3F800000;
  FIELD_U32(v2, 0x1AF8) = 0x3F800000;
  FIELD_U32(v2, 0x1AFC) = 0;
  FIELD_U32(v2, 0x1B00) = 0;
  FIELD_U32(v2, 0x1B04) = (int)v2;
  FIELD_U32(v2, 0x1B08) = 0;
  FIELD_U8(v2, 0x1B0C) = 0;
  return v2;
}
