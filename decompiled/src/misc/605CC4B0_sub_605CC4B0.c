/* sub_605CC4B0
 * address: 0x605CC4B0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CC4B0(int result, int a2, int a3)
{
  if ( FIELD_U8(a2, 12) )
  {
    sub_60001688(result, *(_DWORD *)a2, a3);
    FIELD_U8(a2, 12) = 0;
    return 0;
  }
  return result;
}
