/* sub_609959A4
 * address: 0x609959A4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609959A4(int a1)
{
  if ( (FIELD_U8(a1, 30) & 0x40) != 0 && !FIELD_U8(a1, 76) )
  {
    FIELD_U32(a1, 44) = FIELD_U32(a1, 72);
    FIELD_U8(a1, 76) = 1;
  }
  return sub_609917C0(a1);
}
