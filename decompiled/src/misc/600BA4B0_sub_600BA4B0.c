/* sub_600BA4B0
 * address: 0x600BA4B0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600BA4B0(signed int result)
{
  if ( !FIELD_U32(result, 6220) )
    return EffectWrapper_update((EffectWrapper *)(result + 6224), 769, (Vec3 *)(result + 108), 0, 0);
  return result;
}
