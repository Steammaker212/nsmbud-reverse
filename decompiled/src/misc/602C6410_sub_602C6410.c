/* sub_602C6410
 * address: 0x602C6410   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602C6410(signed int result)
{
  float v1; // s0
  float v2; // s2
  Vec3 v3; // [sp+4h] [bp-14h] BYREF

  if ( FIELD_F32(result, 28124) <= 0.0 )
  {
    v1 = FIELD_F32(result, 112);
    v2 = FIELD_F32(result, 116);
    v3.x = FIELD_F32(result, 108);
    v3.y = v1 + -16.0;
    v3.z = v2 + 50.0;
    return EffectWrapper_update((EffectWrapper *)(result + 28148), 1153, &v3, 0, 0);
  }
  return result;
}
