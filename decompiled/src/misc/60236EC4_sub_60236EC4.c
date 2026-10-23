/* sub_60236EC4
 * address: 0x60236EC4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60236EC4(unsigned int a1, EffectWrapper *a2, int a3, Vec3 *a4, Vec3i *a5, Vec3 *a6)
{
  int v6; // r4
  signed int result; // r0

  v6 = FIELD_U32(dword_60C8D9DC, 2308);
  if ( a1 <= 3 )
    FIELD_U32(dword_60C8D9DC, 2308) = a1;
  result = EffectWrapper_update(a2, a3, a4, a5, a6);
  FIELD_U32(dword_60C8D9DC, 2308) = v6;
  return result;
}
