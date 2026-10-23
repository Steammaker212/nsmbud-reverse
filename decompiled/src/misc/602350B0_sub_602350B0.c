/* sub_602350B0
 * address: 0x602350B0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602350B0(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 10);
  if ( !result )
  {
    if ( FIELD_U32(a1, 40) != 1 )
      ((void (__fastcall *)(int, int))loc_60234958)(a1, 1);
    FIELD_U8(a1, 10) = 1;
    return 1;
  }
  return result;
}
