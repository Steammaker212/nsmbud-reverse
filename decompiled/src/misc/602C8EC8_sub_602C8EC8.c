/* sub_602C8EC8
 * address: 0x602C8EC8   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602C8EC8(signed int result)
{
  float v1; // s2
  Vec3 v2; // [sp+4h] [bp-14h] BYREF

  if ( FIELD_F32(result, 28100) <= 0.0 )
  {
    v1 = FIELD_F32(result, 112);
    v2.x = FIELD_F32(result, 108);
    v2.y = v1 + -32.0;
    v2.z = 4500.0;
    return EffectWrapper_update((EffectWrapper *)(result + 28124), 1154, &v2, 0, 0);
  }
  return result;
}
