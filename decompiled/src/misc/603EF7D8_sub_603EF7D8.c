/* sub_603EF7D8
 * address: 0x603EF7D8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603EF7D8(int a1)
{
  signed int result; // r0

  sub_603EF810();
  result = FIELD_U32(a1, 100);
  if ( result )
  {
    result = EffectData_update((EffectData *)result, (Vec3 *)(a1 + 20), 0, 0);
    if ( !result )
    {
      FIELD_U8(a1, 16) = 1;
      return 1;
    }
  }
  return result;
}
