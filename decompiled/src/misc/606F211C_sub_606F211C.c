/* sub_606F211C
 * address: 0x606F211C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F211C(int a1, ActorBuildInfo *a2)
{
  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C20414;
  FIELD_U32(a1, 6104) = 2139095039;
  FIELD_U32(a1, 6108) = 2139095039;
  FIELD_U32(a1, 6112) = -8388609;
  FIELD_U32(a1, 6116) = -8388609;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6120));
  FIELD_U32(a1, 6120) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6224));
  FIELD_U32(a1, 6224) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6328));
  FIELD_U32(a1, 6328) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6432));
  FIELD_U32(a1, 6432) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6536));
  FIELD_U32(a1, 6536) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6640));
  FIELD_U32(a1, 6640) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6744));
  FIELD_U32(a1, 6744) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6848));
  FIELD_U32(a1, 6848) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6952));
  FIELD_U32(a1, 6952) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7056));
  FIELD_U32(a1, 7056) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7160));
  FIELD_U32(a1, 7160) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7264));
  FIELD_U32(a1, 7264) = off_60BC1450;
  memset((void *)(a1 + 7368), 0, 154);
  FIELD_U32(a1, 7544) = 0;
  FIELD_U32(a1, 7540) = 0;
  FIELD_U32(a1, 7536) = 0;
  FIELD_U32(a1, 7532) = 0;
  FIELD_U32(a1, 7528) = 0;
  FIELD_U32(a1, 7524) = 0;
  return a1;
}
