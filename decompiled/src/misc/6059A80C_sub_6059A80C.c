/* sub_6059A80C
 * address: 0x6059A80C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6059A80C(int a1)
{
  unsigned int result; // r0

  sub_605DD51C();
  result = FIELD_U8(a1, 6262);
  if ( (result & 2) != 0 )
  {
    result = FIELD_U32(a1, 336) & 0xFFFFDF7F;
    FIELD_U32(a1, 336) = result;
  }
  return result;
}
