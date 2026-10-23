/* sub_607CEE3C
 * address: 0x607CEE3C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CEE3C(int a1)
{
  int result; // r0

  sub_6076B644((_DWORD *)a1);
  result = FIELD_U8(a1, 1238);
  if ( (result & 0x20) != 0 )
  {
    sub_607CFC14(a1);
    return sub_607CFB38(a1, &dword_60CC5398);
  }
  return result;
}
