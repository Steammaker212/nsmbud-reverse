/* sub_6054371C
 * address: 0x6054371C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054371C(int a1)
{
  int result; // r0

  result = dword_60CC6B68;
  if ( !FIELD_U8(dword_60CC6B68, 65) )
  {
    sub_6081699C(dword_60CC6B68);
    FIELD_U8(a1, 33504) = 1;
    return 33504;
  }
  return result;
}
