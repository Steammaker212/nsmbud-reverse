/* sub_603EF788
 * address: 0x603EF788   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EF788(int a1)
{
  EffectData *v2; // r5
  int result; // r0

  v2 = (EffectData *)operator_new(0x40u);
  FIELD_U32(v2, 0x34) = 0;
  FIELD_U32(v2, 0x38) = -1;
  EffectData_ctor(v2);
  FIELD_U32(a1, 100) = v2;
  EffectData_setEffectId(v2, FIELD_U32(a1, 96));
  result = FIELD_U32(a1, 100);
  if ( !result )
  {
    FIELD_U8(a1, 16) = 1;
    return 1;
  }
  return result;
}
