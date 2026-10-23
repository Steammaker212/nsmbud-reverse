/* Actor_suta_build
 * address: 0x6046EDA0   size: 140   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_suta_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B50u);
  sub_60466BC4(v2, a1);
  *(_DWORD *)v2 = off_60BFC53C;
  LightMask__ctor((RevealMaskRelated *)(v2 + 6828));
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6868));
  FIELD_U32(v2, 6868) = off_60BC1450;
  FIELD_U16(v2, 6988) = 0;
  FIELD_U32(v2, 6984) = 0;
  FIELD_U32(v2, 6980) = 0;
  FIELD_U32(v2, 6972) = 0;
  FIELD_U32(v2, 6976) = 0;
  return v2;
}
