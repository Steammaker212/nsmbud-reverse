/* sub_6081A088
 * address: 0x6081A088   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081A088(int a1)
{
  int result; // r0

  result = 0;
  if ( !FIELD_U8(a1, 20) )
  {
    FIELD_U8(a1, 20) = sub_60815EE0(dword_60CC6B68);
    return 1;
  }
  return result;
}
