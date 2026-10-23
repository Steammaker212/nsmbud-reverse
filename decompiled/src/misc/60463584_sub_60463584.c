/* sub_60463584
 * address: 0x60463584   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60463584(signed int result)
{
  int v1; // r2
  int v2; // r2

  if ( FIELD_U32(result, 6224) != 2 )
  {
    v1 = FIELD_U32(result, 6228);
    if ( !v1 )
      return EffectWrapper_update(
               (EffectWrapper *)(result + 6684),
               90,
               (Vec3 *)(result + 6124),
               0,
               (Vec3 *)(result + 144));
    v2 = v1 - 1;
    FIELD_U32(result, 6228) = v2;
    if ( !v2 )
      return EffectWrapper_update(
               (EffectWrapper *)(result + 6684),
               90,
               (Vec3 *)(result + 6124),
               0,
               (Vec3 *)(result + 144));
  }
  return result;
}
