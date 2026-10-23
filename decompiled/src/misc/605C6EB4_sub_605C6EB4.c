/* sub_605C6EB4
 * address: 0x605C6EB4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C6EB4(int a1, int a2, int a3)
{
  *(_DWORD *)a1 = a2;
  FIELD_U32(a1, 4) = a3;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 8));
  FIELD_U32(a1, 8) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 112));
  FIELD_U32(a1, 112) = off_60BC1450;
  LightSource__ctor((LightSource *)(a1 + 216));
  FIELD_U32(a1, 288) = 0;
  FIELD_U32(a1, 292) = 0;
  FIELD_U8(a1, 296) = 3;
  return a1;
}
